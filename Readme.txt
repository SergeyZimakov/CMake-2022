Second Part Of Assignment

1. I added the bash file that runs the app in linux terminal. The file "Run.sh" based in "Auto Run For Linux" folder.

2. CI/CD process based in "./.github/workflows/main.yml".
	* The file describes automated proccess and occures on push and pull_request of main branch.
	* The proccess executes image build in docker.

3. Dockerfile in root of project contains the instructions for image build.

4. For running the app from image open the terminal in linux and run following commands:
	
	- sudo apt install docker.io (optional if docker.io does not installed on your machine)

	- sudo docker pull sergeyzimakov/string_modifier_docker:latest

	- sudo docker run --name stringapp -it --rm sergeyzimakov/string_modifier_docker:latest

5. To get the image as tar.gz file run following command:

	- mkdir FOLDER_NAME

	- cd FOLDER_NAME

	- sudo docker save sergeyzimakov/string_modifier_docker:latest | gzip > myimage.tar.gz
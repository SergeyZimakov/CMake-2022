FROM ubuntu:latest

RUN apt-get update -y
RUN apt-get install cmake -y

RUN mkdir docker_app
COPY . ./docker_app
WORKDIR /docker_app

RUN mkdir build
RUN cd build
RUN cmake ..
RUN cmake --build .

CMD ["./stringModifier"]



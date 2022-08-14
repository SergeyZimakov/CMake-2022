FROM ubuntu:latest

RUN apt-get update -y
RUN apt-get install apt-utils -y
#RUN apt-get install cmake -y

RUN mkdir docker_app
COPY ./build ./docker_app
WORKDIR /docker_app

RUN ls -a

# RUN mkdir build
# RUN cd build
# RUN cmake ..
# RUN cmake --build .

CMD ["./build/stringModifier"]



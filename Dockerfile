FROM ubuntu:latest

RUN apt-get update -y
RUN apt-get install cmake -y
RUN apt-get install build-essential -y

RUN mkdir docker_app
RUN ls -a
COPY . ./docker_app
RUN ls -a
WORKDIR /docker_app
RUN ls -a

RUN mkdir build
RUN ls -a
WORKDIR /docker_app/build
RUN ls -a
RUN cmake ..
RUN cmake --build .

ENTRYPOINT ["./stringModifier"]



FROM ubuntu:latest

RUN apt-get update -y

RUN mkdir docker_app
COPY ./build ./docker_app
WORKDIR /docker_app

ENTRYPOINT ["./stringModifier"]



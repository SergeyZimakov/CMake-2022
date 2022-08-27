FROM ubuntu:latest

RUN apt-get update -y && apt-get install cmake -y && apt-get install build-essential -y && mkdir docker_app
# RUN ls -a
COPY . ./docker_app
#RUN ls -a
WORKDIR /docker_app
#RUN ls -a

RUN mkdir build
#RUN ls -a
WORKDIR /docker_app/build
#RUN ls -a
RUN cmake .. && cmake --build .

ENTRYPOINT ["./stringModifier"]



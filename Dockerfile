FROM ubuntu:latest

RUN apt-get update


WORKDIR /docker_app
COPY . .

RUN mkdir build
RUN cd build
RUN cmake ..
RUN cmake --build .

CMD ["./stringModifier"]



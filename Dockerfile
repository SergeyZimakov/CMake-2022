FROM ubuntu-latest

RUN apt-get update
RUN apt-get install cmake

WORKDIR /docker_app
COPY . .

RUN mkdir build
RUN cd build
RUN cmake ..
RUN cmake --build .

CMD ["./stringModifier"]



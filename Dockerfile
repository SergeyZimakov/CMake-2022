FROM ubuntu:latest

RUN apt-get update -y
RUN apt-get install cmake -y

WORKDIR /docker_app
COPY . .

# RUN mkdir build
# RUN cd build
# RUN cmake ..
# RUN cmake --build .

CMD ["./stringModifier"]



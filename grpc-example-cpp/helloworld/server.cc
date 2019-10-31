#include <iostream>
#include <string>

// hello.grpc.pb.hはどうやって作る？
// hello.pb.hではないの？
// #include "hello.grpc.pb.h"

// using hello::Greeter;

// class GreeterServiceImpl final : publc Greeter::Service {

// }

void RunServer() {
  std::string server_address("0.0.0.0:50051");
  // GreeterServiceImpl service;


  std::cout << "Server listening on " << server_address << std::endl;
}

int main(int argc, char**argv) {
  RunServer();
  return 0;
}

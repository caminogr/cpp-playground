#include <iostream>
#include <string>

void RunServer() {
  std::string server_address("0.0.0.0:50051");
  std::cout << "Server listening on " << server_address << std::endl;
}

int main(int argc, char**argv) {
  RunServer();
  return 0;
}

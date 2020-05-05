#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  int *p1 = nullptr;
  int *p2 = nullptr;
  int a = 1;
  std::string b = "hogefugapiyo";
  std::string c = "hogefugapiyo";

  std::cout << "p1: " << p1 << std::endl;
  std::cout << "p2: " << p2 << std::endl;
  std::cout << "c: " << c << std::endl;
  std::cout << "c&: " << &c << std::endl;

  std::cout << sizeof(p1) << std::endl;
  std::cout << sizeof(a) << std::endl;
  std::cout << sizeof(b) << std::endl;
  std::cout << sizeof(&c) << std::endl;

  return 0;
}

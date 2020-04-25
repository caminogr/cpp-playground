#include <algorithm>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  auto a = 1;
  auto b(2);
  auto c{3};

  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << c << std::endl;
  return 0;
}

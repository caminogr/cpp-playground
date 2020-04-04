#include <iostream>

auto swap = [](auto & a, auto & b) {
  auto temp = a;
  a = b;
  b = temp;
};

int main() {
  int a = 1;
  int &ref = a;

  ref = 4;

  std::cout << a << std::endl;


  int b = 1;
  int c = 2;
  swap(b, c);
  std::cout << 'b' << b << std::endl;
  std::cout << 'c' << c << std::endl;
}

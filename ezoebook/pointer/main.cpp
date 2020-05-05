#include <iostream>

int x{};
int y{};

int main() {
  int object = 0;
  object = 123;
  std::cout << object;

  // T型へのリファレンス
  int &reference = object;

  reference = 456;
  std::cout << object;

  object = 789;
  std::cout << reference << std::endl;

  // ---------
  int &ref = x;
  // refの参照先は変わらない
  std::cout << "ref1: " << ref << std::endl;
  std::cout << "&ref1: " << &ref << std::endl;
  ref = y;
  std::cout << "ref2: " << ref << std::endl;
  std::cout << "&ref2: " << &ref << std::endl;

  int *pointer = &x;
  std::cout << "*pointer1: " << *pointer << std::endl;
  std::cout << "pointer1: " << pointer << std::endl;
  // pointerの参照先をyに変更
  pointer = &y;
  std::cout << "*pointer2: " << *pointer << std::endl;
  std::cout << "pointer2: " << pointer << std::endl;

  // ------------
  // 未定義の挙動

  // int *pt;
  // std::cout << "*pt: " << *pt << std::endl;
  // *pt = 123;
  // std::cout << "*pt: " << *pt << std::endl;

  // ----------
  // std::string *p1 = nullptr;
  // std::cout << "*p1: " << *p1 << std::endl;
}

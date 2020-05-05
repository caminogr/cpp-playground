#include <iostream>
#include <string>

int data{};
int &ref = data;
int main(int argc, char *argv[]) {
  int *ptr = &ref;
  std::cout << data << std::endl;
  std::cout << &ref << std::endl;
  std::cout << *ptr << std::endl;

  int *p1 = nullptr;
  // poniterのreference
  int *&ref1 = p1;

  int data1{};
  // p1の値が&dataになる
  std::cout << "p1: " << p1 << std::endl;
  ref1 = &data1;
  std::cout << "p1: " << p1 << std::endl;

  // --------------
  // const と pointer

  const int data2 = 123;
  const int *p2 = &data2;
  int read = *p2;
  std::cout << "read: " << read << std::endl;

  // --------------
  // constなintへのポインター
  const int x3{};
  const int *p3 = &x3;

  // error
  // constな参照先を変更できない
  // *p3 = 0;

  int y3{};
  // ポインターはconstではないので値の変更ができる
  p3 = &y3;
  // --------------

  // constなポインター
  int data4{};

  //  constなポインター
  int *const p4 = &data4;
  std::cout << "*p4: " << *p4 << std::endl;
  // 参照先の変更は可能
  *p4 = 1;
  std::cout << "*p4: " << *p4 << std::endl;

  // error: 値は変更できない
  // p4 = nullptr;

  return 0;
}

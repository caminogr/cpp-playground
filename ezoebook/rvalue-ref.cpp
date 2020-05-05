#include <iostream>
#include <string>

int object{};
int &f() { return object; }
int &&r_object{};
// int &&rf() { return r_object; }

int &&g() { return 0; }

int main(int argc, char *argv[]) {
  int &&a = 0;
  int b = 0;
  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;

  // error
  // int &&ra = object();

  // int &a = 0;
  // int &lb = 1 + 1;

  // constなlvalue referenceはrvalue束縛することができる
  // 束縛=リフェレンスの初期化

  // error
  // int &hoge = g();
  // non error
  const int &hoge = 0;

  // rvalue リファレンス
  int &&c = 0;
  // rvalueリファレンスcはlvalue
  int &d = c;
  // error: rvalueリファレンスはrvalueではない
  // int &&b = c;
}

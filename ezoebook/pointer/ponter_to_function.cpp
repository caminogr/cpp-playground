#include <iostream>
#include <string>

int f(int x) {
  std::cout << x << std::endl;
  return x;
}

int main(int argc, char *argv[]) {
  using f_type = int(int);
  using f_pointer = f_type *;

  f_pointer ptr = &f;
  // f_pointerをのエイリアス宣言を使わなかった場合
  int (*p1)(int) = &f;

  // 関数へのポインターを経由した関数呼び出し
  (*ptr)(123);
  // 関数へのポインターはそのまま関数呼び出しすることができる
  ptr(123);

  return 0;
}

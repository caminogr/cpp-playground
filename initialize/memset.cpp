#include <iostream>
#include <string>

struct S {
  char name[10];
  int type;
};

int main(int argc, char *argv[]) {
  struct S a1;
  // error
  // a1.name = "hoge";
  strcpy(a1.name, "hoge");
  a1.type = 1;
  std::cout << "a1:" << a1.name << std::endl;

  memset(&a1, 0, sizeof(struct S));
  std::cout << "a1:" << a1.name << std::endl;

  S *a2;
  a2 = new S; //メモリ確保
  a2->type = 3;
  std::cout << "a2:" << a2->type << std::endl;
  memset(a2, 0, sizeof(*a2)); //初期化
  std::cout << "a2:" << a2->type << std::endl;

  delete a2;
  return 0;
}

#include <iostream>
#include <string>

struct hoge {
  bool c = true;
};

struct fuga {
  int a = 0;
  bool b = true;
  bool c = true;
  bool d = true;
  bool e = true;
  bool f = true;
  char name[100 + 1];
};

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

  struct hoge *hoge;
  struct hoge *pointer_hoge;
  struct fuga fuga;
  struct fuga *pointer_fuga;
  // std::cout << "hoge: " << &hoge << std::endl;
  // std::cout << "hoge c: " << hoge->c << std::endl;

  // sizeofについて
  // http://www.kis-lab.com/serikashiki/C/C03.html

  std::cout << sizeof(p1) << std::endl;
  std::cout << sizeof(a) << std::endl;
  std::cout << sizeof(b) << std::endl;
  std::cout << sizeof(&c) << std::endl;
  std::cout << "hoge size" << sizeof(hoge) << std::endl;
  std::cout << "pointer_hoge size" << sizeof(pointer_hoge) << std::endl;
  std::cout << "&hoge size" << sizeof(&hoge) << std::endl;
  std::cout << "fuga size" << sizeof(fuga) << std::endl;
  std::cout << "pointer fuga size" << sizeof(pointer_fuga) << std::endl;
  std::cout << "struct fuga size" << sizeof(struct fuga) << std::endl;
  // std::cout << "struct pointer_fuga size" << sizeof(struct pointer_fuga) <<
  // std::endl;
  std::cout << "&fuga size" << sizeof(&fuga) << std::endl;
  std::cout << "pointer_fuga size" << sizeof(pointer_fuga) << std::endl;

  void *ptr = std::malloc(9);
  void *ptr1 = std::malloc(1);
  std::cout << "ptr" << ptr << std::endl;
  std::cout << "ptr1" << ptr1 << std::endl;
  std::cout << "ptr size" << sizeof(&ptr) << std::endl;
  std::cout << "ptr size" << sizeof(ptr) << std::endl;
  char str[16];
  std::cout << "str size" << sizeof(str) << std::endl;
  std::cout << "&str size" << sizeof(&str) << std::endl;

  return 0;
}

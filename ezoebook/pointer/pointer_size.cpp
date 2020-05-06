#include <iostream>
#include <string>

struct hoge {
  bool c = true;
};

struct fuga_struct {
  int a = 0;
  bool b = true;
  bool c = true;
  bool d = true;
  bool e = true;
  bool f = true;
  char name[100 + 1];
};

class piyo {

  char name[100 + 1];
};
class poyo {
  char name[1000 + 1];
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
  struct fuga_struct fuga;
  struct fuga_struct *pointer_fuga;
  struct std::unique_ptr<fuga_struct> unique_ptr_fuga(new fuga_struct);
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
  std::cout << "struct fuga size" << sizeof(struct fuga_struct) << std::endl;
  std::cout << "unique_ptr_fuga size" << sizeof(unique_ptr_fuga) << std::endl;
  std::cout << "*unique_ptr_fuga size" << sizeof(*unique_ptr_fuga) << std::endl;
  // std::cout << "struct pointer_fuga size" << sizeof(struct pointer_fuga) <<
  // std::endl;
  std::cout << "&fuga size" << sizeof(&fuga) << std::endl;
  std::cout << "pointer_fuga size" << sizeof(pointer_fuga) << std::endl;
  std::cout << "*pointer_fuga size" << sizeof(*pointer_fuga) << std::endl;

  void *ptr = std::malloc(9);
  void *ptr1 = std::malloc(1);
  std::cout << "ptr" << ptr << std::endl;
  std::cout << "ptr1" << ptr1 << std::endl;
  std::cout << "ptr size" << sizeof(&ptr) << std::endl;
  std::cout << "ptr size" << sizeof(ptr) << std::endl;
  char str[16];
  std::cout << "str size" << sizeof(str) << std::endl;
  std::cout << "&str size" << sizeof(&str) << std::endl;

  // std::unique_ptr<piyo, std::function<void(poyo *)>> uni_ptr;
  // std::cout << "piyo size" << sizeof(piyo) << std::endl;
  // std::cout << "poyo size" << sizeof(poyo) << std::endl;
  // std::cout << "uni_ptr size" << sizeof(uni_ptr) << std::endl;

  // char tmp[1000 + 1];
  // char *tmp[1000 + 1];
  // std::cout << "tmp size" << sizeof(tmp) << std::endl;
  // std::cout << "tmp size" << sizeof(tmp) << std::endl;

  return 0;
}

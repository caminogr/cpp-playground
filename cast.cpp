// Reference
// https://programming-place.net/ppp/contents/cpp/language/007.html#const_cast
#include <iostream>

using namespace std;

// static cast
// int main() {
// int num = 1;

// unsigned char s = static_cast<unsigned char>(num);
// float f = static_cast<float>(num);
// float g = (float)num;
// cout << s << endl;
// cout << f << endl;
// cout << g << endl;

// }

// const cast
// int main() {
// int num1 = 1;
// const int *num2 = &num1;
// int *num3 = const_cast<int *>(num2);
// *num3 = 20;
// cout << *num2 << endl;
// cout << *num3 << endl;
// }

// reinterpret_cast
// int main() {
// int num1 = 1;
// int *num2 = &num1;

// unsigned int address = reinterpret_cast<unsigned int>(num2);

// cout << num2 << endl;
// cout << address << endl;
// }

// #include <iostream>

// void f(int v) { std::cout << v << std::endl; }

// int main() {
// typedef void (*func_t)(short);

// func_t func = reinterpret_cast<func_t>(f);
// func(100); // 保証なし
// }

// dynamic cast

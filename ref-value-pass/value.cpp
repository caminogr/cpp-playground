// referecne: https://teratail.com/questions/32597

int testfunc_value(int a, int b) { return a + b; }

// 呼び出し側
volatile int X;
int main() {
  X = testfunc_value(123, 456);
  return 0;
}

#include <iostream>
#include <array>

template <typename Array>
void print( Array & c )
{
  for (std::size_t i = 0 ; i != c.size() ; ++i)
  {
    std::cout << c[i];
  }
}

int main()
{
  std::array<int, 5> a = { 1, 2, 3, 4, 5} ;
  print(a);
}

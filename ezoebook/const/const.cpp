#include <iostream>
// #include <array>

// template <typename Array>
// void print( Array & c )
// {
  // for (std::size_t i = 0 ; i != c.size() ; ++i)
  // {
    // std::cout << c[i];
  // }
// }

// int main()
// {
  // std::array<int, 5> a = { 1, 2, 3, 4, 5} ;
  // print(a);
// }

// ------------------

template <typename T, std::size_t N>
struct array
{
  using size_type = std::size_t ;

  size_type size() ;

  T storage[N] ;
  T & operator [] (std::size_t i)
  {
    return storage[i] ;
  }
} ;

template <typename Container>
void print( Container const & c )
{
  for (std::size_t i = 0 ; i != c.size() ; ++i)
  {
    std::cout << c[i];
  }
}

int main()
{
  array<int, 5> a = { 1, 2, 3, 4, 5} ;
  print(a);
}


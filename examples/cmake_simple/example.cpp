#include "url.hpp"
#include <iostream>

int main() {
  Url u1("http://www.example.com");
  std::cout << u1.str() << std::endl;

  Url u2("http://www.example.com/");
  Url u3(u2);

  std::cout << u2.str() << std::endl;
  u2.path("/test");
  std::cout << u2.str() << std::endl;

  return 0;
}

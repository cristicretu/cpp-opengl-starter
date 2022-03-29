#include <iostream>
#include <vector>
#include <string>

int main ()
{
  const std::string greeting = "Hello, World!";
  
  for (auto c : greeting)
    std::cout << c << std::endl;

  std::cout << greeting << std::endl;
  return EXIT_SUCCESS;
}
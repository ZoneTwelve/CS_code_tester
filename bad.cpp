#include <iostream>
int main(){
  std::string name;
  std::cin >> name;
  
  std::cout << (name=="World"?"Hello ":"Go away ") << name << "!\n";
}
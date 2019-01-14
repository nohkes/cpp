#include <iostream>

int main() {
  
  int weight, planet;
  std::cout << "What is your Earth Weight?\n";
  std::cin >> weight;
  std::cout << "Enter number for planet to fight on\n";
  std::cin >> planet;
  switch(planet)
  {
    case 1 :
      weight *= 0.78;
      break;
    case 2 : 
      weight *= 0.39;
      break;
    case 3 :
      weight *= 2.65;
      break;
    case 4 :
      weight *= 1.17;
      break;
    case 5 :
      weight *= 1.05;
      break;
    default :
      weight = 0;
      break;
  }
  std::cout << " Your weight is: " << weight << "\n";
  
  
}
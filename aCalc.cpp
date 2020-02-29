#include <iostream> 
#include <string>  

void equationAdder(std::string equation, int& answer, int index) 

{     
  std::string x, y;     
  x = equation[index - 1];     
  y = equation[index + 1];     
  answer = std::stoi(x) + std::stoi(y); 
}  

void equationReader(std::string equation, int& answer) 

{
  for (int i = 0; i < equation.size(); i++) 
  {         if (equation[i] == '+') 
    {             equationAdder(equation, answer, i);         
    }     
  } 
}    

int main() 
{    
  std::string equation;     
  int answer = 0;      
  std::cout << "Welcome to the Calculator program" << std::endl;     
  std::cout << "Enter an equation: ";     
  std::cin >> equation;      
  equationReader(equation, answer);      
  std::cout << "Answer is: " << answer << std::endl; }

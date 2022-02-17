#include <iostream>

int main() 
{
  float cm;       //define variables
  float inches;

  std::cout << "Enter a length in cm : ";  //Getting user input
  std::cin >> cm;

  inches = cm / 2.54;    // calculation

  std::cout << "Length in inches is " << inches << std::endl;   // print Length in inces

  return 0;  //end of the process
}


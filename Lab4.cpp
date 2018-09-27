#include <iostream>
#include <string>
#include <sstream> // Include the library that will allow you to convert from string to integer


int main() {
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  
  std::cout <<  std::endl <<"=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
 
  int a, b, c, d;
  // Ask the user for 3 integers as input
std::cout << "Enter 3 numbers to receive the product of those numbers" << std::endl;
  // The user should enter all integers on the same line, pressing enter only once
std::cin >> a >> b >> c;
  // Multiply the three integers
d=a*b*c;
  // Output the result of the multiplication
std::cout <<"The product of the numbers is:" << d << std::endl;

  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/

  

  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
std::string line1;
std::string line2;
std::string line3;

std::cout << "Enter first line of haiku poem" << std::endl;
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
getline (std::cin, line1);
std::cout << "Enter second line of haiku poem" << std::endl;
getline (std::cin, line2);
std::cout << "Enter third line of haiku poem" << std::endl;
getline (std::cin, line3);

std::cout << "Here is your poem"<< std::endl << (std::cin, line1) << std::endl << (std::cin, line2) << std::endl << (std::cin, line3) << std::endl << ".\n" ;

  // http://examples.yourdictionary.com/examples-of-haiku-poems.html



  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/


  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

 std::string myNumber = "1234"; // Convert this string to an integer 

std::stringstream geek(myNumber);

int x=0;
geek >> x;
  
  std::cout << x << " :is an integer"; //Insert the integer before the text of this output

  return 0;
}
#include <iostream>
#include <string>
#include <sstream>
// Include the library that will allow you to convert from string to integer


int main() {
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "Please enter 3 numbers: " << std::endl;
  int x, y, z, a;
  std::cin >> x >> y >> z;
   std::cout << std::endl;
  std::cout << "you have entered:" "\n" << x << "\n" << y << "\n" << z << "\n" << std::endl;
  
  // Ask the user for 3 integers as input
  // The user should enter all integers on the same line, pressing enter only once






  // Multiply the three integers
  a = x * y * z;
   std::cout << "the result of these numbers being multiplied is: \n" << (a = x * y * z);





  // Output the result of the multiplication



  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html
  std::string sentenceOne;
  std::string sentenceTwo;
  std::string sentenceThree;
  std::cout << "please enter a string with 5 syllables \n";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::getline(std::cin, sentenceOne);
  std::cout << "please enter another string with 7 syllables \n";
  std::getline(std::cin, sentenceTwo);
  std::cout << "please enter the final string with 5 syllables \n";
  std::getline(std::cin, sentenceThree);
  std::cout << "This is the haiku you have created: \n" << sentenceOne << "\n" << sentenceTwo << "\n" << sentenceThree << "\n";















  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = "1234"; // Convert this string to an integer
  int newInteger;
  std::stringstream(myNumber) >> newInteger;


  
  std::cout << newInteger << " :is an integer"; //Insert the integer before the text of this output

  return 0;
}
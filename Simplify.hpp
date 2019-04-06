#include <string>

using namespace std;

#ifndef SIMPLIFY_HPP
#define SIMPLIFY_HPP

namespace Simplify{
  //// PRINT FUNCTIONS ////

  //Write to console and then go to a new line
  void PrintLine(string string_to_print);
  void PrintLine(int int_to_print);

  //Write to console and then stay on the same line
  void Print(string string_to_print);
  void Print(int int_to_print);

  //Write out a string to the console character by character and then go to a new line
  void TypeoutLine(string string_to_typeout, int speed);

  //Write out a string to the console character by character and stay on the same line
  void Typeout(string string_to_typeout, int speed);


  //// I/O FUNCTIONS ////

  //Get user input
  string Input();

  //Change given variable to user input
  void ChangeToInput(string &variable);
  

  //// CHANGE CASE FUNCTIONS ////

  //Change the case of string to uppercase or lowercase
  void ChangeToUpper(string &string_to_change);
  void ChangeToLower(string &string_to_change);

  //Return the changed case of string
  string ToUpper(string string_to_change);
  string ToLower(string string_to_change);


  //// RANDOM NUMBER FUNCTIONS ////

  //Returns random number from within given range
  int Random(int min_number, int max_number);

  //Changes integer variable to random number
  void ChangeToRandom(int min_number, int max_number, int &int_to_change);

  //Increases or decreases variable by random number
  void IncreaseByRandom(int min_number, int max_number, int &int_to_increase);
  void DecreaseByRandom(int min_number, int max_number, int &int_to_decrease);
}

#endif

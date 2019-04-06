#include <string>

using namespace std;

#ifndef SIMPLIFY_HPP
#define SIMPLIFY_HPP

namespace Simplify{
  //print functions
  void print(string string_to_print, bool new_line = true);
  void print(int int_to_print, bool new_line = true);
  //ik this seems like a random function and that is because I made it to go with a text adventure game engine
  void print(string string_to_print, int int_to_print, bool new_line = true);
  //print out a string letter by letter
  void typeout(string string_to_print, bool new_line = true);
  //ik this seems like a random function and that is because I made it to go with a text adventure game engine
  void typeout(string string_to_print, int int_to_print, bool new_line = true);
  //change case of string
  void ConvertToUpper(string &string_to_change);
  void ConvertToLower(string &string_to_change);
  //return changed case of string
  string ToUpper(string string_to_change);
  string ToLower(string string_to_change);
  void Input(string &variable, bool to_lower = true);
  //Confirm something
  bool Confirm();
  //Returns random number
  int Random(int min_number, int max_number);
  //Changes integer variable to random number
  void ChangeToRandom(int min_number, int max_number, int &int_to_change);
  //Increases variable by random number
  void IncreaseByRandom(int min_number, int max_number, int &int_to_increase);
  //Decreases variable by random number
  void DecreaseByRandom(int min_number, int max_number, int &int_to_decrease);
}

#endif

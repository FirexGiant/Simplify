#include <iostream>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include "Simplify.hpp"

using namespace std;

namespace Simplify{
  //// PRINT FUNCTIONS ////

  //Write to console and then go to a new line
  void PrintLine(string string_to_print){
    cout << string_to_print << endl;
  }

  void PrintLine(int int_to_print){
    cout << "" << int_to_print << endl;
  }

  //Write to console and then stay on the same line
  void Print(string string_to_print){
    cout << string_to_print;
  }

  void Print(int int_to_print){
    cout << "" << int_to_print;
  }

  //Write out a string to the console character by character and then go to a new line
  void TypeoutLine(string string_to_typeout, int speed){
    for(int i = 0; i < string_to_typeout.length(); i++){
      cout << string_to_typeout[i];
      Sleep(speed);
    }
    cout << "\n";
  }

  //Write out a string to the console character by character and stay on the same line
  void Typeout(string string_to_typeout, int speed){
    for(int i = 0; i < string_to_typeout.length(); i++){
      cout << string_to_typeout[i];
      Sleep(speed);
    }
  }


  //// I/O FUNCTIONS ////

  //Get user input
  string Input(){
    string user_input;
    getline(cin, user_input);
    return user_input;
  }

  //Change given variable to user input
  void ChangeToInput(string &variable){
    getline(cin, variable);
  }


  //// CHANGE CASE FUNCTIONS ////

  //Change the case of string to uppercase or lowercase
  void ChangeToUpper(string &string_to_change){
    for(int i = 0; i < string_to_change.length(); i++){
      string_to_change[i] = toupper(string_to_change[i]);
    }
  }

  void ChangeToLower(string &string_to_change){
    for(int i = 0; i < string_to_change.length(); i++){
      string_to_change[i] = tolower(string_to_change[i]);
    }
  }

  //Return the changed case of string
  string ToUpper(string string_to_change){
    for(int i = 0; i < string_to_change.length(); i++){
      string_to_change[i] = toupper(string_to_change[i]);
    }
    return string_to_change;
  }

  string ToLower(string string_to_change){
    for(int i = 0; i < string_to_change.length(); i++){
      string_to_change[i] = tolower(string_to_change[i]);
    }
    return string_to_change;
  }


  //// RANDOM NUMBER FUNCTIONS ////

  //Returns random number from within given range
  int Random(int min_number, int max_number){
    srand(time(NULL));
    return rand() % (max_number-min_number) + min_number;
  }

  //Changes integer variable to random number
  void ChangeToRandom(int min_number, int max_number, int &int_to_change){
    srand(time(NULL));
    int_to_change = rand() % (max_number-min_number) + min_number;
  }

  //Increases variable by random number
  void IncreaseByRandom(int min_number, int max_number, int &int_to_increase){
    srand(time(NULL));
    int_to_increase += rand() % (max_number-min_number) + min_number;
  }

  //Decreases variable by random number
  void DecreaseByRandom(int min_number, int max_number, int &int_to_decrease){
    srand(time(NULL));
    int_to_decrease -= rand() % (max_number-min_number) + min_number;
  }

}

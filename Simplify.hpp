#include <iostream>
#include <cctype>
#include <windows.h>

using namespace std;

namespace Simplify{

  //print functions
  void print(string string_to_print, bool new_line = true){
    if(new_line){
      cout << string_to_print << endl;
    }
    else{
      cout << string_to_print;
    }
  }

  void print(int int_to_print, bool new_line = true){
    if(new_line){
      cout << "" << int_to_print << endl;
    }
    else{
      cout << "" << int_to_print;
    }
  }

  //ik this seems like a random function and that is because it is
  //I made it to go with a text adventure game engine
  void print(string string_to_print, int int_to_print, bool new_line = true){
    if(new_line){
      cout << string_to_print << "" << int_to_print << endl;
    }
    else{
      cout << string_to_print << "" << int_to_print;
    }
  }

  //print out a string letter by letter
  void typeout(string string_to_print, bool new_line = true){
    if(new_line){
      for(int i = 0; i < string_to_print.length(); i++){
        cout << string_to_print[i];
        Sleep(35);
      }
      cout << "\n";
    }
    else{
      for(int i = 0; i < string_to_print.length(); i++){
        cout << string_to_print[i];
        Sleep(35);
      }
    }
  }

  //change case of string
  void ConvertToUpper(string &string_to_change){
    for(int i = 0; i < string_to_change.length(); i++){
      string_to_change[i] = toupper(string_to_change[i]);
    }
  }

  void ConvertToLower(string &string_to_change){
    for(int i = 0; i < string_to_change.length(); i++){
      string_to_change[i] = tolower(string_to_change[i]);
    }
  }

  //return lowercase version of string
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

  //Get user input (ik this should be by the print stuff, but I needed the ToLower() method)
  void Input(string &variable, bool to_lower = true){
    string user_input;
    cout << ">";
    getline(cin, user_input);
    if (to_lower){
      variable = ToLower(user_input);
    }
    else{
      variable = user_input;
    }
  }

  //Confirm something
  bool Confirm(){
    string answer;
    for(;;){
      print("Are you sure? [y/n]");
      Input(answer);
      if(answer == "y" || answer == "yes"){
        return true;
      }
      else if(answer == "n" || answer == "no"){
        return false;
      }
      else{
        print("Error! Try again!");
      }
    }
  }

}

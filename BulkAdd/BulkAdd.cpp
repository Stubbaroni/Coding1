#include <iostream>
using namespace std;
#include <cstdlib>
 
int main() {
  for(int i = 0; i < 10; i ++) {
    cout << i << "\n";
    
    if(i > 5) {
      break;
      
    }
    
  }
  if(true) {
    
    string pizzaToppings[5];
    pizzaToppings[0] = "Cheese";
    pizzaToppings[1] = "Stubbaroni";
    pizzaToppings[2] = "Chicken";
    
  }

  string faveGames[100];
  int index = 0;
  while(true) { // add another while loop in add?
    cout << "What would you like to do?\n";
    cout << "Type 'quit' to quit the program. \n";
    cout << "Type 'add' to add a game.\n";
    cout << "Type 'show' to show your favorite games.\n";
    cout << "Type 'bulkadd' to add multiple games.\n";
    string input;
    cin >> input;
    if(input == "quit") {
      cout << "Shutting Down...\n";
      break;
    }
    else if(input == "add") {
      cout << "What game would you like to add?\n";
      cin >> input;
      faveGames[index] = input;
      index ++;
    }
    else if(input == "show") {
      cout << "Here are your favorite games:\n";
      for(int i = 0; i < index; i++) {
        cout << faveGames[i] << "\n";
      }
    }
    
    else if(input == "edit") {
      cout << "What is the number of the name you want to change?\n";
      int numInput;
      cin >> numInput;
      cout << "What would you like to change " << faveGames[numInput - 1] << " to?\n";
      cin >> input;
      faveGames[numInput - 1] = input;
    }
    else if(input == "editlast") {
      cout << "last entry was " << faveGames[index - 1] << ", change to what?";
      cin >> input;
      faveGames[index - 1] = input;
    }
    else if(input == "bulkadd") {
      cout << "Add as many games as you want!*\n";
      while(true) {
        cout << "What games would you like to add?\n";
        cin >> input;
        faveGames[index] = input;
        index ++;
        if(input == "quit") {
          break;
        }
      }
    }
    
  }
  
}
#include <iostream>    //for talking to the console. 
using namespace std;    //so we don't have to type the std::

int main() { 
  // cout means Console OUTput
  cout << "Hello!\n\n\n";     // New line
  cout << "What is your name?\n";    //Second line

  //create a variable to store the player's name
  string playerName = "Player";
  //get input from the player
  cin >> playerName;
  //greet the player with their name
  cout << "Hello " << playerName << ".\n\n\n";
  //Profit

  
  // Your task is to ask the player what their age is, and then
  // say it back to the player
  cout << "Hey " << playerName << "\n\n";
  cout << "How old are you\n";
  string playerAge;
  cin >> playerAge;
  cout << playerAge << "? You're old\n";
  }
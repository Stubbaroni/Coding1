#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>


int main() {
  srand(time(0));
  int randNum = rand() % 39 + 11;
  cout << randNum;

  //for(initalization; test; action) {code}
  for(int counter = 0; counter < 10; counter ++) {
    cout << counter << "\n";
  }
  for(int i = 0; i < 100; i +=2) {
    cout << i << "\n";
  }
  string name = "Darth Vader";
  cout << "The first letter in " << name << " is " << name[0] <<".\n";

  for(int i = 0; i < name.size(); i++) {
    cout << name[i] << "\n";
  }
  for(int i = 0; i < name.size(); i++) {
    cout << name[i] << "\n";
    cout <<  "\n";
  }

  string phrase = "aeiou aeiou aeiou";
  // 'break' and 'continue'

  for(int i = 0; i < phrase.size(); i++) {
    if(phrase[i] == 'a' || phrase[i] == 'e' || phrase[i] == 'i' || phrase[i] == 'o' || phrase[i] == 'u') {
      continue;
    }
    cout << phrase[i];
  }
  cout << "\n";

  //arrays
  //an array is an ordered list of variables with a set size

  string inv[5];     //creates a new array that holds string variables

  inv[0] = "Master Sword";
  inv[1] = "Big laser beam";
  inv[2] = "Wood Sword";
  inv[3] = "Can of steak";
  inv[4] = "Pogo Stick";
  cout << "The first item in out inventory is " << inv[0] << ".\n";
  cout << "Your inventory: \n";
  for(int i = 0; i < 5; i++) {
    
    if(inv[i] == "") {
      continue;
    }
    cout << inv[i] << "\n";
  }
  string colors[] = {"Red", "Green", "Blue", "Yellow", "Black"};

  cout << "The first letter is " << colors[0] << ".\n";

  

  bool pickedColor = false;
  while(!pickedColor) {
    cout << "What color would you like your car to be?\n";
  string input;
  cin >> input;
  
   for(int i = 0; i < 5; i++) {
     if (colors[i] == input) {
        cout << "You have chosen a " << colors[i] << " car!\n";
       pickedColor = true;
       break;
      }
     if(i + 1 == 5) {
       cout << input << " is not an available color.\n";
     }
    }

  }

  
}
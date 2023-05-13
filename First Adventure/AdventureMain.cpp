#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
int main() {
  
//   welcome the player
  cout << "Welcome to Stubby's Adventure!\n";
// set up the game
  srand(time(0));
  
//     int health = 10, attack, block, turns = 0
  int health = 10;
  int block;
  int attack;
  int turns = 0;
//     seed the random number generator
  
// start the loop
  while(health > 0) { // keep looping while health is greater than zero and fewer than 4 turns have happened
  
  while(turns < 4) { //     add 1 to turns
    turns +=1;
    cout << "\n Turn Start!\n \n"; //     start the encounter
    int attack = rand() % 4 + 1;//      randomly generate numbers for attack (range = 0-4) and block (range = 0-4)
    int block = rand() % 4 + 1;
    cout << "Your opponent attacks with " << attack << ", while you defend with " << block << "!\n";
    if (attack <= block) { //       if block is greater or equal to attack, successful block
      cout << "Successful Block!\n";
    }
    else {
      int damage = (attack - block); //         otherwise, subtract attack value from health.
      cout << "You took " << damage << " damage!\n";
      health = health - damage;
      
     }
    }
    
  }
  cout << "You finished with " << health << " health."; 
    if (health > 0) {
      cout << " Congrats! You have made it through the adventure!\n"; //if health is greater than 0, congratulate player
    }
      else {
        cout << " Sorry, it looks like you died.\n"; // otherwise, tell the player they're dead.
      }

}
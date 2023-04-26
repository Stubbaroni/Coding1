#include "enemy.h"
#include <iostream>
using std::cout;

enemy::enemy(string givenName) {
  name = givenName;
  health = 10;
  cout << name << " has appeared!\n";
  
}


void enemy::status() {
  cout << name << " has " << health << " health remaining.\n";

}

void enemy::changeHealth(int by) {
  health += by;
  if (health < 0) health = 0;
  if (health > 10) health = 10;
}

int enemy::getHealth() {
  return health;
}

void enemy::setName(string input) {
  if(input == "Poop"){
    cout << "Uh oh, stinky!\n";
    return;
  }
  name = input;
  
}

string enemy::getName() {
  return name;
}
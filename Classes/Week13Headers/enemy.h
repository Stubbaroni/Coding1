#include <string>
using std::string;
class enemy {
  private:
  string name;
  int health;

public:
  enemy(string givenName = "Bad Guy McGee");
  void status();
  void changeHealth(int by);
  int getHealth();
  void setName(string input);
  string getName();
};
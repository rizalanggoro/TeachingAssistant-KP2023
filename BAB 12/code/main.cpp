#include <stdio.h>
#include <string.h>

#include <iostream>

using namespace std;

class Weapon {
 private:
  char name[50];
  int price;
  int damage;
  int rounds;

 public:
  // constructor
  Weapon() {}

  Weapon(char* _name, int _price, int _damage, int _rounds) {
    strcpy(name, _name);
    price = _price;
    damage = _damage;
    rounds = _rounds;
  }

  // code

  void printData() {
    cout << "INFO SENJATA\n";
    cout << name << endl;
    cout << price << endl;
    cout << damage << endl;
    cout << rounds << endl;
  }

  void setName(char* _name) { strcpy(name, _name); }

  char* getName() { return name; }
};

int main() {
  Weapon ak;
  Weapon deagle("Desert Eagle", 750, 35, 7);
  deagle.setName("Dezert Egel");
  cout << deagle.getName() << endl;
}
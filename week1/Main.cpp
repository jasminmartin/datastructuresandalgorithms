#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
#include "Entity.cpp"
#include "IOObject.cpp"
#include "Weapon.cpp"

int main() {
  cout << "Exercise 1" << endl;

  Entity ent1(10);
  cout << "Testing Operator ++ : Before: " << ent1.size++ << endl;
  cout << " After: " << ent1.size << endl;

  Entity ent2(10);
  cout << "Testing Operator -- : Before: " << ent2.size << endl;
  --ent2;
  cout << " After: " << ent2.size << endl;

  Entity ent3(1);
  Entity ent4(2);

  bool a = ent3 > ent4;
  cout << a << endl;

  bool b = ent3 > ent4;
  cout << b << endl;

  cout << "Exercise 2" << endl;

  vector<Weapon> data;
  for (int i = 0; i < 10; i++) {
    data.push_back(Weapon(i));
  }

  vector<Weapon>::iterator it;
  for (it = data.begin(); it != data.end(); it++) {
    cout << it->id << endl;
  }

  cout << "Exercise 3" << endl;

  data.erase(find(data.begin(), data.end(), Weapon(5)));
  for (it = data.begin(); it != data.end(); it++) {
    cout << it->id << endl;
  }

  cout << "Exercise 4" << endl;
  IOObject io;
  io.DisplayIntLessThan(20);

  cout << "\n " << io.factoriaI(4) <<endl;

  cout << "Exercise 5" << endl;
  cout << "\n " << io.factoriaR(4) <<endl;
}
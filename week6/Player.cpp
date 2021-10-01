using namespace std;
#include <iostream>

class Player {
public:
  Player *leftChild;
  Player *rightChild;
  int kills;
  int level;

  Player(int level, int kills) {
    this->kills = kills;
    this->level = level;
    leftChild = 0;
    rightChild = 0;
  }
  void Display() {
    cout << "Level : " << this->level << " Kills : " << this->kills << endl;
  }

  int Factorial(int n) {
    if (n == 1)
      return 1;
    return Factorial(n - 1) * n;
  }

  bool LessThan(Player *p1, Player *p2) {
    int scoreA = Factorial(p1->level) * p1->kills;
    int scoreB = Factorial(p2->level) * p2->kills;
    if (scoreA < scoreB)
      return true;
    else
      return false;
  }
};
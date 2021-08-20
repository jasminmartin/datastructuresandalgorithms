class Weapon {
public:
  int id;
  Weapon() {}
  Weapon(int id) : id(id) {}
  const bool operator==(const Weapon &other) { return this->id == other.id; };
};
class Entity {
public:
  int size;
  Entity(int s) : size(s) {}
  Entity operator++() { return Entity(++this->size); }
  Entity operator--() { return Entity(--this->size); }
  const bool operator<(const Entity &other) { return this->size < other.size; };
  const bool operator>(const Entity &other) { return &other < this; };
  const bool operator>=(const Entity &other) { return !(&other < this ); };
  const bool operator<=(const Entity &other) { return !(&other > this ); };
  const bool operator==(const Entity &other) { return this->size == other.size; };
  const bool operator!=(const Entity &other) { return !(this == &other); };

};
#include <iostream>
#include <map>
#include <string>

using namespace std;

class Fruit {
 public:
  static Fruit* GetFruit(const string& type);
  static void PrintCurrentTypes();

 private:
  // Note: constructor private forcing one to use static |GetFruit|.
  Fruit(const string& type) : type_(type) {}

  static map<string, Fruit*> types;

  string type_;
};

// static
map<string, Fruit*> Fruit::types;

// Lazy Factory method, gets the |Fruit| instance associated with a certain
// |type|.  Creates new ones as needed.
Fruit* Fruit::GetFruit(const string& type) {
  auto [it, inserted] = types.emplace(type, nullptr);
  if (inserted) {
    it->second = new Fruit(type);
  }
  return it->second;
}

// For example purposes to see pattern in action.
void Fruit::PrintCurrentTypes() {
  cout << "Number of instances made = " << types.size() << endl;
  for (const auto& [type, fruit] : types) {
    cout << type << endl;
  }
  cout << endl;
}

int main() {
  Fruit::GetFruit("Banana");
  Fruit::PrintCurrentTypes();

  Fruit::GetFruit("Apple");
  Fruit::PrintCurrentTypes();

  // Returns pre-existing instance from first time |Fruit| with "Banana" was
  // created.
  Fruit::GetFruit("Banana");
  Fruit::PrintCurrentTypes();
}


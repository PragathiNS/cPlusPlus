#include<iostream>
#include<string>
using namespace std;

class Fruit {
public:
   fruit() { }
   void display() {
      cout << "\nDisplay Fruit " << endl;
   }
   virtual void info() { // virtual function
      cout << "I am a fruit" << endl;
   }
};

class Mango : public Fruit {
public :
   mango() { }
   void display() {
      cout << "\nDisplay mango" << endl;
   }
   void info() {
      cout << "My name is Mango" << endl;
   }
   void show() {
      cout << "Showing Mango" << endl;
   }
};

int main() {
   Fruit *fruit; // pointer
   Fruit f; // object of fruit class
   Mango m; // object of mango class
   
   fruit = &f;
   fruit->display(); //displays "Display Fruit"
   fruit->info(); // "I am a fruit"
   
   fruit = &m;
   fruit->display(); // "Display Fruit"
   fruit->info(); //"My name is Mango" --> bcoz info() is virtual function in the Base class
   
   return 0;
}

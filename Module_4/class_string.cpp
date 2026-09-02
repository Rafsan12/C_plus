#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name; 
    int age;     


    Person(string nm, int ag) {
        name = nm; 
        age = ag;  
    }

    
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person rafsan("Rafsan Ahmed", 27);
    
    
    rafsan.displayInfo();
      
    return 0;
}
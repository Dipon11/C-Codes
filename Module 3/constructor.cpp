#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    float height;
    int age;

public:
    Person(string n, float h, int a) {
        name = n;
        height = h;
        age = a;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Height: " << height << " feet" << endl;
        cout << "Age: " << age << " years" << endl;
    }
};

int main() {
    string personName;
    float personHeight;
    int personAge;

    cout << "Enter name: ";
    getline(cin, personName);
    cout << "Enter height (in feet): ";
    cin >> personHeight;
    cout << "Enter age: ";
    cin >> personAge;

    
    Person* personPtr = new Person(personName, personHeight, personAge);

    
    cout << "\nPerson's Information:\n";
    personPtr->displayInfo();

    
    delete personPtr;

    return 0;
}

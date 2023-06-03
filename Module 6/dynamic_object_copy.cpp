#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {

        this->age = age;
        this->name = name;
    }
};
int main()
{

    Person *rakib = new Person("Rakib Hassan", 22);
    Person *sakib = new Person("Sakib Hassan", 23);

    *rakib = *sakib;
    // rakib->age = sakib->age;
    // rakib->name = sakib->name;
    delete sakib;
    cout << rakib->name << " " << rakib->age << endl;

    return 0;
}

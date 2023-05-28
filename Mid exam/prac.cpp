#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    char name[100];
    float height;
    int age;

    Person(float h, int g, char *a)
    {
        cout << "I am called automatically" << endl;
        height = h;
        age = g;
        strcpy(name, a);
    }
};
int main()
{

    Person *rahim= new Person(6.2, 20, "Rahim Ullah");
    
    cout << rahim->age << endl;
    cout << rahim->height<< endl;
    cout << rahim->name<< endl;

    return 0;
}

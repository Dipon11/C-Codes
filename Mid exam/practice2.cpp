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
       
        height = h;
        age = g;
        strcpy(name, a);
    }
};
int main()
{

    Person *rahim= new Person(6.2, 20, "Rahim Ullah");
    Person *karim= new Person(5.6, 21, "Karim Ullah hun");
    
    
    if(rahim->age >karim->age)
{
    cout<<rahim->name<<endl;
}
else{
    cout<<karim->name<<endl;
}
    return 0;
}

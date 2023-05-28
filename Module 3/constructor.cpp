#include <bits/stdc++.h>
using namespace std;

// Consturctor
// It is a special function cl
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int r, int s, int c, char *a)
    {
        cout<<"I am called automatically"<<endl;
        roll = r;
        section = s;
        cls = c;
        strcpy(name, a);
    }
};
int main()
{

    Student rahim (29, 'A', 7, "Rahim Ullah");
    Student karim (55, 'D', 7, "Karim Ullah");
    
    cout<<rahim.roll<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.cls<<endl;
    cout<<rahim.name<<endl;

    cout<<karim.roll<<endl;
    cout<<karim.section<<endl;
    cout<<karim.cls<<endl;
    cout<<karim.name<<endl;

    return 0;
}

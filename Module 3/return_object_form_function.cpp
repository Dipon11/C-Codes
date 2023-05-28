#include <bits/stdc++.h>
using namespace std;


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
Student fun()
{
    char name[100]="Rahim Ullah";
    Student rahim(29,'C',7,name);
    return rahim;
}
int main()
{
    Student rahim=fun();
    cout<<rahim.roll<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.cls<<endl;
    cout<<rahim.name<<endl;
    

    return 0;
}

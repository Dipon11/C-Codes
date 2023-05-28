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
        cout << "I am called automatically" << endl;
        roll = r;
        section = s;
        cls = c;
        strcpy(name, a);
    }
};
int main()
{
    char name[100] = "Rahim Ullah";
    // Dynamic object creation
    Student *rahim = new Student(29, 'C', 7, name);

    //     cout<<(* rahim).name<<endl;
    // cout<<(*rahim).cls<<endl;
    // cout<<(*rahim).section<<endl;
    // cout<<(*rahim).roll<<endl;
    // cout<<(*rahim)<<endl;
    delete rahim;
    cout << rahim->cls << endl;
    cout << rahim->section << endl;
    cout<<rahim->name<<endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string a = "Hello WOrld";
    string b = "World";
    // // a = a + b;
    // a.append(b);

    // cout << a << endl;
    // cout << b << endl;
    // Adding elements to he last value
    //  a[5] = 'A';-> DIDNT work
    //  a=a+'A';->WORKS
    // a="HelloA"->Works
    a.push_back('A');
    // a.pop_back();
    // a.pop_back();//delting the last element of a string
    // cout << a << endl;

    // a = "Gello";
    // a.assign("Gelo");
    // cout << a << endl;
    string c = "Hello World";
    // c.erase(4 /*->koto number index delete korbe*/,
    //         1 /*-> Koita index delete korbe*/);
    // c.erase(4,1);

    //  a.replace(4.3, "WO");
    cout << a << endl;

    c.insert(6, "Rahat ");
    cout << c << endl;
    return 0;
}

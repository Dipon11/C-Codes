#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "Hello World";
    string a = "adsaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    // cout << s.size() << endl;
    // cout << s.max_size() << endl;
    cout << a.capacity() << endl;

    a = "kasbjhdbjhbdjhbdjhbdjhbdjhbdjhbdjhbdjhbjhdbjhdbdjhbdjhbdjhlbjhbjhbjhbjhbjhbjbjbjbjbjbjbjbj";
    cout << a.capacity() << endl;
    return 0;
}

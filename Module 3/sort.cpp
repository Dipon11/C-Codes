#include<bits/stdc++.h>
using namespace std;

int main(){
     
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
     sort(a,a+n);//Asending order ae SORT
     sort(a,a+n,greater<int>());// Desending order ae SORT

    for (int i = 0; i < n; i++)
    {
      cout<<a[i]<<endl;
    }
    

    return 0;
}

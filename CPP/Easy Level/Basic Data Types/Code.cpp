// The setprecision() method of iomanip library in C++ is used to set the ios library 
//floating point precision based on the precision specified as the parameter to this method.

#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<'\n';
    cout<<b<<'\n';
    cout<<c<<'\n';
    cout << std::fixed << std::setprecision(3) << d << '\n';
    cout << std::fixed << std::setprecision(9) << e << '\n';
    return 0;
}

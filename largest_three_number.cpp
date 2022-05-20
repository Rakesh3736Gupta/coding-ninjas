#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
     cin >> a >> b >> c;
    if(a>=b and a>=c)
    {
        cout << a<<"\n";
    }
    else if(b>=a and b>=c)
    {
        cout << b<<"\n";
    }
    else
    {
        cout<<c<<"\n";
    }
    double m=2 , n=5;
    cout<<pow(m,n)<<"  "<< pow(n,m)<<"\n";
    double x=10;
    cout<<log10(x)<<"\n";
    return 0;
}
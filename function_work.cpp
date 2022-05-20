#include<bits/stdc++.h>
using namespace std;
void fun1(){
cout<<"inside fun 2()\n";
}
void fun2(){
cout<<" before fun2() \n";
fun1();
cout<<"after fun2() \n";
}
int main(){
    cout<<"before fun1()\n";
    fun2();
    cout<<"after fun2() \n ";
    return 0;
}
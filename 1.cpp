#include<bits/stdc++.h>
using namespace std;
void fun(){
    static int x=1;
    int y=2;
    x++;
    y++;
    cout<<x<<" "<<y;
}
int main(){
fun();
    return 0;
}
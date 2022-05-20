#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=5, y=7;
    cout<<"enter the choice ";
    char move;
    cin>>move;
    switch(move){
        case'L': x--;
        break;
        case'R' : x++;
          break;
         case'U': y--;
           break;
        case'D': y++;
          break;
          default : cout<<" invalid choice";
    }
cout<<x<<" "<<y<<'\n';
    return 0;
}
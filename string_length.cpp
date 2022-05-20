#include<bits/stdc++.h>
using namespace std;
int str_length(char s[]){
    if(s[0]=='\0')
return 0;
return 1+str_length(s+1);
}
int main(){
    char  s[100];
    cin>>s;
    int l=str_length(s);
    cout<<l;
    return 0;
}
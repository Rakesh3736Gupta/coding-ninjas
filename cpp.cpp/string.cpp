#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[100]="rakeshgupta" ,name1[50]="gonda";
    
    cout<<"length of string = "<<strlen(name)<<"\n";
    cout<<"length of string = "<<strlen(name1)<<"\n";
    
    cout<<name[0]<<" "<<name[3]<<"\n";
    cout<<"reverse of string "<<strrev(name)<<" "<<strrev(name1)<<"\n";
    strcpy(name,name1);

    cout<<name1<<"\n";
   
    
    return 0;
}
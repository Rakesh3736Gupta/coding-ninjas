#include<bits/stdc++.h>
using namespace std;
void removex(char s[] ){
if(s[0]=='\0'){
return ;
}
if(s[0]!='x'){
    removex(s+1);


}
else{ 
int i=1;
for(; s[i]!='\0';i++){
 
s[i-1]=s[i];
}
s[i-1]=s[i];

removex(s);
}

}

int main(){
    char  s[100];
    cin>>s;
    removex(s);
    cout<<s<<endl;
    return 0;
}
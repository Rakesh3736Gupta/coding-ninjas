#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    for(int i=0; i<100; i++){
        v.push_back(i+1);
    }
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<endl;    
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
    cin>>v[i];}
    int key;
    cin>>key;
    int mid=0;
    int s=0;
    int e=n-1;
    while(e-s>key){
    if(v[mid]<key){
        s=mid+1;
    }
    else{
e=mid;
    }
    }
    if(v[s]==mid){
        cout<<s<<endl;
    }
    else if(v[e]==key){
        cout<<e;
    }
    else
{
    cout<<" not found"
}

    return 0;
}
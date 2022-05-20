#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int n;
    cin>>n;
    int ans;
    int sum=0;
    int prod=1;

    while (n!=0){
    int digits=n%10;
    prod=prod*digits;
    sum=sum+digits;
    n=n/10;
    }
    cout<<sum<<" "<<prod<<endl;
    ans=prod-sum;
    cout<<ans;
    return 0;
}
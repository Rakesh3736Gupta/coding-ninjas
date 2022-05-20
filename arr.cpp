#include<bits/stdc++.h>
using namespace std;
void solve(int arr[], int n){
    if(n==0)
    return;
    int x = arr[0];
    cout<<x<<"  ";
    solve(arr+1, n-1);
}
int main(){ int n;
    int arr[20];
    cin>>n;
    for( int i=0; i<n;i++)
    cin>>arr[i];
    solve(arr,n);
    
    return 0;
}
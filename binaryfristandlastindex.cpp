#include<bits/stdc++.h>
using namespace std;
int findex(int a[], int n ,int key){
    int s=0;
    
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(a[mid]==key){
            ans=mid;
            s=mid-1;
        }
        if(key>a[mid]){
            s=mid+1;

        }
        else{
            e=mid-1;

        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int key;
    int n;
    
     int a[5]={1,2,3,3,5};

     int print=findex(a, 5, 3);
     cout<<"first index is"<<print;
    return 0;
}
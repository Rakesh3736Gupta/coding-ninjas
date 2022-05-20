#include<bits/stdc++.h>
using namespace std;
int fun(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n-1;j++)
        {
            if(a[i]!=a[j])
            {continue;}
             else
            { //a[i]==a[j];
            a[j]=a[j+1];}
          


        }
    }cout<< a[i];
}
int main(){
    int  n,i,j,a[7]={1,1,2,3,4,2,2};
    int b[n];
   fun(a,7);
  // for(i=0;i<n;i++)
   //cout<<b[i];
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int print(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
         return mid;
        }
       if(key>arr[mid]){
           start=mid+1;
       }
      else{
          end=end-1;
      }
      mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int even[8]={1,2 ,5 ,6 ,8, 9, 12,15};
    int odd[5]={1,2, 4 ,5 ,8 };
    int evenindex=print(even,8,12);
    cout<<"index even array"<<evenindex<<endl;
    int oddindex=print(odd,5, 8);
    cout<<"index odd"<<oddindex<<endl;
    return 0;
}
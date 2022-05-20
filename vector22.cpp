#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
   // vector<int> *v= new vector();
   for(int i=0; i<100 ; i++){
       v.push_back(i+1);
        cout <<v.capacity()<<endl;
   }
  /*  v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v[0]=100; //change element at position in a bracket
    v[4]=200;
    v.pop_back(); //  last se element ko delete kar detha hai
    cout<<v.at(0)<<endl;//cout<<v->at(0)<< pointer ke hishab se 
    cout<<v.at(1)<<endl;// cout<<v[0]<<endl; but it not much batter than v.at(0)
    cout<<v.at(2)<<endl;
    cout<<v.at(3)<<endl;
    cout<<v.at(4)<<endl;*/
   for(int i=0; i<v.size() ; i++ )
   {
       cout<<v.at(i)<<endl;
   }
   
    return 0;
}
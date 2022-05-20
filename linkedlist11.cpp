#include <bits/stdc++.h> 
using namespace std; 

class Node{
    public :
    int data;
    Node* next;

   Node(int data){
     this->data= data;
        next=NULL;
   }
};

void print(Node*head){
  
   while(head!=NULL)// this function use in one time because head is ded after 1 time running
   {
       cout<<head->data<<" ";
        head=head->next;
    }
}


void rPrint(Node *head){
    Node *temp=head;
        if(temp==NULL)
        return ;
        cout<<temp->data<<" \n ";
        rPrint(temp->next);
    }

Node* takeinput(){
    int data ;
  //  cout<<"enter the first node";
    cin>>data;
    Node *head=NULL;
     Node *tail=NULL;
     while(data !=-1){
         Node *newnode=new Node(data);
     
     if(head==NULL)
     {
         head=newnode;
         tail=newnode;
     }
     else {
        tail->next=newnode;
         tail=newnode;
     }
   cin>>data; 
    }

return head;
}




int main() 
{
    /*
Node n1(10);
 Node *head=&n1;
Node n2(20);
Node n3(45);

n1.next=&n2;
n2.next=&n3;
*/
print(head);

Node* head=takeinput() ;

 
}
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
 Node* inserthead(Node* head ,int i,int data){
   Node* newNode=new Node(data);
  
   int count=0;
    Node* temp=head;
   while(temp!=NULL && count<i-1 ){
   temp =temp->next;
   count++;
   }
   if(i==0){
       newNode->next=head;
       head=newNode;
       return head;
   }
   if(temp!=NULL){
       newNode->next=temp->next;
       temp->next=newNode;
   }
   return head;
}

void deletehead(Node* head, int j){
  Node* temp =head;
    int count=0;

  Node* a=new Node(data);
    Node* b=new Node(data);
    
    while(temp!=NULL && count<j-1){
        temp=temp->next;
        count++;
    }
    a=temp->next;
    b=a->next;
  //  temp=temp->next->next;
 //temp=next->next;
    
    delete a;
}








void printlist(Node *head){
    Node *temp=head;   //store tthe head in temp bcz head use again
    while(temp!=NULL){
        cout<<temp->data<<"\n ";
    temp=temp->next;
    }
}
//recursion function use
void rPrint(Node *head){
        if(head==NULL)
        return ;
        cout<<head->data<<" \n ";
        rPrint(head->next);
    }
  // take input by user   
Node* takeinput(){
            int data;
            cin>>data;
            Node*head=NULL;
            Node*tail=NULL;
            while(data!=-1)
            {
                Node*Newnode=new Node(data);
                if(head==NULL)
                {

                 head=Newnode;
                 tail=Newnode;
                }
                else 
                {
                    tail->next=Newnode;
                    tail=tail->next;//tail = Newnode

                }
                cin>>data;
            }

              return head;
        }
void print(Node*head){
   while(head!=NULL)// this function use in one time because head is ded after 1 time running
   {
       cout<<head->data<<" ";
        head=head->next;
    }

  }
    


int main() 
{  // Node n1(10);

    //  Node *head=&n1;
   //   Node n2(20);
   //   Node n3(30);
   //   Node n4(40);
   //   Node n5(50);
    
  // n1.next=&n2;
    // n2.next=&n3;
       // n3.next=&n4;
 // n4.next=&n5;
 // printlist(head);
 // rPrint(head);

	//Node *head=new Node(10);
	//head->next=new Node(20);
	//head->next->next=new Node(30);
	//head->next->next->next=new Node(40);
    //rPrint(head);
   // printlist(head);
   Node *head=takeinput() ;

  print(head);
 int i ,data;
  cin>>i>>data;
head =inserthead(head, i,data);
print(head);
int j;
cin>>j;
deletehead(j);
	return 0;
} 
#include <iostream>
#include <string>

using namespace std;

// structure of a node
struct Node
{ 
       string data;
       node *next;
};

//Creation of the linked list
class LinkedList
{ private:
	node *head, *tail;
  public:
	LinkedList()
	{ 
          head=Null;
	      tail =Null;
	}

//Create nodes
	void createnode(string value)
	{ 
         node *temp = new node;
	     temp->data=value;
	     temp->next=Null;
	     if (head==Null)
	     { 
                        head=temp;
	                    tail=temp;
	                    temp=Null;
                     }
         else
         { tail->next=temp;
           tail=temp;
         }
     }
 
// Display the Linked list
   void Display()
   { 
        node *temp= new node;
        temp=head;
        while(temp!=Null)
        { 
          std::cout<< temp->data<< "\t";
          temp=temp->next;
        }
   }

// Insertion of value into the list
// a) At the start
   void AtStart(string value)
   {
        node *temp=new node;
        temp->data=value;
        temp->next=head;
        head=temp;
   }

//b) At the end
     void AtEnd(string value)
     { 
          node *temp = new node;
          temp->data=value;
          temp->next=tail;
          tail=temp;
     }
     
//c) After a certain string
     void AftString(string value, string pvalue)
     {
           node *temp=new node;
           node *pnode=new node;
           temp->data=value;
           pnode->data=pvalue;
           temp->next=pnode->next;
           pnode->next=temp;
     }
     
     
// Deletion of value in list
   void Delete(string value)
   {
        node *temp=new node;
        node *prev=new node;
        node *cur=new node;
        
        temp->data=value;
        cur=head;
        if (temp==head)
        {
                       head=head->next;
                       delete temp;
        }
        while (cur != temp)
        {
              prev=cur;
              cur=cur->next;
        }
        if (prev->next==Null)
        {
              tail=prev;
              delete cur;
        }
        else
        {
              prev->next=cur->next;
        }
        
   }    // closing bracket for class list           
              
int main()
{ 
    LinkedList *days = new LinkedList()
    days->AtStart('Monday');
    days->AtEnd('Friday');
    days->AftString('Tuesday','Monday');
    days->AftString('Wednesday','Tuesday');
    days->Display();
    days->Delete('Friday');
       
       




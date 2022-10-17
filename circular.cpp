#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }

    else{
        //non empty list
        //assuming that the element is present in the list

        Node* curr=tail;

        while(curr->data!=element)
        {
            curr=curr->next;

        }

        //element found->curr is representimg element wala node
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void print(Node* &tail)
{
    Node* temp=tail;

     //empty list
     if(tail==NULL)
     {
        cout<<"List is empty "<<endl;
        return;
     }

    do{
        cout<<tail->data<< " ";
        tail=tail->next;

    }
    while(tail!=temp);
    cout<<endl;
}

void deleteNode(Node* &tail,int value)
{
//if list is empty
if(tail==NULL)
{
    cout<<"List is empty ,please check again"<<endl;
    return;
}
else
{
    //non empty
    //assuming that value is present in the linked list
    Node* prev=tail;
    Node* curr=prev->next;

    while(curr->data!=value)
    {
        prev=curr;
        curr=curr->next;

    }

     prev->next=curr->next;

     //1 Node Linked List
     if(curr==prev)
     {
        tail=NULL;
     }

     //>=2 Node Linked List
     else if(tail==curr)
     {
        tail=prev; 
     }
     curr->next=NULL;
     delete curr;
}

}
int main()
{
    Node* tail=NULL;
    insertNode(tail,0,2);
    print(tail);
    
    insertNode(tail,2,3);
    print(tail);

    insertNode(tail,3,4);
    print(tail);

    insertNode(tail,4,5);
    print(tail);

    insertNode(tail,3,8);
    print(tail);

    insertNode(tail,2,1);
    print(tail);

    deleteNode(tail, 2);
    print(tail);

}

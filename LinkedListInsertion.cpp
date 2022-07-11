#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertAtHead(Node*&head, int data)
{
    if(head==NULL)
    {
        head = new Node(data);
        return;
    }
    
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void print(Node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
}

void insertAtTail(Node*&head, int data)
{
    if(head==NULL)
    {
        insertAtHead(head, data);
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    Node* n = new Node(data);
    temp->next = n;
    n->next = NULL;
    
}

int length(Node*head)
{
    int count = 0;
    while(head!=NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
void insertAtMiddle(Node*&head, int data, int p)
{
    if(p==0 || head==NULL)
    {
        insertAtHead(head, data);
        return;
    }
    
    else if(p>=length(head))
    {
        insertAtTail(head, data);
        return;
    }
    
    else
    {
        Node* n = new Node(data);
        Node* temp = head;
        while((p-1)!=0)
        {
            p--;
            temp=temp->next;
        }
        n->next = temp->next;
        temp->next = n;
        
    }
    
    
    
}

int main() {
	// your code goes here
	Node* head = NULL;
	insertAtTail(head, 3);
	insertAtHead(head, 4);
	insertAtHead(head, 5);
	insertAtTail(head, 6);
	insertAtMiddle(head, 2, 1);
	insertAtMiddle(head, 7, 5);
	insertAtMiddle(head, 9, 3);
	print(head);
	return 0;
}

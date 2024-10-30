#include <bits/stdc++.h>
using namespace std;
 
class node {
public:
    int data;
    node* next;
 
    // A constructor is called here
    node(int value)
    {
 
        // It automatically assigns the value to the data
        data = value;
 
        // Next pointer is pointed to NULL
        next = NULL;
    }
};
 
// Function to insert an element at head position
void insertathead(node*& head, int val)
{
    node* n = new node(val);
    n->next = head;
    head = n;
}
 
// Function to insert an element at the end
void insertattail(node*& head, int val)
{
    node* n = new node(val);
    if (head == NULL) {
        head = n;
        return;
    }
 
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}
 
// Function to print the singly linked list
void print(node*& head)
{
    node* temp = head;
 
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
 
// Main function
int main()
{
 
    // Declaring an empty linked list
    node* head = NULL;
 
    insertathead(head, 10);
    insertathead(head, 5);
    cout << "After insertion at head: ";
    print(head);
    cout << endl;
 
 	insertattail(head, 15);
    insertattail(head, 20);
    insertattail(head, 25);
    cout << "After insertion at tail: ";
    print(head);
    cout << endl;
 
    return 0;
}

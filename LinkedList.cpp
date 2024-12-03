#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insert(Node *&head, int data)
{
    Node *newNode = new Node();

    newNode->data = data;

    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertAtBeginning(Node*&head,int data ){

    Node* newNode = new Node();
    newNode ->data=data;
    newNode->next=head;
    head= newNode;

}

void display(Node *head)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << " null" << endl;
}

int main()
{

    Node *head = nullptr;

    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);

    cout << "Linked List: ";
    display(head);

    insertAtBeginning(head,10);
    insertAtBeginning(head,20);
    insertAtBeginning(head,30);
    insertAtBeginning(head,40);

     cout << "Linked List at beginning: ";
    display(head);

    return 0;
}
#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
node *head = NULL;

void insertAtHead(int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void display()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
void insertAtTail(int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void insertAtAPoint(int val, int pos)
{
    node *newNode = new node(val);
    int curr = 0;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    node *temp = head;
    while (curr != pos)
    {
        temp = temp->next;
        curr++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int main()
{
    insertAtHead(100);
    insertAtTail(200);
    insertAtHead(300);
    insertAtAPoint(400, 1);
    display();
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    node *prev;
    int data;
    node *next;
    node(int val)
    {
        prev = NULL;
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
    head->prev = newNode;
    head = newNode;
}
void display()
{
    node *temp = head;
    cout<<"NULL<->";
    while (temp != NULL)
    {
        cout << temp->data << "<->";
        temp = temp->next;
    }
    cout << "NULL"<<endl;
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
    newNode->prev = temp;
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
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}

void deleteTail(){
    if(head == NULL){
        cout<<"The Linked list is empty."<<endl;
        return;
    }
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;

}

void deleteHead(){
    if(head == NULL){
        cout<<"The Linked list is empty."<<endl;
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;
}


void deleteANode(int pos)
{
    int curr = 0;
    if (head == NULL)
    {
        cout<<"The Linked list is empty."<<endl;
        return;
    }
    node *temp = head;
    while (curr != pos-1)
    {
        temp = temp->next;
        curr++;
    }
    node *del = temp->next;
    temp->next->next->prev = temp;
    temp->next = temp->next->next;
    delete del;
}

void reverse(){
    if(head == NULL){
        cout<<"The Linked list is empty."<<endl;
        return;
    }
    node *temp = head;
    vector<int> values;
    while(temp != NULL){
        values.push_back(temp->data);
        temp = temp->next;
    }
    temp = head;
    reverse(values.begin(), values.end());
    int i = 0;
    while(temp != NULL){
        temp->data = values[i];
        temp = temp->next;
        i++;
    }
}

int main()
{
    insertAtHead(12);
    insertAtTail(13);
    insertAtTail(14);
    insertAtTail(16);
    insertAtTail(15);
    insertAtTail(17);
    insertAtTail(18);
    display();
    bool run = true;
    while (run)
    {
        cout<<"Chose from the following operations you want to perform:- "<<endl<<"\t\tInsert"<<endl<<"1. Insert at tail  2. Insert at Head  3. Insert at a specified position"<<endl<<
        "\t\tDeletion"<<endl<<"4. Delete from tail  5. Delete from head  6. Delete from a specified position"<<endl<<"\t\tOther Operations"<<endl<<"7. Reverse the list  0.EXIT  other. Display"<<endl;
        int choice;
        cin>>choice;
        int element, pos;
        switch (choice)
        {
        case 0:
            run = false;
            break;
        case 1:
            
            cout<<"enter the element :- ";
            cin>>element;
            insertAtTail(element);
            display();
            break;
        case 2:
            cout<<"enter the element :- ";
            cin>>element;
            insertAtHead(element);
            display();
            break;
        case 3:
            cout<<"enter the element :- ";
            cin>>element;
            cout<<"enter a position: - ";
            cin>>pos;
            insertAtAPoint(element, pos);
            display();
            break;
        case 4:
            deleteTail();
            display();
            break;
        case 5:
            deleteHead();
            display();
            break;
        case 6:
            cout<<"enter the position :- ";
            cin>>pos;
            deleteANode(pos);
            display();
            break;
        case 7:
            reverse();
            display();
            break;
        
        default:
            display();
            break;
        }
    }
    return 0;
}
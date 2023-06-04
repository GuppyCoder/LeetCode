#include <iostream>

struct Node{
        int data;
        Node* next;
};

void printList(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        std::cout << temp->data << ' ';
        temp = temp->next;
    }
    std::cout << std::endl;
    return;
}
int main()
{
    Node* head = NULL;
    Node* h1 = NULL;
    Node* h2 = NULL;

    head = new Node();
    h1 = new Node();
    h2 = new Node();

    head->data = 1;
    h1->data = 2;
    h2->data = 3;

    head->next = h1;
    h1->next = h2;
    h2->next = NULL;

    printList(head);
}
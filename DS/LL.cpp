#include <iostream>
using namespace std;

struct node
{
    int data;
    node *link;
};

int main()
{
    node *A = NULL; // Created an empty linked list.

    // Creating a new node
    node *temp = new node();
    temp->data = 2;
    temp->link = NULL;

    // Updating the address of the head.
    A = temp;

    // Creating another node and appending it to the list.
    temp = new node();
    temp->data = 4;
    temp->link = NULL;

    // Updating the address of the tail of the existing list.
    // We traverse the entire list to reach the tail.
    node *temp1 = A;
    while (temp1->link != NULL)
    {
        temp1 = temp1->link;
    }
    // Now that we've reached the end of the list, we update the address of the tail to the new node.
    temp1->link = temp;

    // Printing the linked list.
    temp1 = A;
    while (temp1 != NULL)
    {
        cout << temp1->data << "\n";
        temp1 = temp1->link;
    }
    return 0;
}
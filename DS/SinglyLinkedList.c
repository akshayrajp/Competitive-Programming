// Akshay Rajpurohit
// August 17th, 2020.

#include <stdio.h>
#include <stdlib.h>

/* 

    Every node in a singly linked list consists of two parts :
        1. The data of the node.
        2. The pointer to the next node.
    
    The only information we store about the singly linked list is a pointer (of type node) that points to the head node.
    Using this information, we can traverse through the entire list.

    The tail of the singly linked list contains the data of the tail node, and 'NULL' as the value of the pointer to the next node.

*/

// The structure of each node is as follows :
struct node
{
    int data;
    struct node *next;
};

// We declare headPointer as a global variable because we will be using it's value throughout the code, in various functions.
// The headPointer is a pointer of type node and it points to the head node.
struct node *headPointer;

// A function that creates a node, stores data inside the node, and returns a pointer (of type node) to the created node to the calling function.
struct node *createNode(int nodeData)
{
    /* 
        
        Why do we use dynamic memory allocation (malloc function) here?

        We could've simply declared a new variable of type node like so : 'struct node newNode;'.
        But the problem with such a declaration is that the node is stored in the *stack section* of the memory.
        This node will be freed (aka destroyed/cleared) as soon as the function in which it is declared finishes it's execution.
        So even if we return the address of the node that we just created, there won't be any node at that address
            as the memory allocated to it has been freed.

        To overcome this, we have to store the node in the *heap section* of the memory.
        Anything that is stored in the heap memory, will not get cleared or deleted unless explicitly specified to do so.
        So now, we can return a pointer to the created node, and we can also access the node in the calling function.

        malloc() allocates space in the heap memory. We have to pass the amount of space to be allocated as an argument to it.
        malloc() returns a pointer of type void pointing to the allocated space, so we have to explicitly type-cast it
            into the pointer-type that will be pointing to the allocated space.
        In our case, we allocated space to store a single node, and we now point to this allocated space by using a pointer of type node.

    */

    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    // Storing the data that was intended for this node inside it.
    newNode->data = nodeData;

    // Assigning (more like initializing) the address of the next node as NULL.
    newNode->next = NULL;

    // Return the address of this newly created node to the calling function.
    return newNode;
}

// A function that will insert a new node at the head of the singly linked list and store the data passed to it inside this new node.
void insertNodeAtHead(int nodeData)
{
    // First, we have to create a new node with the given data.
    struct node *newNode = createNode(nodeData);

    // Next, we have to insert the data at the head of the singly linked list.
    // To do this, we have to first check if the singly linked list is empty or not.
    if (headPointer == NULL)
    {
        // If it is indeed empty, then we just have to point the headPointer to the new node, and our job will be done.
        headPointer = newNode;

        return;
    }
    else
    {
        /* 
            If the singly linked list is not empty :
                1. We have to first point the newly created node (the pointer to the next node) to the current head.
                2. Next, we have to point the headPointer to the newly created node.
                3. This way, a new node is inserted at the head of a non-empty singly linked list.
        */

        // Pointing the pointer to the next node to the headPointer.
        newNode->next = headPointer;

        // Pointing the headPointer to the newly created node.
        headPointer = newNode;

        return;
    }
}

void deleteNodeAtHead()
{
    return;
}

// A function to create a new node and insert it at the 'n'th position.
void insertNodeAtN()
{

    return;
}

void deleteNodeAtN()
{
    return;
}

void insertNodeAtTail()
{
    return;
}

void deleteNodeAtTail()
{
    return;
}

// A function to print the singly linked list.
void printSinglyLinkedList()
{
    // If the singly linked list is empty, print an appropriate message and stop execution.
    if (headPointer == NULL)
    {
        printf("The singly linked list is empty!\n");
        return;
    }

    // We use a iterator to iterate through the entire singly linked list. We initialize it to headPointer, as that is where the singly linked list begins.
    struct node *iterator = headPointer;

    printf("The Singly Linked List: \n");
    // We iterate through the entire singly linked list until we reach it's tail, and we know tail of singly linked list point to NULL.
    while (iterator != NULL)
    {
        // We print the data
        printf("%d\t", iterator->data);

        // We move to the next node by pointing the iterator to the next node.
        iterator = iterator->next;
    }
}

int main()
{
    // We assign the address of the headPointer to 'NULL', thereby creating an empty singly linked list.
    // Here the headPointer points to nothing, therefore the singly linked list is empty.
    headPointer = NULL;

    insertNodeAtHead(3);
    insertNodeAtHead(2);
    insertNodeAtHead(1);

    printSinglyLinkedList();
}
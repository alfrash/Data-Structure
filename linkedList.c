#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *link;
};

// count nodes "linked list length"
int linkedListLength(struct node *head)
{
    int count = 0;
    if (head == NULL)
    {
        printf("%s \n", "no linked list");
    }else
    {
        struct node *currentNode = head;
        while (currentNode != NULL)
        {
            count++;
            currentNode = currentNode->link;
        }   
    }
    return count;
}

// print linked list
void printLinkedList(struct node *head)
{
    if (head == NULL)
    {
        printf("%s \n", "no liked list");
    }
    else
    {
        struct node *currentNode = head;
        while (currentNode != NULL)
        {
            printf("%d \n", currentNode->value);
            currentNode = currentNode->link;
        }
        
    }
    
}

///MARK: insert element at the end of linked list
struct node *insertLinkedListElementAtEnd(struct node *lastElement, int data)
{
    struct node *newElement;
    newElement = malloc(sizeof(struct node));
    newElement->value = data;
    newElement->link = NULL;
    lastElement->link = newElement;

    return newElement;
}

int main()
{
    // first node head
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->value = 1956;
    head->link = NULL;

    struct node *currentNode = insertLinkedListElementAtEnd(head, 1967);
    currentNode = insertLinkedListElementAtEnd(currentNode, 1973);
    currentNode = insertLinkedListElementAtEnd(currentNode, 2028);
    currentNode = insertLinkedListElementAtEnd(currentNode, 2031);

    // // second node
    // // 1- create ref for second node
    // struct node *currentNode = malloc(sizeof(struct node));
    // // add value and link for second node
    // currentNode->value = 1967;
    // currentNode->link = NULL;
    // // create link from head to second node
    // head->link = currentNode;

    // // third node
    // currentNode = malloc(sizeof(struct node));
    // currentNode->value = 1973;
    // currentNode->link = NULL;
    // head->link->link = currentNode;

    // // fourth node
    // currentNode = malloc(sizeof(struct node));
    // currentNode->value = 2028;
    // currentNode->link = NULL;
    // head->link->link->link = currentNode;

    // // fifth node
    // currentNode = malloc(sizeof(struct node));
    // currentNode->value = 2031;
    // currentNode->link = NULL;
    // head->link->link->link->link = currentNode;

    // printf("%d \n", head->value);
    // printf("%d \n", head->link->value);
    // printf("%d \n", head->link->link->value);
    // printf("%d \n", head->link->link->link->value);
    // printf("%d \n", head->link->link->link->link->value);
    printf("linked list length = %d \n", linkedListLength(head));
    printLinkedList(head);
    // array 
    int arr[] = {1956, 1967, 1973, 2028, 2031};
    int length = sizeof(arr) / sizeof(int);
    printf("array length = %d \n", length);
    for (int i = 0; i < length; i++)
    {
        printf("%d \n", arr[i]);
    }
    
    return 0;
}

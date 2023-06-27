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

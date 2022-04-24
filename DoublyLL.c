#include <stdio.h>
#include <stdlib.h>

struct Node
{

    int data;
    struct Node *next;
    struct Node *prev;
};

typedef struct Node node;
typedef struct Node *nodePtr;
typedef struct Node **pNodePtr;

int count(pNodePtr Head)
{
    int cnt = 0; //
    nodePtr temp = *Head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int checkFreq(pNodePtr Head, int num)
{
    nodePtr temp = *Head;
    int cnt = 0;
    while (temp->next != NULL)
    {
        if (temp->data == num)
        {
            cnt++;
        }
        temp = temp->next;
    }
    return cnt;
}

void DisplayList(pNodePtr Head)
{

    if (*Head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    nodePtr temp = *Head;
    while (temp != NULL)
    {

        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

void InsertAtFirst(pNodePtr Head, int num)
{

    nodePtr newn = NULL;
    newn = (struct node *)malloc(sizeof(node));
    newn->data = num;
    newn->next = NULL;
    newn->prev = NULL;

    if ((*Head) == NULL)
    {
        (*Head) = newn;
        return;
    }

    newn->next = (*Head);
    (*Head)->prev = newn;
    (*Head) = newn;
}

void InsertAtLast(pNodePtr Head, int num)

{
    nodePtr newn = NULL;
    newn = (struct node *)malloc(sizeof(node));
    newn->data = num;
    newn->next = NULL;
    newn->prev = NULL;
    if ((*Head) == NULL)
    {
        (*Head) = newn;
        return;
    }

    nodePtr temp = *Head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newn;
    newn->prev = temp;
}

void DeleteAtLast(pNodePtr Head)
{
    if (*Head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    nodePtr temp = *Head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void DeleteAtFirst(pNodePtr Head)
{
    if (*Head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    nodePtr temp = *Head;
    (*Head) = (*Head)->next;
    free(temp);
    (*Head)->prev = NULL;
}

void DeletePerticular(pNodePtr Head, int num)
{
    nodePtr temp = *Head;
    nodePtr temp2 = *Head;

    if (temp->data == num)
    {
        DeleteAtFirst(Head);
        temp = *Head;
    }

    while (temp != NULL)
    {
        if (temp->next->data == num)
        {
            temp2 = temp->next->next;
            free(temp->next);
            temp2->prev = temp;
            temp->next = temp2;
        }

        temp = temp->next;
    }
    DisplayList(Head);
}

int main()
{
    int iChoice = 1;
    int no, cnt;

    nodePtr First = NULL;

    while (iChoice != 0)
    {

        printf("\n____________________________________\n");
        printf("Enter your action on Linked list : \n");
        printf("0 : to Exit the programme\n");
        printf("1 : Display list\n");
        printf("2 : Display Total number of list\n");
        printf("3 : Insert node at First position\n");
        printf("4 : Insert node at Last position\n");
        printf("5 : Delete node at Last position\n");
        printf("6 : Delete node at First position\n");
        printf("7 : Delete perticular data\n");

        printf("\n____________________________________\n");
        printf("Please select a option : \n");

        scanf("%d", &iChoice);

        switch (iChoice)
        {
        case 0:
            printf("Thank you for using linked list.");
            free(First);
            break;

        case 1:
            DisplayList(&First);
            break;

        case 2:
            cnt = count(&First);
            printf("%d elements", cnt);
            break;

        case 3:
            printf("Please enter a number.\n");
            scanf("%d", &no);
            InsertAtFirst(&First, no);
            break;

        case 4:
            printf("Please enter a number.\n");
            scanf("%d", &no);
            InsertAtLast(&First, no);
            break;

        case 5:
            DeleteAtLast(&First);
            break;

        case 6:
            DeleteAtFirst(&First);
            break;

        case 7:
            printf("Please enter a number.\n");
            scanf("%d", &no);
            DeletePerticular(&First, no);
            break;
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

typedef struct Node node;
typedef struct Node *nodePtr;
typedef struct Node **pnodePtr;

int count(pnodePtr Head)
{
	int n = 0;

	nodePtr temp = *Head;
	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	return n;
}

void DisplayList(pnodePtr Head)
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

void InsertAtFirst(pnodePtr Head, int num)
{
	nodePtr newn = NULL;
	newn = (node *)malloc(sizeof(struct Node));
	newn->data = num;
	newn->next = NULL;

	if (*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
	}
}

void InsertAtLast(pnodePtr Head, int num)
{
	nodePtr newn = NULL;
	newn = (node *)malloc(sizeof(struct Node));
	newn->data = num;
	newn->next = NULL;
	nodePtr temp = *Head;

	if (*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		while (temp->next != NULL)
		{

			temp = temp->next;
		}
		temp->next = newn;
	}
}

void DeleteAtLast(pnodePtr Head)
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

void DeleteAtFirst(pnodePtr Head)
{
	if (*Head == NULL)
	{
		printf("List is empty\n");
		return;
	}
	else if ((*Head)->next == NULL)
	{
		*Head = NULL;
	}

	nodePtr temp = *Head;
	*Head = (*Head)->next;
	free(temp);
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
		}
	}

	return 0;
}
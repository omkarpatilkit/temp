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

int main()
{
	int iChoice = 0;
	int no;

	nodePtr First = NULL;

	printf("Please select the option: \n");
	scanf("%d", &iChoice);

	while (iChoice != 0)
	{

		switch (iChoice)
		{
		case 1:
			DisplayList(&First);
			break;

		case 2:
			printf("Please enter a number.\n");
			scanf("%d", &no);
			InsertAtFirst(&First, no);
			break;

		case 3:
			printf("Please enter a number.\n");
			scanf("%d", &no);
			InsertAtLast(&First, no);
			break;
		}

		printf("1. Display list.\n2. Insert at first.\n3. Insert at Last.\n");
		scanf("%d", &iChoice);
	}

	return 0;
}
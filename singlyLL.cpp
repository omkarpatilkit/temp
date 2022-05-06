#include <iostream>
using namespace std;

class singlyLL
{
private: // struct Node
    int iSize = 0;
    struct Node
    {
        int data;
        struct Node *next;
    };

    typedef struct Node node;
    typedef struct Node *nodePtr;
    typedef struct Node **nodePtrPtr;

    nodePtr Head = NULL;

public:
    singlyLL()
    {
        Head = NULL;
        iSize = 0;
    };
    void insertAtFirst(int);
    void insertAtLast(int);
    void DeleteAtFirst();
    void DeleteAtLast();
    int count();
    void insertAtAnyPosition(int, int);
    void DeleteAtAnyPosition(int);
    void Display();
};

void singlyLL ::insertAtFirst(int n)
{

    nodePtr newn = NULL;
    newn = new node;
    newn->data = n;
    newn->next = NULL;

    if (Head == NULL)
    {
        Head = newn;
    }
    else
    {

        newn->next = Head;
        Head = newn;
    }
    iSize++;
}

void singlyLL ::insertAtLast(int n)
{
    nodePtr newn = NULL;
    newn = new node;
    newn->data = n;
    newn->next = NULL;
    if (Head == NULL)
    {
        Head = newn;
    }

    else if (Head->next == NULL)
    {
        Head->next = newn;
    }
    else
    {
        nodePtr temp = Head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iSize++;
}

void singlyLL ::DeleteAtLast()
{

    nodePtr temp = Head;
    if (Head->next == NULL)
    {
        Head = NULL;
        free(temp);
    }
    else if (Head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    else
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
    iSize--;
}

void singlyLL ::DeleteAtFirst()
{

    nodePtr temp = Head;

    if (Head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    else
    {
        Head = Head->next;
        free(temp);
    }
    iSize--;
}

int singlyLL ::count()
{
    return iSize;
}

void singlyLL ::insertAtAnyPosition(int n, int pos)
{
    if (pos == 1)
    {
        insertAtFirst(n);
    }
    else if (pos == iSize)
    {
        insertAtLast(n);
    }
    else if (pos > iSize)
    {
        cout << "Please enter a valid input" << endl;
        return;
    }
    else
    {
        nodePtr newn;
        newn = new Node;
        newn->data = n;
        newn->next = NULL;
        nodePtr temp = Head;
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
        iSize++;
    }
}

void singlyLL ::DeleteAtAnyPosition(int pos)
{
    if (pos == 1)
    {
        DeleteAtFirst();
        return;
    }
    else if (pos == iSize)
    {
        DeleteAtLast();
        return;
    }
    else if (pos > iSize)
    {
        cout << "Please enter a valid input" << endl;
        return;
    }
    else
    {
        nodePtr temp = Head;
        nodePtr temp2 = NULL;

        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }
        temp2 = temp->next;
        temp->next = temp->next->next;
        free(temp2);
        iSize--;
    }
}

void singlyLL ::Display()
{

    if (Head == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        nodePtr temp = Head;
        while (temp != NULL)
        {
            cout << temp->data << "\t";
            temp = temp->next;
        }
    }
}

int main()
{
    int iChoice = 1, iNo = 0, iRet = 0, iPos = 0;
    singlyLL List1;

    while (iChoice != 0)
    {

        cout << "1 : To enter at First place." << endl;
        cout << "2 : To enter at Last place." << endl;
        cout << "3 : To delete at First place." << endl;
        cout << "4 : To delete at Last place." << endl;
        cout << "5 : To enter at Postion place." << endl;
        cout << "6 : To Delete at Position place." << endl;

        cout << "7 : To Display the list." << endl;
        cout << "8 : To Display number of elements in the list." << endl;
        cout << "0: To exit." << endl;
        cout << "____________________________________________" << endl;

        cout << "Please select the option:" << endl;
        cin >> iChoice;

        switch (iChoice)
        {
        case 1:
            cout << "Enter number to add at first place: " << endl;
            cin >> iNo;
            List1.insertAtFirst(iNo);

            break;

        case 2:
            cout << "Enter number to add at Last place: " << endl;
            cin >> iNo;
            List1.insertAtLast(iNo);
            break;

        case 3:
            List1.DeleteAtFirst();
            break;

        case 4:
            List1.DeleteAtLast();
            break;

        case 5:
            cout << "Enter number to add in List1: " << endl;
            cin >> iNo;
            cout << "Enter the position of number to add: " << endl;
            cin >> iPos;
            List1.insertAtAnyPosition(iNo, iPos);
            break;

        case 6:
            cout << "Enter the position of number to delete: " << endl;
            cin >> iPos;
            List1.DeleteAtAnyPosition(iPos);
            break;

        case 7:
            List1.Display();
            break;

        case 8:
            iRet = List1.count();
            cout << "Number of elements : " << iRet << endl;
            break;

        default:
            cout << "Please select a valid input: " << endl;
            break;
            return 0;
        }

    } // end while

} // end of main
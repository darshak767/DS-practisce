#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *head = NULL;

int insert()
{
    int data;
    printf("Enter the Node data: ");
    scanf("%d", &data);
    return data;
}

struct Node *first_last_create(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }

    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
       sakdlsads struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    return head;
}

void insert_first(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void insert_between(int index, int data)
{
    if (head == NULL || index < 0)
    {
        printf("Invalid index or empty list. Insertion failed.\n");
        return;
    }

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = data;

    struct Node *temp = head;
    int i = 0;

    while (i != index - 1)
    {
        if (temp->next == NULL)
        {
            printf("Index out of bounds. Insertion failed.\n");
            free(newNode);
            return;
        }
        temp = temp->next;
        i++;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void first_delete()
{
    if (head == NULL)
    {
        printf("Nothing to delete.\n");
        return;
    }

    struct Node *temp = head;
    head = head->next;
    free(temp);
    printf("Element deleted successfully.\n");
}

void last_delete()
{
    if (head == NULL)
    {
        printf("List is empty, nothing to delete.\n");
        return;
    }

    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        printf("Last element deleted successfully.\n");
        return;
    }

    struct Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
    printf("Last element deleted successfully.\n");
}

void print(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void check(int choice)
{
    int index;

    switch (choice)
    {
    case 1:
        printf("Insert beginning.....\n");
        insert_first(insert());
        break;
    case 2:
        printf("Insert between.....\n");
        printf("Enter the index: ");
        scanf("%d", &index);
        insert_between(index, insert());
        break;
    case 3:
        printf("Insert last.....\n");
        first_last_create(insert());
        break;
    case 4:
        printf("Delete beginning....\n");
        first_delete();
        break;
    case 5:
        printf("Delete between.... (Not implemented yet)\n");
        break;
    case 6:
        printf("Delete last....\n");
        last_delete();
        break;
    case 7:
        printf("Display the linked list....\n");
        print(head);
        break;
    default:
        printf("Not a valid choice. Please enter a valid choice.\n");
        break;
    }
}

int main()
{
    int n, data, choice;

    printf("Enter the Number of Nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        data = insert();
        first_last_create(data);
    }

    do
    {
        printf("1 :- Insert element at the beginning.\n");
        printf("2 :- Insert element in between.\n");
        printf("3 :- Insert element at the end.\n");
        printf("4 :- Delete element from the beginning.\n");
        printf("5 :- Delete element from between.\n");
        printf("6 :- Delete element from the end.\n");
        printf("7 :- Display the Linked List.\n");
        printf("8 :- Exit the program.\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        if (choice == 8)
            break;

        check(choice);
    } while (choice != 8);

    return 0;
}

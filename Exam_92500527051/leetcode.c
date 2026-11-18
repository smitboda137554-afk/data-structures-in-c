#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node *next;
};


struct node *head = NULL;


void insert()
{
    struct node *newnode, *temp;


    newnode = (struct node*)malloc(sizeof(struct node));


    printf("Enter value: ");
    scanf("%d", &newnode->data);


    newnode->next = NULL;


    if(head == NULL)
        head = newnode;
    else
    {
        temp = head;


        while(temp->next != NULL)
            temp = temp->next;


        temp->next = newnode;
    }
}


void display()
{
    struct node *temp;


    temp = head;


    if(head == NULL)
        printf("List is Empty");
    else
    {
        printf("Linked List:\n");


        while(temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }


        printf("NULL");
    }
}


int main()
{
    int ch;


    do
    {
        printf("\n1. Insert");
        printf("\n2. Display");
        printf("\n3. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);


        switch(ch)
        {
            case 1:
                insert();
                break;

            case 2:
                display();
                break;


            case 3:
                printf("Exit");
                break;


            default:
                printf("Invalid Choice");
        }




    return 0;
}

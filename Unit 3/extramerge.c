#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *l1 = NULL, *l2 = NULL;

void create(struct node **head) {
    struct node *newnode, *temp;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newnode = malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if(*head == NULL)
            *head = newnode;
        else {
            temp = *head;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }
}

void display(struct node *head) {
    while(head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void merge() {
    struct node *temp = l1;

    if(temp == NULL) {
        l1 = l2;
        return;
    }

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = l2;
}

int main() {
    int ch;

    do {
        printf("\n1. Create List 1");
        printf("\n2. Create List 2");
        printf("\n3. Display List 1");
        printf("\n4. Display List 2");
        printf("\n5. Merge Lists");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: create(&l1); break;
            case 2: create(&l2); break;
            case 3: display(l1); break;
            case 4: display(l2); break;
            case 5:
                merge();
                printf("Merged List: ");
                display(l1);
                break;
            default:
                printf("Invalid choice!");
        }
    } while(ch != 5);

    return 0;
}
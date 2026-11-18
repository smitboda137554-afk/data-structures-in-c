#include <stdio.h>
#define SIZE 5


int stack[SIZE], top = -1;

void push(){
    int x;


    if(top == SIZE - 1){
        printf("Stack Overflow");
    }
    else
    {
        printf("Enter value: ");
        scanf("%d", &x);

        top++;
        stack[top] = x;
    }
}

void pop(){
    if(top == -1){
        printf("Stack Underflow");
    }
    else
    {
        printf("Deleted element = %d", stack[top]);
        top--;
    }
}

void display(){
    int i;


    if(top == -1){
        printf("Stack is Empty");
    }
    else{
        printf("Stack elements:\n");

        for(i = top; i >= 0; i--){
            printf("%d\n", stack[i]);
        }
    }
}

void main(){
    int ch;

    while(1){
        printf("Stack : \n");

        printf("1.Push \n");
        printf("2.Pop \n");
        printf("3.Display \n");
        printf("4.Exit \n");

        printf("\nEnter choice: ");
        scanf("%d", &ch);


        switch(ch)
        {
            case 1:
                push();
                break;


            case 2:
                pop();
                break;


            case 3:
                display();
                break;


            case 4:
                printf("Exit");
                break;


            default:
                printf("Invalid Choice");
        }

    }
}

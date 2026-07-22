#include <stdio.h>

struct student {
    int rollno;
    char name[20];
};

void main(){
    struct student s1;
    printf("enter your roll no:");
    scanf("%d",&s1.rollno);

    printf("enter your name:");
    scanf("%s",&s1.name);

    printf("student data is a following this:\n");
    printf("*************************************\n");
    printf("\n in rollno is :%d",s1.rollno);
    printf("\n and student name is a %s",s1.name);
}

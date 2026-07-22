// delet the elemnet of siz ten

#include <stdio.h>

void main(){
    int myarr[10];
    int delet_index;
    int size = 10;

    printf("enter your 10 number you want\n");

    for(int i=0;i<10;i++){
        scanf("%d",&myarr[i]);
    }

    printf("enter your delet element index\n");
    scanf("%d",&delet_index);

    for(int i= delet_index;i < size -1;i++){
        myarr[i]=myarr[i+1];
    }

    size--;
    for(int i=0;i<size;i++){
        printf("%d",myarr[i]);
    }

}

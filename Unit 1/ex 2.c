# include <stdio.h>

enum week {mon,tue,wed,thus,fri,sat,sun};

void main(){

    enum week w;

    w=mon;

    printf("const day is %s",w);
}

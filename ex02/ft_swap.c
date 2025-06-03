#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a,int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int x=9,y=8;
    ft_swap(&x,&y);
    printf("x=%d\n",x);
    printf("y=%d",y);
    return 0;
}
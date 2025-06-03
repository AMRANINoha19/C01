#include <unistd.h>
#include <stdio.h>
void ft_ft(int *nbr){
    *nbr = 42; // we change the value of variable "x" with 42
}

int main(){
    int x=9;
    ft_ft(&x);
    printf("%d",x);
    return 0;
}
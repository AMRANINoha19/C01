#include<stdio.h>
#include <unistd.h>

void ft_ultimate_div_mod(int *a,int *b){
    if(*b!=0){
    int div= *a / *b;
    int mod= *a%*b;
    *a = div;
    *b = mod;
    }
}

int main(){
    int x=10,y=5;
    ft_ultimate_div_mod(&x,&y);
    printf("la division est:%d\n",x);
    printf("le modulo est:%d",y);
    return 0;
}
#include <stdio.h>
#include <unistd.h>

void ft_div_mod (int a, int b,int *div,int *mod){
    *div =a/b;
    *mod =a%b;
}

int main(){
    int x=10,y=5,d,m;
    ft_div_mod(x,y,&d,&m);
    printf("la division est:%d\n",d);
    printf("le modulo est:%d",m);
    return 0;

}
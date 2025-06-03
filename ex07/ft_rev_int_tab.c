#include<stdio.h>
#include<unistd.h>
void ft_rev_int_tab(int *tab,int size){
    int i=0;
    int temp;
    while(i<size/2){
        temp=tab[i];
        tab[i]=tab[size-1-i];
        tab[size-1-i]=temp;
        i++;
    }
}

int main(){
    int T[5],i;
    printf("saisir 5 elements:\n");
    for(i=0;i<5;i++){
        printf("T[%d]= ",i+1);
        scanf("%d",&T[i]);
    }
    ft_rev_int_tab(T,5);
    for(i=0;i<5;i++){
        printf("%d",T[i]);
    }
    return 0;
}
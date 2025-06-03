#include<stdio.h>
#include<unistd.h>
void ft_sort_int_tab(int *tab,int size){
    int temp,i=0,j=0;
    while(i<size-1){
        while(j<size-1-i){
            if(tab[j]>tab[j+1])
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1]=temp;
        }
        j++;
    }
    i++;
}

int main(){
    int T[10]={10,20,30,40,50,60,70,80,90,100};
    int i;
    ft_sort_int_tab(T,10);
    printf("la nouvelle ordre est:");
    for(i=0;i<10;i++){
        printf("%d",T[i]);
    }
    return 0;
}
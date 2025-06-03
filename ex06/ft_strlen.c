#include <stdio.h>

int ft_strlen(char *str){
    int i=0;
    while(str[i] != '\0'){
        i++;
    }
    return i;

}

int main(){
    int i=ft_strlen("hello alice!");
    printf("la longuere de chaine est:%d",i);
    return 0;
}
#include <stdio.h>

int main(){
    int v;
    printf("Saississez un entier \n");
    scanf("%i",&v);
    printf("Vous avez saisis %i \n",v);
    if(v%2 == 0){
        printf("C'est un entier pair");
    } else {
            printf("C'est un entier impaire");
        }
    return 0;

}
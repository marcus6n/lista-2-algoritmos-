#include <stdio.h>
#include <stdlib.h>

int main(){

    int par = 0, num, i;

    for (i = 1; i <= 10; i++){

        printf("Informe numero: ");

        scanf("%d", &num);
    }

    if (num % 2 == 0){

        par = par + 1;

    }

    printf("Pares: %d\n", par);

    printf("Impares: %d", 10 - par);

    return 0;

}
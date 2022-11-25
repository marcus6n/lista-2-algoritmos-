#include <stdio.h>

int main(){

    int n1 , n2 , n3;
    int media;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    media = (n1 + n2 + n3 / 3 );

    printf("A media e de: %d", media);

    return 0;

}
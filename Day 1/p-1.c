#include<stdio.h>
void main()
{
    float n;

    printf("Enter candies for sam : ");
    scanf("%f", &n);

    printf("\nsam have   : %.2f", 0.75*n);
    printf("\nAngel have : %.2f", 0.25*n);
}
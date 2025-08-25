#include <stdio.h>
int main() 
{
    int a, sum=0;
    for(int i=1; i<=10; i=i+1) {
        printf("Enter number %d: ", i);
        scanf("%d", &a);
        sum += a;
    }
    printf("Sum = %d\nMean = %.2f", sum, sum/10.0);
    return 0;
}

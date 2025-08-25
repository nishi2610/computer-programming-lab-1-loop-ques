#include <stdio.h>
int main() 
{
    int n, f=1;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i=i+1) {
        f=f*i;}
    printf("factorial = %d", f);
    return 0;
}

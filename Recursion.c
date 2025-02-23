(1)  factorial number 

#include <stdio.h>
int factorial (int n){
if(n==1) return 1;
    return n*factorial (n-1);
}

int main()
{
    int n;
    printf("Enterthe value");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("Enter the factorial no.%d",fact);

    return 0;
}
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


(2)
#include <stdio.h>
void greeting( int n){
    if (n==0) return;
    printf("Good morning \n");
    greeting(n-1);
    return;
}
int main()
{ int n;

    printf("Enter a number");
    scanf("%d",&n);
    greeting(n);

    return 0;
}


(3) 

#include <stdio.h>
void decreasing(int n){
    if(n==0)return;
    printf("%d\n",n);
    decreasing(n-1);
    return;
}
int main()
{ int n;
    printf("Enter a number");
    scanf("%d",&n);
    decreasing(n);

    return 0;
}

(3) 4
    3 
    2
    1
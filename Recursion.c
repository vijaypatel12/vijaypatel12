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

(4)parameterized 

#include <stdio.h>
void increasing(int x,int n){
    if(n>x)return;
        printf("%d\n",x);
    increasing(x+1,n);
        
    return;
}
int main()
{ int n;
    printf("Enter a number");
    scanf("%d",&n);
    increasing(1,n);

    return 0;
}

(4) 1
    2
    3
    4

(5) Decreasing & increasing 

#include <stdio.h>
void decreasing(int n){
    if(n==0)return;
    printf("%d\n",n);
    decreasing(n-1);
        printf("%d\n",n);
    return;
}
int main()
{ int n;
    printf("Enter a number");
    scanf("%d",&n);
    decreasing(n);

    return 0;
}

(5) 3
    2
    1
    1
    2
    3
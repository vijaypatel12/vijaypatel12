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

(6)sum parameterized 
#include <stdio.h>
void sum(int n,int s){
    if(n==0){
        printf("%d",s);
        return;
    }
    sum(n-1,s+n);
    return;
    
}
int main()
{ int n;
    printf("Enter a number");
    scanf("%d",&n);
    sum(n,0);

    return 0;
}


(6) 1+2+3+4+5=15



(7) raised to a power

#include <stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main()
{ int a;
    printf("Enter base:");
    scanf("%d",&a);
    int b;
    printf("Enter power:");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d raised to a power %d %d",a,b,p);

    return 0;
}

(8) stairpath

#include <stdio.h>
int stair(int n){
    if(n<=2) return n;
  int   totalways=stair(n-1)+stair(n-2);
    return totalways;
    
}
int main()
{int n;
    printf("Enter a number");
    scanf("%d",&n);
    int ways=stair(n);
    printf("%d",ways);

    return 0;
}


(9)raised a power 

#include <stdio.h>
int powerlog(int a,int b){
    if(b==0) return 1;
    int x=powerlog(a,b/2);
    if(b%2==0)
    return x*x;
    else
    return x*x*a;
    
}
int main()
{ int a;

    printf("Enter base :");
    scanf("%d",&a);
    int b;
    printf("Enter  power :");
    scanf("%d",&b);
    int p=powerlog(a,b);
    printf("%d to raised a power %d %d",a,b,p);

    return 0;
}
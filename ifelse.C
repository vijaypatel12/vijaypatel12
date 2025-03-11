#include <stdio.h>

int main()
{ float a;
    printf("Enter the value");
   scanf("%f",&a);
   float half=a/2;
   printf ("this is a half value %f",half);
    return 0;
}(1)the is no. is odd &even
#include <stdio.h>

int main()
{ int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%2==0){
        printf(" Even number ");
    }
    if(n%2!=0){
        printf("Odd number ");
    }

    return 0;
}


(2)Divisible by any number 
#include <stdio.h>

int main()
{ int n;
    printf(" Enter  a number ");
    scanf("%d",&n);
    if(n%5==0){
        printf("divisible by 5");
    }
    else {
        printf("not divisible by 5");
    }

    return 0;
}

(3)the absolute value
#include <stdio.h>

int main()
{ int n;
    printf("enter the value");
scanf("%d",&n);
if(n<0)
{ n=n*(-1);
    
}
printf("the absolute value is:%d",n);
    return 0;
}


(4)profit loss


#include <stdio.h>

int main()
{ int cp;
int sp;
    printf("Enter cost price");
    scanf("%d",&cp);
    printf("Enter selling price");
    scanf("%d",&sp);
    if(cp>sp){
        printf("loss");
        
    }if(sp>cp){
        printf("profit");
    } else
        printf("no profit no loss");


    return 0;
}

(5)area of perimeter 

#include <stdio.h>

int main()
{ int l;
    printf("Enter a length");
    scanf("%d",&l);
    int b ;
    printf("Enter a breadth");
    scanf("%d",&b);
    int a =l*b;
    int p=2 *(l+b);
    if(a>p) {
        printf("area is greater than perimeter");
    }
    else{
        printf("area is not greater than perimeter");
    }

    return 0;
}

(6) 99  se bda hon 1000 se chota hon 
#include <stdio.h>

int main()
{
   int n;
  printf("Enter the  no");
  scanf("%d",&n);
  if(n>99 && n<1000)
  {
      printf("three digit no");
  }
  
else  
{
    printf("not three digit no");
}
    return 0;
}
 

(7) valid triangle or not triangle 

#include <stdio.h>

int main()
{int a ;
    printf("Enter 1st side ");
    scanf("%d",&a);
    int b;
        printf("Enter 2nd side ");
    scanf("%d",&b);
int c ;
    printf("Enter 3rd side ");
    scanf("%d",&c);
    if((a+b)>c&&(b+c)>a&&(c+a)>b)
    {
        printf("valid triangle ");
    }
    else{
        printf("invalid triangle ");
    }
    return 0;
}





 #include<stdio.h>
  int main ()
{
  int n1=20,n2=20,n3=20;
  if(n1>=n2&&n1>=n3);
  printf("%d,is the largest number",n1);
  if(n2>=n1&&n2>=n3);
  printf("%d,is the largest number",n2);
  if(n3>=n1&&n3>=n3);
  printf("%d,is the largest number ",n3)




#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade: A\n");
    } 
    else if (marks >= 80) {
        printf("Grade: B\n");
    } 
    else if (marks >= 70) {
        printf("Grade: C\n");
    } 
    else if (marks >= 60) {
        printf("Grade: D\n");
    } 
    else {
        printf("Grade: F\n");
    }

    return 0;
}




    
#include <stdio.h>

int main()
{
  { 
      int a; 
      int b;
      int c;
      printf("Enter 1st number:");
      scanf("%d",&a);
      printf("Enter 2nd number:");
      scanf("%d",&b);
      printf("Enter 3rd number:");
      scanf("%d",&c);
      if(a>b && a>c)
      {
          printf("a is greatest ");
      }
      if(b>a && b>c)
      { printf("b is greatest");
      }
      if(c>a && c>b)
      {
          printf("c is greatest ");
      }
      return 0;
}}
#include <stdio.h>

int main()
{ float a;
    printf("Enter the value");
   scanf("%f",&a);
   float half=a/2;
   printf ("this is a half value %f",half);
    return 0;
}

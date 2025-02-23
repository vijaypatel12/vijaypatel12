(1) 
#include <stdio.h>
void greet (){
    printf("Hello Vijay\n ");
    printf("How are you\n");
    return ;
}

int main()
{
   greet ();
   greet ();
   

    return 0;
} 


(2)
#include <stdio.h>

void England(){
    printf("you are in England\n");
    return;
}

 void Australia(){
     printf("you are in Australia\n ");
     England();
     return;
 }
 void  india(){
    printf("you are in india\n");
    Australia();
    return;
}
 
int main()
{ india();

    return 0;
}



(3) swap two value || exchange value


#include<stdio.h>
int main(){
int a;
printf("Enter a :");
scanf("%d",&a);
int b;
prinf("Enter b:");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf(" The value of a:%d",a);
printf("The value of b:%d",b);
return 0;
}



(4) square root values find
#include <stdio.h>
#include <math.h>
int main()
{ 

   int   a;
    printf("Enter the value");
    scanf("%d",&a);
    int root=sqrt(a);
    printf("the value of a %d",root);
    return 0;
}

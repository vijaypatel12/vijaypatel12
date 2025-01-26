(1)

#include<stdio.h>
int main()
{
    int a,b,sum,minus,multiplication,division,module;
    printf("enter the values of a and b: ");
    scanf("%d%d",&a,&b);
    
    //addition//
    sum=a+b;
    printf("sum is %d\n",sum);
    
    //subtraction//
    minus=a-b;
    printf("minus is %d\n",minus);
    
    //multiplication//
    multiplication=a*b;
    printf("multiplication is %d\n",multiplication);
    
    //division//
    division=a/b;
    printf("division is %d\n",division);
    
    //modulous//
    module=a%b;
    printf("module is %d\n",module);
    return 0;
    
}




(2)
#include <stdio.h>

int main()
{
    int a=5,b=10,c=0;
    //logical AND(&&) operator
    if(a>0&&b>0){
        printf("both a and b are positive no.\n");
    }
//logical OR(||) operator
if(a>0||c>0){
    printf("atleast one of a or c is a positive no.\n");
}
//logical NOT(!) operator
if(!c){
    printf("c is equal to 0\n");
}
    return 0;
}





(3)

#include <stdio.h>
int main()
{ 
   float pi=3.14,radius,area;
   printf("enter the radius:");
   scanf("%f",&radius);
   printf("area is %f", area = pi*radius*radius);
   return 0;
}


(4)
#include <stdio.h>

int main()
{
    int maths, physics, biology, english, hindi, Chemistry,marks;
    printf("enter your marks in maths,physics, biology, english,hindi, chemistry:");
    scanf("%d%d%d%d%d%d",&maths,& physics,& biology,& english,& hindi,& Chemistry);
      marks=maths+physics+biology+english+hindi+Chemistry;
      printf("marks is %d\n",marks);
    if(marks>=162 && marks<=300)
    {
        printf("you have passed the exam");
    }
    if(marks<156)
    {
        printf("you have failed the exam");
    }
    return 0;
}



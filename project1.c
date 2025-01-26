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





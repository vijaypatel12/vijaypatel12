(1)
#include <stdio.h>

int main()
{
    int n;
    printf("enter row");
    scanf("%d",&n);
  for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
          printf("*");
      }
      printf("\n");
  }

    return 0;
}


(2)
#include <stdio.h>

int main()
{ int a,b;

    printf("Enter base");
    scanf("%d",&a);
    printf("Enter power");
    scanf("%d",&b);
    int power=1;
    for(int i=1;i<=b;i++)
    power=power*a;
    {
        printf("%d is raised to the power%d is %d ",a,b,power);
    }

    return 0;
}

(3)
#include <stdio.h>

int main()
{ int n;
    printf("Enter the row");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}

(3)
1
12
123
1234




(4)
#include <stdio.h>

int main()
{ int n;
    printf("Enter the row");
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            printf("%d",j);
        }
        a--;
        printf("\n");
    }

    return 0;
}


(5)
#include <stdio.h>

int main()
{ int n;
    printf("Enter the row");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}




(6)
#include <stdio.h>

int main()
{ int n;
    printf("Enter the rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
     for   (int j=1;j<=i;j++){
            printf("*");

        }
        printf("\n");
    }

    return 0;
}


(7)
#include <stdio.h>

int main()
{ int n;
    printf("Enter the rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=n;i++){
            printf("%d",i);

        }
        printf("\n");
    }

    return 0;
}

  
(8)
#include <stdio.h>

int main()
{int n;
    printf("Enter the row");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a =1;
        for(int j=1;j<=n;j++){
            int d = a +64;
            char ch=(char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }

    return 0;
}  





  (9)
#include <stdio.h>

int main()
{ int n;
    printf("enter the row");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
         int a=n/2+1;
        if(j==a||i==a)printf("*");
        else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
(9)
  *  
  *
*****
  *
  *





(10)
#include <stdio.h>

int main()
{ 
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
        
        if(j==3||i==3)printf("*");
        else printf("#");
        }
        printf("\n");
    }
     return 0;
}
(10)
##*##
##*##
*****
##*##
##*##





(11)
#include <stdio.h>

int main()
{ int n;
    printf("Enter the no. of row");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || i+j==n+1) printf("*");
            
            else printf(" ");
        }
        printf("\n");
    
}
    return 0;
}
(11)
  *   *
   * *
    *
  *   *
 *     *

(12)
#include <stdio.h>

int main()
{ int n;
    printf(" Enter the row");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
    if((i+j)%2==0) printf("1");
    else printf("0");
        }
   printf("\n");
    }

    return 0;
}
(12)
0
10
101
0101





(13)
#include <stdio.h>

int main()
{ int n;
    printf("Enter no. of the row");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for( int j=1;j<=n-i;j++){
            printf("#");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
(13)
###**
##***
#****
*****


(14)
#include <stdio.h>

int main()
{ int n;
    printf("Enter no. of the row:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for( int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=n;k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

(14)
   ****
  ****
 ****
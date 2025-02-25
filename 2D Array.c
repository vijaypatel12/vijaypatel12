(1)row &column 

#include <stdio.h>

int main()
{
 int arr[2][2]={{1,2},{3,4}};
 for(int i=0;i<2;i++){
     for(int j=0;j<2;j++){
         printf("%d ",arr[i][j]);
     }
     printf("\n");
 }

    return 0;
}


(1)
1 2 
3 4 



(2)

#include <stdio.h>

int main()
{
    int arr[2][2]={{1,2},{3,4}};
 for(int i=0;i<2;i++){
     for(int j=0;j<2;j++){
         printf("enter the number ");
         scanf("%d ",&arr[i][j]);
     }
     printf("\n");
 }
 {
 int arr[2][2]={{1,2},{3,4}};
 for(int i=0;i<2;i++){
     for(int j=0;j<2;j++){
         printf("%d ",arr[i][j]);
     }
     printf("\n");
 }

    return 0;
 }
}


(3)#include <stdio.h>

int main()
{
    int r;
    printf("Enter row;");
    scanf("%d",&r);
    int c;
    printf("Enter column");
    scanf("%d",&c);
    int arr[r][c];
   
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    } 
    printf("\n");
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        printf("%d ",arr[i][j]);
        }
     
    printf("\n");
}
    return 0;
}





hnn 
(4) sum of two matrix A&B
#include <stdio.h>

int main()
{
int arr[2][2]={1,2,3,4};
int brr[2][2]={5,6,7,8};
printf("\n");
 int result [2][2]; 
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        result[i][j]=arr[i][j]+brr[i][j];
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++ ){
        printf("%d ",result[i][j]);
    }
    printf("\n");
}
    return 0;
}


(5) total sum of elements 

 # include <stdio.h>

int main()
{
 int r;
 printf("Enter the no  of rows");
 scanf("%d",&r);
int c;
 printf("Enter the no  of column");
 scanf("%d",&c);
 printf("Enter no.of   all element ");
 int arr[r][c];
 for (int i=0;i<r;i++){
     for(int j=0;j<c;j++){
         scanf("%d",&arr[i][j]);
     }
     printf("\n");
 }
 for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
         printf("%d",arr[i][j]);
         
     }
 }
 int  sum=0;
 for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
         sum+=arr[i][j];
         
     }
     printf(" the total sum of matrix elements  is %d ",sum);
 }
    return 0;
}

(5) 
1 2 3 
2 3 4
4 5 6 
= 30



(6)maxino.




(7) transpose of matrix

#include <stdio.h>

int main()

{ int r;
    printf("Enter the row");
scanf("%d",&r);
int c;
    printf("Enter the column");
scanf("%d",&c);
printf("Enter all the elements ");
int arr[r][c];
for( int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
}
for( int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        printf("%d ",arr[j][i]);
    }
    printf("\n");
    
}
    return 0;
}





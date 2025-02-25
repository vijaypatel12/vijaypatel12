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
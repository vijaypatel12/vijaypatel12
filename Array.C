a(1)

#include <stdio.h>

int main()
{ int rollno[5];
int i;

    printf(" Enter the value in array");
for (i=0; i<=4;i++){
    scanf("%d",&rollno[i]);
    
}
for(i=0;i<=4;i++){
    printf("%d\n",rollno[i]);
}
return 0;
}





(2)sum of two values 
#include <stdio.h>

int main()
{
  int a[4]={10,20,30,40};
  int b[4]={23,34,56,89};
  int sum[4];
  for(int i=0;i<=3;i++){
      sum[i]=a[i]+b[i];
  }
 for(int i=0;i<=3;i++){
     printf("\nsum of two array%d",sum[i]);
 }
    return 0;
}


(3) sum of two array &reverse value


#include <stdio.h>

int main()
{
    int a[3];
  int b[3];
  int sum[3];
  for(int i=0;i<=2;i++){
      scanf("%d",&a[i]);
      }
      printf("\n");
  for(int i=0;i<=2;i++){
      scanf("%d",&b[i]);
  }
      printf("\n");
  for(int i=0;i<=2;i++){
    sum[i]=a[i]+b[i];
}
for(int i=0;i<=2;i++){
    printf("\nsum of two array %d",sum[i]);
    }
for(int i=2;i>=0;i--){
    printf("\nreverse of two array %d",sum[i]);
}return 0;
}



[4] all value sum 

#include <stdio.h>

int main()
{
    int arr [5] = {1,2,3,4,5 };
    int sum= 0;
    for(int i=0;i<=4;i++){
        sum= sum+arr[i];
    }
    printf("%d",sum);
    

    return 0;
}


[5]find the maximum no.

#include <stdio.h>

int main()
{
    int arr[7]={99,20,90,40,88,60,};
    int max=-1;
    for(int i=0;i<=7;i++){
        if(max<arr[i]){
        max=arr[i];}
    } printf("%d",max);
    return 0;
}




[6]

#include <stdio.h>

int main()
{ int arr [7] = {1,2,3,4,5,6,7};
for(int i=0;i<=6;i++){
    if(i%2!=0) arr[i]*=2;
        else arr[i]+=10;
    
} 
for(int i=0;i<=6;i++){
    printf("%d ",arr[i]);
}
    return 0;
}



(7) elements greater than of x
#include <stdio.h>

int main()
{
   int arr[7];
   int x=4;
   int count=0;
   int i;
   for(int i=0;i<=6;i++){
       printf("Enter number of array %d:",i+1);
       scanf("%d",&arr[i]);
   if(arr[i]>x){
       count ++;
   }
   }
   
 printf("%d",count);
    return 0;
}


(8) print diff. even indexed &odd indexed find


#include <stdio.h>

int main()
{
 int arr[7] = {1,2,3,4,5,6,7};
 int sumeven=0;
int sumodd=0;
for(int i=0;i<=6;i++){
    if(i%2==0){
        sumeven += arr[i];
    }
    else sumodd += arr[i];
}
printf ("%d", sumeven-sumodd);
    return 0;
}





(9)  the total no. of pairs 
#include <stdio.h>

int main(){
    
int arr[8]= {1,2,3,4,5,6,7,8};
int totalpair =0;
int x=12;
for(int i=0;i<=7;i++){
    for( int j=i+1;j<=7;j++){
        if(arr[i]+arr[j]==x){
            totalpair ++;
            printf("(%d,%d)\n",arr[i],arr[j]);
        }
    }
} printf("%d",totalpair);

    return 0;
}



(10)find the sum of totaltriplet value any no. plus
#include <stdio.h>

int main(){
    
int arr[8]= {1,2,3,4,5,6,7,8};
int totaltriplet=0;
int x=12;
for(int i=0;i<=7;i++){
    for( int j=i+1;j<=7;j++){
        for(int k=j+1;k<=7;k++){
            if(arr[i]+arr[j]+arr[k]==x){
            totaltriplet ++;
            printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
        }
        }
    }
} printf("%d",totaltriplet);

    return 0;
}


(11) duplicate no.& same no. find
#include <stdio.h>

int main()
{
 int arr[7]={1,2,3,7,5,6,7};
 for  (int i=0;i<=6;i++){
     for(int j=i+1;j<=6;j++){
         if( arr[i]==arr[j]){
             printf("%d is the duplicate element",arr[i]);
            break; 
         }
     }
 }

    return 0;
}

(12)


#include <stdio.h>

int main()
{
   int arr[7]= {1,2,3,4,5,6,7}; 
   int x=5;
   for(int i=0;i<=6;i++){
       if(arr[i]==x){
           printf("%d is present in the array & its index is %d" ,x,i);
       }
   }

    return 0;
}



(13)

#include <stdio.h>
#include <limits.h>
int main()
{
int arr[7]={1,2,3,4,5,6,7};
int max = INT_MIN;
int smax=INT_MIN;
for(int i=0;i<=6;i++){
    if(max<arr[i]){
        smax=max;
        max=arr[i];
    }
    else if(smax<arr[i]){
        smax=arr[i];
    }
    
} printf("%d",smax);
    return 0;
}


(14)searching no.
#include <stdio.h>

int main()
{
    int arr[7]={20,34,53,63,94,64 ,88};
    int x=94;
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            printf("%d is present in the array and its index %d",x,i);
        }
    }
    return 0;
}

(15) duplicate no. find

#include <stdio.h>

int main()
{
    int arr [7]={1,2,3,7,5,6,7}; 
    for(int i=0;i<=6;i++){
        for(int j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){
                printf("%d is duplicate number ",arr[i]);
                break;
            }
            printf("\n");
        }
    }

    return 0;


}


(16) unique no.

#include <stdio.h>
#include<stdbool.h>
int main()
{
    int arr [7]={1,2,3,4,1,2,3};
    for(int i=0;i<=6;i++){
        bool flag= false;
        for(int j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){
                flag=true;
                 }
     }
            if(flag==false){
                printf("%d",arr[i]);
                break;
            }
    }

    return 0;
}

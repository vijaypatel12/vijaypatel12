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


#include <stdio.h>

int main()
{
 struct Pokemon {
     int attack;
     int hp;
     int speed;
     char tier;
 };
 struct Pokemon pikachu;
 
 pikachu.speed=50;
 pikachu.hp=70;
 pikachu.attack=90;
 pikachu.tier=10;
  
  
  struct Pokemon charizard;
  charizard.attack=44;
  charizard.hp=66;
  charizard.speed=88;
  charizard.tier=99;
  
  struct Pokemon mewtwo;
  mewtwo.hp=10;
  mewtwo.speed=20;
  mewtwo.attack=30;
  mewtwo.tier=40;
  
  printf("%d",pikachu.attack);

    return 0;
}




(2)
  
#include <stdio.h>

int main()
{
   typedef struct pokemon{
       int hp;
       int attack;
       int speed;
       char tier;
   }pokemon;
   
   pokemon arr[3];
   arr[0].attack=10;
   arr[0].speed=20;
   arr[0].hp=30;
   arr[0].tier='A';

 
   arr[1].attack=190;
   arr[1].speed=201;
   arr[1].hp=310;
   arr[1].tier='B';
   
 
   arr[2].attack=110;
   arr[2].speed=120;
   arr[2].hp=130;
   arr[2].tier='C';

   for(int i=0;i<3;i++){
        printf("%d\n",arr[i].attack);
        printf("%d\n",arr[i].hp);
        printf("%d\n",arr[i].speed);
        printf("%c",arr[i].tier);
        
   }
    return 0;
}


(1) output of this

#include <stdio.h>

int main()
{
    struct pokemon {
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    printf("enter attack of pikachu:");
    scanf("%d",&pikachu.attack);
   // pikachu.attack=60;
    pikachu.speed=68;
    pikachu.hp=34;
    pikachu.tier='A';


    struct pokemon chirazard;
    chirazard.attack=56;
    chirazard.speed=58;
    chirazard.hp=89;
    chirazard.tier='B';


    struct pokemon mewtwo;
    mewtwo.attack=69;
    mewtwo.hp=39;
    mewtwo.speed=79;
    mewtwo.tier=97;


     printf("%d",pikachu.attack);
    return 0;
}
(2) book detail

#include <stdio.h>
#include<string.h>

int main()
{
    struct book{
     char name[50];
     float price ;
     int nofpage;
    } math,pyh,chem;

    math.nofpage=67;
    math.price=78;
    strcpy(math.name,"mathmatics");

     pyh.nofpage=64;
    pyh.price=98;
    strcpy(pyh.name,"physics");

    chem.nofpage=47;
    chem.price=93;
    strcpy(chem.name,"chemistry");

   printf("%d\n",math.nofpage);
   printf("%f\n",math.price);
   printf("%s\n",math.name);

   printf("%d\n",pyh.nofpage);
   printf("%f\n",pyh.price);
   printf("%s\n",pyh.name);

   printf("%d\n",chem.nofpage);
   printf("%f\n",chem.price);
   printf("%s",chem.name);



    return 0;
}

(3) person detail

#include <stdio.h>
#include<string.h>

int main()
{
    struct person{
     char name[50];
     int salary;
     int age;
    } a,b,c;

    a.salary=4000;
    a.age=18;
    strcpy(a.name,"Aadarsh");

    b.salary=8000;
    b.age=32;
    strcpy(b.name,"vijay");

   printf("%s\n",a.name);
   printf("%d\n",b.age);

    return 0;
}

(4) typedef pointer
#include <stdio.h>
typedef int* pointer;
int main()
{
    int x=5,y=9;
    pointer a=&x,b=&y;
    printf("%p\n",&a);
    printf("%p\n",&b);

    return 0;
}

(5) array of structure 

#include <stdio.h>
#include<string.h>

int main()
{
    typedef  struct pokemon {
        char name[15];
        int hp;
        int speed;
        int attack;
        char tier;
    } pokemon;
     pokemon arr[3];
     arr[0].hp=56;
     arr[0].speed=78;
     arr[0].attack=70;
     arr[0].tier='A';
     strcpy(arr[0].name,"charizard");

     arr[1].hp=46;
     arr[1].speed=68;
     arr[1].attack=90;
     arr[1].tier='B';
     strcpy(arr[1].name,"pikachu");

     arr[2].hp=46;
     arr[2].speed=68;
     arr[2].attack=90;
     arr[2].tier='B';
     strcpy(arr[2].name,"Mewtwo");

     for(int i=0;i<3;i++){
         printf("%s\n",arr[i].name);
         printf("%d\n",arr[i].speed);
         printf("%d\n",arr[i].hp);
         printf("%c\n",arr[i].tier);
         printf("%d\n",arr[i].attack);
     }
    return 0;
}
(6) array of structure cricter 3 detail

#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct cricketer{
        char firstname[15];
        char lastname[15];
        int age;
        int nofmatch;
        float average;
    } cricketer;

    cricketer arr[3];
    for(int i=0;i<3;i++){
        printf("enter  the firstName:");
        scanf("%s",arr[i].firstname);
         printf("enter  the lastName:");
        scanf("%s",arr[i].lastname);
        printf("enter the age:");
        scanf("%d",&arr[i].age);
        printf("enter the nofmatch:");
        scanf("%d",&arr[i].nofmatch);
        printf("enter the average:");
        scanf("%f",&arr[i].average);
    }
        for(int i=0;i<3;i++){
        printf(" Name:%s %s\n",arr[i].firstname,arr[i].lastname);
        printf("Age:%d\n",arr[i].age);
        printf("nofmatch:%d\n",arr[i].nofmatch);
        printf("Avarege:%f\n",arr[i].average);
    }

    return 0;
}
(7) compare the a to b

#include <stdio.h>
#include <stdbool.h>

int main()
{
    typedef struct date{
        int day;
        int month;
        int year;
    } date;

    date a,b;
    a.day=3;
    a.month=11;
    a.year=2023;

    b.day=3;
    b.month=11;
    b.year=2023;

    bool flag=true;
    if(a.day!=b.day) flag=false;
    if(a.month!=b.month) flag=false;
    if(a.year!=a.year) flag=false;

    if(flag ==true) printf("date are same");
    else 
    printf("date are different ");



    return 0;
}
(8) structure variable can be  passesd to  a funtion
#include<stdio.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;

} pokemon ;
void change(pokemon p){
    p.attack=70;
    p.speed=80;
    p.hp=45;
    return;
}
int main(){
    pokemon pikachu;
    pikachu.attack=50;
    pikachu.speed=70;
    pikachu.hp=50;
    change(pikachu);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
     printf("%d\n",pikachu.hp);
     return 0;
}
(8) student department same or  not
 #include<stdio.h>
#include<string.h>
 typedef struct student{
     int rollno;
     char name [20];
     char department[20];
     char coruse[20];
     int yearofjoining;
 } student;
 void check(student s1,student s2){
     if(strcmp(s1.department,s2.department)==0){
         printf("both are same department%s\n",s1.department);
     }
     else{
         printf("both are different department\n");

     }
 }
 int main(){

      student s1,s2;
     printf("enter  first student roll no:");
     scanf("%d",&s1.rollno);
     printf("enter student name:");
     scanf("%s",s1.name);
      printf("enter student dapart:");
     scanf("%s",s1.department);
      printf("enter student course:");
     scanf("%s",s1.coruse);
     printf("enter student yearofjoining:");
     scanf("%d",&s1.yearofjoining);

      printf("enter  second student roll no:");
     scanf("%d",&s2.rollno);
     printf("enter student name:");
     scanf("%s",s2.name);
      printf("enter student dapart:");
     scanf("%s",s2.department);
      printf("enter student course:");
     scanf("%s",s2.coruse);
     printf("enter student yearofjoining:");
     scanf("%d",&s2.yearofjoining);

     check(s1,s2);

     return 0;
 }

(9) pointer of structure 

#include <stdio.h>
#include<string.h>
 typedef struct pokemon{
     int hp;
     int attack;
     char tier;
     int speed;
     char name[15];
 } pokemon;
int main()
{
    pokemon pikachu;
    pikachu.hp=24;
    pikachu.speed=45;
    pikachu.attack=78;
    pikachu.tier='A';
    strcpy(pikachu.name,"pikachu");

     pokemon* x=&pikachu;
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.tier);
    printf("%p\n",pikachu.name);
    printf("%p",x);
    return 0;
}
(10) change funtion on structure
#include <stdio.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon ;
void change(pokemon* p){
    (*p).hp=50;
    (*p).speed=60;
    (*p).attack=35;
    (*p).tier='A';
    strcpy((*p).name,"charizard");
    return;
}
int main()
{
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.speed=70;
    pikachu.attack=40;
    pikachu.tier='B';
    strcpy(pikachu.name,"pikachu");

    printf("%d\n",pikachu.hp); 
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    change(&pikachu);

    printf("%d\n",pikachu.hp); 
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    return 0;
}

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

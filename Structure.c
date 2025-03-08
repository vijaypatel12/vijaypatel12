
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

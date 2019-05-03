#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include<windows.h>
int main(int argc, char const *argv[]) {
 system ("color fc");
  int a,value;
  long int xx;
  while(1){

  z:
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY|BACKGROUND_RED);
  printf("--------------------Tas kagit makas-------------------\n" );
  printf("Tas icin 1\n");
  printf("Kagit icin 2\n");
  printf("Makas icin 3\n");
  printf("Kapatmak icin 4\n");
  printf("\n");

  printf("Seciminiz: ");



  scanf("%d",&value);
  if(value==4){
    return 0;
  }
  printf("\n\n");

  if(value>5){
    goto z;
  }
  srand(time(NULL));
  a = 1+rand()% 3;

  printf("Bot seciyor ..\n" );
  for (  xx = 0; xx < 300055500; xx++);


  //PART OF RANDOM
  if(a==1)
    printf("Bot tas secti\n");
  else if (a==2)
    printf("Bot kagit secti \n");
  else
    printf("Bot makas secti \n");

    printf("\n");


  // PART OF COMPARE
  if(value==a){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY);
    printf("Berabere ! \n");
  }
  else if ( (value==1 && a==3) || (value==2 && a== 1) || (value==3 && a==2) ){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN);
    printf("Kazandin!");
  }
  else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_RED);
    printf("Kaybettin!\n");
  }
  printf("\n\n\n" );
}
    return 0;
}

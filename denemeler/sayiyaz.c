//sayi yaz.c
//27.09.2009
#include <stdio.h>
 int main(){

int sayi=0;
int index=0;
 printf("bir sayi giriniz:");
 scanf("%d",&sayi);
 getchar();
  do{
                  index++;
                  printf("%d",index);
                  }while(index< sayi);
                system("PAUSE");
                  return 0;
  }

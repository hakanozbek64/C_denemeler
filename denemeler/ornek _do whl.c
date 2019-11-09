//sayi yaz.c
//27.09.2009
#include <stdio.h>
 int main(){


int sayi=0;
int index=0;
 printf("bir sayi giriniz:");
 scanf("%d",sayi);
  do{
                  index++;
                  printf("%d",index);
                  getchar();
                  
                  }while(index<sayi);
                
                  return 0; 
                  
  }

//merhaba.c
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i=0;
    int dizi[10];
     for(i=0;i<10;i++){
         dizi[i] =i*i;    
         }         
 i=0;
  while(i<10){
         printf("dizi[%d]:%d\n",i,dizi[i]);
         i++;
         getchar();
                 }
       return 0;          
                }


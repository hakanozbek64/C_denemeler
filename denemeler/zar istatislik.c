//merhaba.c
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int zar=0;
    int i=0;
    int zarkacdefa[7]={0,0,0,0,0,0,0};    
         srand(time (NULL));
         
         for (i=0;i<1000;i++){
         zar=rand()% 6+1;
         zarkacdefa[zar]++;
                 }
                 printf("zar\tkac defa\n\n");
                 getchar();
                                 
                 for (i=1;i<7;i++){
                 printf("%d\t",i);
                 printf("%d\n",zarkacdefa[i]);
                 getchar();
                 }
               return 0;          
                }


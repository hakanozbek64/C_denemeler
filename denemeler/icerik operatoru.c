//icerik operatoru.c

#include<stdio.h>
int main(){
    int a=14;
    int*b;
    
    b=&a;
    
    printf("a nin degeri:%d\n",a);
    *b=99;
    getchar();
     printf("a nin degeri:%d\n",a);
     getchar();
     
     return 0;
     }

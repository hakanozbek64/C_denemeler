//gostriciler.c
#include<stdio.h>
int main(){
    char c='e';
    char *g=&c;
    
    printf("c degikenin adresi:%x\n",&c);
    getchar();
    printf("c degikenin adresi:%x\n",g);
    getchar();
    return 0;
}

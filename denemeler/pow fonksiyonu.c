//powfonksiyonu.c

#include<stdio.h>
#include<math.h>

int main(){
    int i=0;
    double toplam=0;
    double aktifeleman=0;
    
    printf("serinin ilk 25 elemaninin toplami:\n\n");
    for (i=1;i<=25;i++){
        
        aktifeleman=1 /(pow(2,i));
        toplam +=aktifeleman;
        
        }
        printf("%f",toplam);
        getchar();
        return 0;
        
        }

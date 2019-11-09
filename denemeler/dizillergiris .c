//diziller giris.c
//29.09.2009

#include <stdio.h>

int main() {
    int toplam =0;
    int notlar[5];
     
     notlar[0]=7;
     notlar[1]=9;
     notlar[2]=13;
     notlar[3]=122;
     notlar[4]=98;
     
     printf("0.indeks degeri:%d\n", notlar[0]);
     printf("1.indeks degeri:%d\n", notlar[1]);
     printf("2.indeks degeri:%d\n", notlar[2]);
     printf("3.indeks degeri:%d\n", notlar[3]);
     printf("4.indeks degeri:%d\n", notlar[4]);

getchar();

     
       toplam =notlar[0]+notlar[2];
     
       
       printf("\ntoplam:%d\n",toplam);
 return 0;
       }
     

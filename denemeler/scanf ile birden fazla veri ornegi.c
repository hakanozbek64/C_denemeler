//scanfbirden fazla veriyi  okumak
//19.09.2009

#include <stdio.h>

int main(){

int sayi1, sayi2, sayi3;

printf("lutfen 3 tam sayiyi giriniz:");
scanf("%1f%1f&1f",&sayi1,&sayi2,&sayi3);
printf("\n bugun %f m yuzdum, %f km kostum ve %f m kurek cektim !",sayi1,sayi2,sayi3);

getchar(); 

return 0;
}

//faktoriyel.c

#include <stdio.h>

int main() {
int i=1;
int sayi;
double faktoriyel=1;

printf("faktoriyeli bulunacak sayiyi giriniz:");
scanf("%d",&sayi);
getchar();

for(i=sayi; i>1; i--){
    faktoriyel=faktoriyel*i;
}
printf("%d!=%f",sayi, faktoriyel);
getchar();
return 0;
}

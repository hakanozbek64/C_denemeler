//isalnumfonksiyonu.c
#include <stdio.h>
#include<ctype.h>

int main(){
    int sayi=0;
printf("0..255 araliginda bir sayi giriniz:");
scanf("%d",&sayi);
printf("\n\ngirdiginiz karekter:%c\n",sayi);
getchar();
if (isalnum(sayi)){
      printf("bu karekter A...Z,a..z veya 0..9karekterlerinden birisidir!");
      getchar();
                   }else{
      printf("bu karekter A...Z,a..z veya 0..9karekterlerinden biri degildir!");      
      }
      getchar();
      return 0;
      }             

//if else kulanýmý 02.c

#include <stdio.h> 
int main() {
 double sayi=0.0;
 
  printf("bir sayi girniz: ");
  scanf("%1f",&sayi);
  
 
 if (sayi>0){
  printf("girdiginiz sayi : %f\n",sayi);
  printf("bu sayi pozitiftir!\n"); 
  
}else  {

printf("girdiginiz sayi : %f\n",sayi);
printf("bu sayi negetiftir!\n");
}

 system("PAUSE");
 return 0;
}

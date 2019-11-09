// iki sayiyi karsilastir.c
//23.09.2009


#include <studio.h>
int main (){
    int sayi1=0;
    int sayi2=0;
    
    printf("iki sayi giriniz:");
    
    scanf("%d%d",&sayi1,sayi2);
    
    if (sayi1>sayi2){
    printf("ilk sayi daha buyuktur!\n");
}else{
      if(sayi2>sayi1)
      printf("ikinci sayi daha buyýktur!\n");
      else
      printf("girdiginiz sayi esittir!\n");
      }
      return 0;
      system("PAUSE");
      }

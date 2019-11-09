    
//dongulerled?kd?rtgenonksiyonu.c
#include <stdio.h>
#include <conio.h> 
void dikdortgenciz(int enuzunluk ,int boyuzunluk){
     char karakter=0;
     int i=0;
     int j=0;
     
     karakter=218;
     printf ("%c",karakter);

     karakter=196;
     for (i=0;i<enuzunluk;i++){
      printf ("%c",karakter);

      }
      
      karakter=191;
     printf ("%c\n",karakter);

     for (i=0;i<boyuzunluk;i++){
         karakter=179;
     printf ("%c",karakter);
 
     karakter =32;
     for (j=0;j<boyuzunluk;j++){
     printf("%c",karakter);
     }
     karakter=179; 
     printf("%c\n",karakter);
     }
     karakter=192;
     printf("%c",karakter);

     karakter=196;
     for (i=0;i<enuzunluk;i++){
      printf ("%c",karakter);
    
      }
      karakter=217;
      printf("%c\n",karakter); 
   
      }
      int main(){
          int enuzunluk=0;
          int boyuzunluk=0;
          
          printf("en ve boy uzunlugunu giriniz:");

          scanf("%d%d",&enuzunluk,&boyuzunluk);
          printf("\n\n");
 
          dikdortgenciz(enuzunluk,boyuzunluk);
getch();
          return 0;
          }
          
      

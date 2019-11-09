
//diziller giris.c
//29.09.2009

 #include <stdio.h> 

 int main() {
    double ortalama =0;
    double sayilar[3];
    
      printf("3 sayi giriniz :");
     scanf("%1f%1f%1f",&sayilar[0],&sayilar[1],&sayilar[2]);
     getchar();
    ortalama=(sayilar[0]+ sayilar[1]+ sayilar[2])/3;
     printf("ortalama: %f\n", ortalama);
      getchar();
      return 0;     
 }
     

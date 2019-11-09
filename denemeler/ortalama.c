// ortalama hesap .c
//24.09.2009
#include <stdio.h>
 int main (){
     int notsayisi=0;
     int aktifnot =0;
     float toplam=0;
     float ortalama=0;
     
      yeninotgir:
           printf("%d.notu giriniz: ",notsayisi+1);
           scanf("%d",&aktifnot);
            getchar();
           if (aktifnot==-1){
                     ortalama = toplam/notsayisi;
                     printf("\n%d notun ortalamasi:%f",notsayisi,ortalama);
                     getchar();
                     return 0;
                     }
                     notsayisi++;
                     toplam+=aktifnot;
                    goto yeninotgir;
                    return 0;
                    }
     

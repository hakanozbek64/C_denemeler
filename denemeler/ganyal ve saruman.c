// ganyal ve saruman.c

#include < stdio.h>
#include < stdlib.h>
#include < time.h>
  void enerjileriyazdir();
  void ganyalfsaldir();
  void sarumansaldir();
  
  
  int oran =0;
  int buyuno=0;
  
  int sarumanenerji=100;
  int sarumanoranlar[3]={45,40,15};
  int sarumanbuyuler[3]={5,7,13};
   
   
  int ganyalfenerji=100;
  int ganyalforanlar[3]={45,20,35};
  int ganyalfbuyuler[3]={3,9,10};
   
   void enerjileriyazdir(){
   printf("ganyalf:%d saruman:%d",ganyalfenerji,sarumanenerji);
}
void ganyalfsaldir(){
     
     oran=rand()%100+1;
     if (oran<=ganyalforanlar[0]){
        printf("ganyalf\"su\"buyusu yapti!\n");
        buyuno= 0;
     } else 
     if (oran>ganyalforanlar[0] &&
  oran<=ganyalforanlar[0]+ganyalforanlar[1]){
  printf("ganyalf\"toprak\"buyusu yapti!\n");
   buyuno= 1;
    }
     else {
  printf("ganyalf\"iyi ruh \"buyusu yapti!\n");
   buyuno= 2;
    }
sarumanenerji-=ganyalfbuyuler[buyuno];
  enerjileriyazdir();
}
void sarumansaldir(){
        oran=rand()%100 +1;
     if (oran<=sarumanoranlar[0]){
     printf("saruman\"isik\"buyusu yapti!\n");
     buyuno=0;
     }
     else 
     if (oran>sarumanoranlar[0]&&
  oran<=ganyalforanlar[0]+ganyalforanlar[1]){
  printf("saruman\"ates\"buyusu yapti!\n");
  buyuno=1;
    } else {
  printf("saruman\"kotu ruh\"buyusu yapti!\n");
   buyuno=2;
    }
  ganyalfenerji-=ganyalfbuyuler[buyuno];
  enerjileriyazdir();
  
  int main() {
  
  srand(time(NULL));
    printf("mucadele basliyor!!\n\n");
               do{
                   ganyalfsaldir();
                   printf("\n\n");
                  sarumansaldir();
                   printf("\n\n");
                   }while (ganyalfenerji>0 && sarumanenerji>0);
                   
                   printf("\n \nmucadele bitti!\n\n");
                   enerjileriyazdir();
                   printf("\nsonuc:");
                   
                   if (ganyalfenerji<=0 && sarumanenerji<=0){
                   printf("berabere");
                   
                   )else {
                         if(ganyalfenerji>0){
                   printf("ganyalfkazandi!yasasin iyiler");
                   )else {
                         printf("saruman kazandi! yasasin kotuler!");
                         }
                         }
                         return 0;
                         }
                         
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

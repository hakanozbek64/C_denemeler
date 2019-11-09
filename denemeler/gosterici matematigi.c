//gosterýci matemetigi.c

#include<stdio.h>
 int main(){
     
     char c='e';
     int i=99;
     double d=0.44;
     
     char *cpt=&c;
     int *ipt=&i;
     double *dpt=&d;
     
     printf("ilkadresler:\n\n");
     printf("c nin ilk adresi:%x\tdegeri:%c\n",cpt,*cpt);
     printf("i nin ilk adresi:%x\tdegeri:%d\n",ipt,*ipt);
     printf("d nin ilk adresi:%x\tdegeri:%f\n",dpt,*dpt);
     getchar();
      cpt++;
      ipt+=3;
      dpt-=5;
      
      printf("degisliklikten sonraki adres:\n\n");
      getchar();
      
      printf("c nin sonraki adresi :%x\tdegeri: %c\n",cpt,*cpt);
      getchar();
      printf("i nin sonraki adresi :%x\tdegeri: %d\n",ipt,*ipt);
      getchar();
      printf("d nin sonraki adresi :%x\tdegeri: %f\n",dpt,*dpt);
      
      getchar();
      return 0;
      }

#include<stdio.h>
int main(){
  double  a=14.4;
  
  double*g01=&a;
  double *g02=&a;
  
  printf("g01:%f\n",*go1);
  printf("g02:%f\n\n",*go2);
  getchar();
  
  *g02=31.212;
  printf("g02:%f\n",*g02);
  getychar();
  return 0;
}

// adres operatoru.c
 #include<stdio.h>
 int main(){
     
     int a=25;
     double b=4.5;
     char c='g';
     
     printf ("a degikenini icerigi:%d\n",a);
     printf ("a degikenini icerigi:%f\n",b);
     printf ("a degikenini icerigi:%c\n\n",c);
     getchar();
     
     printf("a degikeninin bellekteli adresi:%x\n",&a);
     printf("a degikeninin bellekteli adresi:%x\n",&b);
     printf("a degikeninin bellekteli adresi:%x\n\n",&c);
     getchar();
     return 0;
     }

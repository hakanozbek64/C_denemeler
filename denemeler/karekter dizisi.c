
//karekter dizisi.c

 #include <stdio.h> 
 int main() {
     
 int i=0;
 char karekterler[256];
  getchar();
 for(i=0;i<256;i++);{
 karekterler[i]=i;
}
 for(i=0;i<256;i++)  {
 printf("%c",karekterler[i]);
 getchar();
 if (i % 20== 0) printf("\n");
  system("PAUSE");
}
return 0;
}
















//sqrt fonksiyonu.c

#include<stdio.h>
#include<math.h>

int main(){
    int i=0;
    
    printf("1...100 arasi sayilarin karekoku:\n\n");
for (i=1;i<=100;i++){
    printf("karakok%d:%f\n ",i,sqrt(i));
    getchar();
}
return 0;
}

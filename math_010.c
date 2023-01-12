#include<stdio.h>//攝氏溫度轉華氏溫度

int main(){
    double a;
    scanf("%lf",&a);
    a = a*9/5. + 32;
    printf("%.1f\n",a);
    return 0;
}
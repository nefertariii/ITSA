#include<stdio.h>//計算梯形面積

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    double tot = (a+b)*c/2.;
    printf("Trapezoid area:%.1f\n", tot);
    return 0;
}
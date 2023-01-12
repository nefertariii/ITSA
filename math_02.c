#include<stdio.h>//計算三角形面積

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    double tot = a*b/2.;
    printf("%.1f\n",tot);
    return 0;
}
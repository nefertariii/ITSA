#include<stdio.h>//判斷座標是否在正方形的範圍內

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if(a<=100 && b<=100)
        printf("inside\n");
    else
        printf("outside\n");
    return 0;
}
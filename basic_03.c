#include<stdio.h>//判斷座標是否在圓形範圍內
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int temp = a * a + b * b;
    if(temp <=10000)
        printf("inside\n");
    else
        printf("outside\n");
    return 0;
}
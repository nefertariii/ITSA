#include<stdio.h>//購票計算

int main(){
    int a;
    scanf("%d",&a);
    //if(a>10){
        printf("NT10=%d\n", a / 10);
    //}
    //if(a%10>5){
        printf("NT5=%d\n", a%10/5);
    //}
    //if(a%10%5){
        printf("NT1=%d\n", a % 10 % 5);
    //}
    return 0;
}

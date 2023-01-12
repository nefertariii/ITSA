#include<stdio.h>//計算兩樹間所有整數的總和

int main(){
    int a,b,tot = 0;
    scanf("%d %d",&a,&b);
    for(int i = a;i <=b;i++){
        tot += i;
    }
    printf("%d\n",tot);
    return 0;
}
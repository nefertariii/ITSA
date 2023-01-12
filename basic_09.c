#include<stdio.h>//計算正整數被3整除之數值之總和

int main(){
    int a,count = 0;
    scanf("%d",&a);
    for (int i = 1; i <= a;i++){
        if(i%3 == 0){
            count += i;
        }
    }
    printf("%d\n", count);
}
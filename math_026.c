#include<stdio.h>//1*12*2N*N之結果

int main(){
    int a;
    scanf("%d",&a);
    for(int i = 1;i <=a;i++){
        printf("%d*%d=%d\n", i, i, i * i);
    }
    return 0;
}
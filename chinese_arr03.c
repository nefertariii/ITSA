#include<stdio.h>//陣列所有元素立方和

int main(){
    int a[6];
    int tot = 0;
    scanf("%d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);
    for(int i = 0;i < 6;i++){
    int temp = a[i]*a[i];
    temp *=a[i];
    tot += temp;
    }
    printf("%d\n",tot);
    return 0;
}
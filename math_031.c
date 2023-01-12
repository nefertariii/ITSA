#include<stdio.h>//計算1到N能被2 3 整除 不能被12整除的所有數總和

int main(){
    int a,count = 0;
    scanf("%d",&a);
    for(int i = 1;i <=a;i++){
        if(i%2==0 && i%3==0 && i%12!=0){
            count += i;
        }
    }
    printf("%d\n",count);
    return 0;
}
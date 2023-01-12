#include<stdio.h>//計算1到N之間屬於5和7的倍數

int main(){
    int a,aa[100];
    int num = 0;
    scanf("%d", &a);
    for(int i = 1;i <=a;i++){
        if(i%5 == 0 && i %7==0){
            aa[num] = i;
            num++;
        }
    }
    for (int i = 0;i < num;i++){
        if(i != num-1)
            printf("%d ", aa[i]);
        else
            printf("%d", aa[i]);
    }
        return 0;
}

#include<stdio.h>//最大質數問題

int main(){
    int a,count = 0,max;
    scanf("%d",&a);
    for (int i = 1;i < a;i++){
        count = 0;
        for (int j = 1; j <= i;j++){
            if(i%j == 0){
                count++;
            }
        }
        if(count == 2)
            max = i;
    }
    printf("%d\n", max);
    return 0;
}
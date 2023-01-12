#include<stdio.h>//計算i次方的值

int main(){
    int a,tot = 1;
    scanf("%d",&a);
    if(a>31){
        printf("Value of more than 31\n");
    }
    else{
        for(int i = 1;i <=a;i++){
            tot *= 2;
        }
        printf("%d\n", tot);
    }
    return 0;
}
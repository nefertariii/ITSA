#include<stdio.h>//標準體重計算

int main(){
    int a,b;
    double result;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(b == 1){
            result = (a - 80) * 0.7;
        }
        else
            result = (a - 70) * 0.6;
        printf("%.1f\n", result);
    }
    return 0;
}

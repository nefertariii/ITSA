#include<stdio.h>//最大值與最小值

int main(){
    double a[10];
    for(int i = 0;i < 10;i++){
        scanf("%lf", &a[i]);
    }

    for(int i = 0;i < 10;i++){
        for (int j = 0; j < i;j++){
            if(a[i]<a[j]){
                double temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("maximum:%.2f\nminimum:%.2f\n", a[9], a[0]);
    return 0;
}
#include<stdio.h>//平、閏年判定

int main(){
    int a;
    scanf("%d",&a);
    if(a%400 == 0){
        printf("Bissextile Year\n");
    }
    else if(a%4 == 0 && a%100 == 0){
        printf("Common Year\n");
    }
    else
        printf("Common Year\n");
    return 0;
}
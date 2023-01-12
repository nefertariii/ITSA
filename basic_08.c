#include<stdio.h>//質數判別

int main(){
    int a,count = 0;
    scanf("%d",&a);
    for(int i = 1; i <= a;i++){
        if(a%i == 0)
            count++;
    }
    if(count == 2){
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}
#include<stdio.h>//季節判定

int main(){
    int a;
    scanf("%d",&a);
    if(a == 1 || a == 2 || a == 12)
        printf("Winter\n");
    else if(a == 3 || a == 4 || a == 5)
        printf("Spring\n");
    else if(a == 6 || a == 7 || a == 8)
        printf("Summer\n");
    else if(a == 9 || a == 10 || a == 11)
        printf("Autumn\n");
    return 0;
}
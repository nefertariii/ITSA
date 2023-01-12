#include<stdio.h>//阿姆斯壯數

int main(){
    int a,b,c,d;
    scanf("%d", &a);
    b = (a/100)*(a/100)*(a/100);
    c = (a % 100 / 10) * (a % 100 / 10) * (a % 100 / 10);
    d = (a % 10) * (a % 10) * (a % 10);
    //printf("%d %d %d\n", b, c,d);
    if(a == b+c+d)
        printf("YES");
    else
        printf("NO");
    return 0;
}

#include<stdio.h>//兩數總和

int main(){
    int a,b,tot;
    while(scanf("%d %d",&a,&b)!=EOF){
        tot = a + b;
        printf("%d\n", tot);
    }
    return 0;
}
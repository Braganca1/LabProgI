#include <stdio.h>

int main(){
    int a=1,b=1,n,c=1;
    printf("Fibonacci: ");
    scanf("%d", &n);
    for (int i=0;i<n-2;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d", c);
}
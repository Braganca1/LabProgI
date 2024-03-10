#include <stdio.h>

int k;

int fib (int n){
    if (n==1 || n==2){
        return 1;
    }
    k= fib(n-1) + fib(n-2);
    return k; 
}

int main(){
    int f;
    printf("Fibonacci: ");
    scanf("%d", &f);
    printf("%d", fib(f));
}
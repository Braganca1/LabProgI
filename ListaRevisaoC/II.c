#include <stdio.h>

int k=2;
int par (int t) {
    if (k<t){
    printf("%d ", k);
    k=k+2;
    par(t);
    }
}

int main () {
    int n;
    scanf("%d", &n);
    par(n);
}
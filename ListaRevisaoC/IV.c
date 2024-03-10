#include <stdio.h>

int main () {
    FILE *ptr = fopen("../arq2.txt", "r");
    int m=0,f=0;
    float n, mm=0,mf=0;
    char s;
    while (feof(ptr)==0){
        s=fgetc(ptr);
        fscanf(ptr, "%f", &n);
        if (s=='M'){
            m+=1;
            mm+=n;
        }
        else if (s=='F'){
            f+=1;
            mf+=n;
        }
    }
    printf("%c", (mm/m>mf/f)? 'M' : 'F');
    printf(" %f", (mm/m>mf/f)? (mm/m) :(mf/f));
}
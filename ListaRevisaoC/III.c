#include <stdio.h>

int main () {
    FILE *ptr=fopen("../arq1.txt","r");
    int par=1, imp=0,s;
    while (feof(ptr)==0){
        fscanf(ptr,"%d",&s);
        if (s%2==0){
            par*=s;
        }
        else{
            imp+=s;
        } 
    } 
    fclose(ptr);
    printf("prod pares: %d \nsomat imp: %d", par, imp);
}
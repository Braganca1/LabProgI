#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);
    int v[n];
    for (int i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-1;j++){
            if (v[j]>v[j+1]){
                int k=v[j];
                v[j]=v[j+1];
                v[j+1]=k;
            }
        }
    }
    for (int i=0;i<n;i++){
        printf("%d ",v[i]);
    }
}
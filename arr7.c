#include<stdio.h>
//WAP in C to print binary of all elemets in array .
// i/p: int a[5]={10,100,1000,100,10}

int main(){

    int a[5]={10,100,1000,100,10};
    int n=sizeof(a)/sizeof(a[0]);
int i,j;
    for(i=0;i<n;i++){
        for(j=31;j>=0;j--){
            printf("%d",a[i]>>j&1);
            if(j%8==0){
                printf(" ");
            }
        }
        printf("\n");
    }



}
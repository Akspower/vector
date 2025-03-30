#include<stdio.h>
//WAP in C to swap 3rd ele with 5th ele in array .
// i/p: int a[6]={11,22,33,44,55,66};
// o/p: 11 22 33 55 44, 66


int main(){

    int a[6]={11,22,33,44,55,66};
int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
if(i==3)
{
    int temp=a[i];
    a[i]=a[i+2];
    a[i+2]=temp;
}
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}

}
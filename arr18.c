#include<stdio.h>

//WAP to C to insert 99 on 0th index in same array .
 //i/p: int a[7]={2,3,5,7,11,13 }, in=0, num=99;
// o/p: int a[7]={99, 2,3,5,7,11,13};

int main(){

    int a[7]={2,3,5,7,11,13 }, in=0, num=99;
int n=sizeof(a)/sizeof(a[1]);

for(int i=n-1;i>=0;i--){
    a[i]=a[i-1];
    

}
a[0]=99;

for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
}
#include<stdio.h>
// WAP in C to delete 0th bit of all array elements.
//  i/p: int a[5]={12,10,35,63,512};
//  o/p: int a[5]={ 6, 5,17,31,256};

int main(){
    int a[5]={12,10,35,63,512};
    int n=sizeof(a)/sizeof(a[0]);
int i;
    for(i = 0 ; i<n ;i++ ){
        a[i]=a[i]/2;
    }

    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }



}
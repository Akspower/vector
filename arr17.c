#include <stdio.h>
// WAP in C to sort 1st 3 element of array .
//  i/p: int a[7]={11,33,22,2,9,1,6};
//  o/p: 11 22 33 2 9 1 6 

int main() {
    int a[7]={11,33,22,2,9,1,6};
    int n=sizeof(a)/sizeof(a[0]);
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
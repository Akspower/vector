#include<stdio.h>

// WAP in C to delete even duplicate ele from array.
//  i/p: a[10]={3,3,2,4,4,2,5,3,4,9}
//  o/p: a[10]={3,3,2,4,5,3,9};



int main(){

    int a[10]={3,3,2,4,4,2,5,3,4,9};

    int n=sizeof(a)/sizeof(a[0]);
int i,j,k;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]%2==0 && a[i]==a[j]){
                for(k=j;k<n-1;k++){
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }


}
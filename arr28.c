#include<stdio.h>
// . WAP in C to delete -ve elements from array .
//  i/p: int a[6]={-11,12,-14,13,-15,-18};
//  o/p: int a[6]={12, 13};
int main(){
    int a[6]={-11,12,-14,13,-15,-18};
int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        if(a[i]<0){
 
            for(int j=i;j<n-1;j++){
                a[j]=a[j+1];
            }
            n--;
            i--;
 
        }
    }
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}



}
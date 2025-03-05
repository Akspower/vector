#include<stdio.h>
// WAP in C to count all set and clear bit array .
//  i/p: int a[5]={10,15,64,100,511};
//  o/p: set count =19 , clear count=141 


int pass(int a){
    int count=0;
    for(int j=31;j>=0;j--){
     
        if(a>>j&1){
            count++;
        }
    }
    return count;
}


int main(){

    int a[5]={10,15,64,100,511};
int i,sum=0,total=0,j;
int n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++){
         sum+=pass(a[i]);
    }

    printf("%d ",sum);





}
#include<stdio.h>

// WAP in C to delete 2nd index element from array
//  i/p: int a[5]={99,88,77,66,55}, pos=2;
//  o/p: int a[5]={99,88,66,55}; 

int main(){
//concept = for delete element shift left from that index/position 
    int a[6]={2,3,5,7,11,13 }, in=3;   
int n=sizeof(a)/sizeof(a[1]);

for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
printf("\n");
for(int i=in;i<n-1;i++){
    a[i]=a[i+1];
    

}
// a[0]=99;

for(int i=0;i<n-1;i++){
    printf("%d ",a[i]);
}
}
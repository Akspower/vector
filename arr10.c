#include<stdio.h>
// WAP in C to store set bit count to another array.
//  i/p: int a[5]={10,15,64,100,511};
//  o/p: int b[5]={2 , 4, 1, 3, 9 };
int pass(int a){
    int count=0;
    for(int i=31;i>=0;i--){
        if(a>>i&1){
            count++;
        }
    }
    return count;
}


int main(){
    int a[5]={10,15,64,100,511};
    int b[5];
int i,j,index=0,sum=0;
int n=sizeof(a)/sizeof(a[0]);
for(i=0;i<n;i++){
    b[i]=pass(a[i]);
    
}
for(i=0;i<n;i++){
    printf("%d ",b[i]);
}

}
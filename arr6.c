#include<stdio.h>
// WAP in C to delete 1st digit of all array elements.
//  i/p: int a[6]={12,234,321,45,654,1234};
//  o/p: int a[6]={2 , 34, 21, 5, 54, 234};

int pass(int j){
    int div=1;
    while(j/div>=10){
        div*=10;
    }
    return j%div; 
}

int main(){
    int a[6]={12,234,321,45,654,1234};
    int n=sizeof(a)/sizeof(a[0]);
int i,j;

    for(i=0;i<n;i++){
        a[i]=pass(a[i]);
       // a[i]=pass(j);
    }

    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}
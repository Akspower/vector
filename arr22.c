#include<stdio.h>


// 22. WAP in C to merge 2 array into 3rd array .
//  i/p: int a[3]={1,5,7}; b[3]={11,22,33};
//  o/p: int c[6]={1,11,5,22,7,33};

int main(){

    int a[3]={1,5,7}, b[5]={11,22,33,7,28};

int n1=sizeof(a)/sizeof(a[0]);
int n2=sizeof(b)/sizeof(b[0]);
int large=0;
int n3=n1+n2;
int i,j;
i=j=0;

int c[8];
int index=0;
while(i<n1 && j<n2){
    c[index++]=a[i++];
    c[index++]=b[j++];
}
while(i<n1){
    c[index++]=a[i++];
}
while(j<n2){
    c[index++]=b[j++];
}


for(int i=0;i<n3;i++){
    printf("%d ",c[i]);
}



}
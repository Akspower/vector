// Online C compiler to run C program online
#include <stdio.h>
//WAP in C to store 1st 7 prime number in array .
 //i/p: int a[7];
// o/p: int a[7]={2,3,5,7,11,13,17};

int prime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            break;
        }
    }
    if(n==i){
        return 1;
    }
    return 0;

}

int main() {
int a[7];
int n=sizeof(a)/sizeof(a[0]);

int count=0;
int num=2;

while(count<7){
    if(prime(num)){
        a[count++]=num;
       // count++;
       
    }
    num++;
}

  for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
#include<stdio.h>
 //i/p : int a[7]={2,2,1,5,5,4,4};
// o/p : second small = 2 

int main(){
    int a[7]={2,2,1,5,5,4,4};
    int n=sizeof(a)/sizeof(a[0]);
int i,s=999999999,ss=999999999;

for(i=0;i<n;i++){
    if(a[i]<s){
    ss=s;
    s=a[i];
}
    else if (a[i]>s && a[i]<ss)
         ss=a[i];
    }
    printf(" second smallest %d and smallest %d ",ss,s );
}


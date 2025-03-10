#include<stdio.h>

//  WAP in C to swap(using bitwise) 0th ele with
// last ele in array using 2 pointer without any loop.
//  i/p: int a[6]={111,222,333,444,555,666}, *p,*q ;
//  o/p: 666 222 333 444 555 111



int main(){

    int a[6]={111,222,333,444,555,666}, *p,*q ;
   int n=sizeof(a)/sizeof(a[0]);

   p=&a[0];
   q=&a[n-1];

*p=*p^*q;
*q=*q^*p;
*p=*p^*q;


   for(int i=0;i<n;i++){
    printf("%d ",a[i]);
   }

}
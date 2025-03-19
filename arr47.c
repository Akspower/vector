// Online C compiler to run C program online
#include <stdio.h>
// WAP in C to delete perfect number from array .
//  i/p: int a[6]={6,7,28,6,5,24};
//  o/p: int a[6]={7,5,24};

int perfect(int n){
   int sum=0,temp=n;
   int i;
   for(i=1;i<temp;i++){
       if(temp%i==0){
           sum+=i;
       }
   }
   if(sum==n){
       return 1;
   }
   return 0;
}

int main() {
int a[6]={6,7,28,6,5,24};
int n=sizeof(a)/sizeof(a[0]);

int count=0;
int num=2;
int j=0;
for(int i=0;i<n;i++){
    if(!perfect(a[i])){  // for store only perfect just remove !
      a[j++]=a[i];
    }
    
}
n=j;

  for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
#include<stdio.h>
// WAP in C to count -ve ,+ve, even , odd ele in array .
// i/p: int a[10]={-11,11,12,-12,9,8,-3,10,22};
// o/p: +ve = 6 , -ve = 3 , odd = 2 , even = 4 

int main(){
   int a[10]= {-11,11,12,-12,9,8,-3,10,22};
int n=sizeof(a)/sizeof(a[0]);
int pos,neg,even,odd;
pos=neg=odd=even=0;
for(int i=0;i<n;i++){
if(a[i]>0) pos++;
if(a[i]<0)  neg++;
if(a[i]>0) {
    if(a[i]%2==0)
    even++;
}
if(a[i]%2==1) odd++;
}
printf("+ve %d -ve %d odd %d even %d",pos,neg,odd,even);


}


#include <stdio.h>

int main() {
int a[]={1,-2,4,2,-6,-9,-7,5,6,-5},b[5],c[5];
int n=sizeof(a)/sizeof(a[0]);

int pos=0,neg=0;

for(int i=0;i<n;i++){
    if(a[i]>0)
    b[pos++]=a[i];
    else{
        c[neg++]=a[i];
    }
}
int i=0,j=0;
// while(i<pos && j<neg){
//     printf("%d ",b[i]);
//     printf("%d ",c[j]);
//     i++;
//     j++;
// }

for(;i<pos,j<neg;i++,j++){
    printf("%d %d ",b[i],c[j]);
}



    return 0;
}
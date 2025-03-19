// Online C compiler to run C program online
#include <stdio.h>
// WAP in C to shift all -ve elements to right side in
// same array.
//  i/p: int a[7]={-1,22,3,-4,-8,33,77};
//  o/p: int a[7]={22,3,33,77,-1,-4,-8,};
int main() {

int a[7]={-1,22,3,-4,-8,33,77};

int n=sizeof(a)/sizeof(a[0]);
int left=0;
for(int right=0;right<n;right++){
    if(a[right]>=0){
        int temp=a[left];
        a[left]=a[right];
        a[right]=temp;
     left++;
    }    
}

for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
    return 0;
}






// // Online C compiler to run C program online
// #include <stdio.h>
// // WAP in C to shift all 0 to left side in same array.
// //  i/p: int a[7]={11,0,0,44,0,33,0};
// //  o/p: int a[7]={0,0,0,0,11,44,33};
// int main() {
// int a[7]={11,0,0,44,0,33,0};
// int n=sizeof(a)/sizeof(a[0]);
// int right=0;
// for(int left=0;left<n;left++){
//     if(a[left]==0){
//         int temp=a[left];
//         a[left]=a[right];
//         a[right]=temp;
//         right++;
//     }

// }
//   for(int i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }

//     return 0;
// }
#include<stdio.h>
// . WAP in C to delete -ve elements from array .
//  i/p: int a[6]={-11,12,-14,13,-15,-18};
//  o/p: int a[6]={12, 13};
int main(){
    int a[6]={-11,12,-14,13,-15,-18};
int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        if(a[i]<0){
 
            for(int j=i;j<n-1;j++){
                a[j]=a[j+1];
            }
            n--;
            i--;
 
        }
    }
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}

}

// #include <stdio.h>

// int main() {
//     int a[6] = {-11, 12, -14, 13, -15, -18};
//     int n = sizeof(a) / sizeof(a[0]);
    
//     int temp[6]; // Temporary array
//     int tempIndex = 0; // Index for temp array

//     // Store only non-negative elements in temp array
//     for (int i = 0; i < n; i++) {
//         if (a[i] >= 0) {
//             temp[tempIndex++] = a[i];
//            // tempIndex++;
//         }
//     }

//     // Copy elements back to the original array
//     for (int i = 0; i < tempIndex; i++) {
//         a[i] = temp[i];
//     }

//     // Print the updated array
//     for (int i = 0; i < tempIndex; i++) {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }

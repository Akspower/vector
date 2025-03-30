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

// #include <stdio.h>

// int main() {
//     int a[7] = {-1, 22, 3, -4, -8, 33, 77};
//     int n = sizeof(a) / sizeof(a[0]);
//     int result[7];
//     int index = 0;
    
//     // First, copy all non-negative numbers to result array
//     for (int i = 0; i < n; i++) {
//         if (a[i] >= 0) {
//             result[index++] = a[i];
//         }
//     }
    
//     // Next, copy all negative numbers to result array
//     for (int i = 0; i < n; i++) {
//         if (a[i] < 0) {
//             result[index++] = a[i];
//         }
//     }
    
//     // Copy result back to original array
//     for (int i = 0; i < n; i++) {
//         a[i] = result[i];
//     }
    
//     // Print the updated array
//     for (int i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
    
//     return 0;
// }



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



// #include <stdio.h>

// int main() {
//     int a[7] = {11, 0, 0, 44, 0, 33, 0};
//     int n = sizeof(a) / sizeof(a[0]);
//     int temp[7]={0};  // Temporary array
//     int index = 0; 

//     // Fill the temporary array with 0s initially
//      for (int i = 0; i < n; i++) {
//         if (a[i] == 0) {
//             temp[index++] = a[i];  // Fill from the first available index
//         }
//     }

//     // Place non-zero elements in temp array from the appropriate index
//     for (int i = 0; i < n; i++) {
//         if (a[i] != 0) {
//             temp[index++] = a[i];  // Fill from the first available index
//         }
//     }

//     // Copy elements back to original array
//     for (int i = 0; i < n; i++) {
//         a[i] = temp[i];
//     }

//     // Print the final array
//     for (int i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }

#include<stdio.h>

//WAP to C to insert 99 on 0th index in same array .
 //i/p: int a[7]={2,3,5,7,11,13 }, in=0, num=99;
// o/p: int a[7]={99, 2,3,5,7,11,13};

int main(){
//concept = for insert new element shift right from that index and for insertion loop start from n-1
    int a[7]={2,3,5,7,11,13 }, in=0, num=99;   //for insert in middle  just change the index 
int n=sizeof(a)/sizeof(a[1]);

for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
printf("\n");
for(int i=n-1;i>in;i--){
    a[i]=a[i-1];
    

}
a[in]=99;

for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
}







// #include <stdio.h>

// void insertAtPositions(int arr[], int *size, int pos, int num) {
//     // Shift elements to the right to make space
//     for (int i = *size; i > pos; i--) {
//         arr[i] = arr[i - 1];
//     }
//     // Insert the new element
//     arr[pos] = num;
//     (*size)++; // Increase array size count
// }

// int main() {
//     int a[9] = {30, 11, 45, 34, 14, 8, 50}; // Initial array
//     int size = 7; // Actual number of elements,   check like this a[i]1=0 size++

//     // Insert 99 at index 0
//     insertAtPositions(a, &size, 0, 99);

//     // Insert 88 at index 1
//     insertAtPositions(a, &size, 1, 88);

//     // Print updated array
//     printf("Updated array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }

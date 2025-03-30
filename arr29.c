#include <stdio.h>

int main() {
    int a[] = {2, 3, 5, 5, 5, 7, 11, 13, 2, 3, 11, 777,777}, n = sizeof(a) / sizeof(a[0]);
    int i, j,k;

    for (i = 0; i < n; i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(k=j;k<n-1;k++){
                    a[k]=a[k+1];
                    
                }
                n--;
                j--;
                
            }
            
        }
    }
      

    for (i = 0; i < n; i++) 
        printf("%d ", a[i]);
}


//one more way using hashmap

// #include <stdio.h>

// #define MAX_VALUE 1000  // Increased size to handle larger numbers

// int main() {
//     int a[] = {2, 3, 5, 5, 5, 7, 11, 13, 2, 3, 11};  
//     int n = sizeof(a) / sizeof(a[0]); 
//     int i, j = 0, freq[MAX_VALUE] = {0};  //it not handle for negaative element

//     for (i = 0; i < n; i++) {
//         if (freq[a[i]] == 0) {  
//             freq[a[i]] = 1;
//             a[j++] = a[i];  
//         }
//     }

//     for (i = 0; i < j; i++) 
//         printf("%d ", a[i]);

//     return 0;
// }

#include <stdio.h>

// WAP in C to delete desired char from string.
//  i/p:char s[20]=”acbcccab” , ch = ‘c’
//  o/p: abab

int main() {
    char s[20] = "acbcccab", ch = 'c';
    int k = 0; // Pointer to place valid characters

    for (int i = 0; s[i]; i++) { 
        if (s[i] != ch) {
            s[k++] = s[i]; // Copy only non-matching characters
        }
    }
    s[k] = '\0';

    printf("%s", s); // Expected Output: "abab"

    return 0;
}

                   //                  ANOTHER APPROACH

// #include<stdio.h>
// int main(){
// char s[20]="acbcccab" , ch = 'c';

// int n=0;
// while(s[n]){
//     n++;
// }
// //printf("%d\n",n);

//     for(int i=0;i<n;i++){
//        if(s[i]==ch){
//            for(int j=i;j<n;j++){
//                s[j]=s[j+1];
//            }
//             n--;
//        i--;
//        }
      
       
//     }
//     printf("%s",s);


// }
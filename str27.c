// Online C compiler to run C program online
#include <stdio.h>
// WAP in C to reverse 1st word in string using pointer.
//  i/p: char s[20]=”vector india pvt”;
//  o/p: rotcev india pvt 
void pass(char *s){
    char *start,*end;
                              // no need of while(*s ) bcz we not reverse all
        while(*s==' '){
            s++;
        }
        
        start=s;
        while(*s!=' '&& *s!='\0'){
            s++;
        }
        end=s-1;
        while(start<end){
            char c=*start;
            *start=*end;
            *end=c;
             start++;
             end--;
        }
    
}

int main() {
    char s[20]="vector india pvt";
    pass(s);
    printf("%s",s);

    return 0;
}







// #include <stdio.h>

// // Function to reverse only the last word
// void pass(char *s) {
//     char *start, *end;
//     char *p = s;

//     // Move to the end of the string
//     while (*p) {
//         p++;
//     }
//     p--; // Move back from '\0'

//     // Skip trailing spaces
//     while (p >= s && *(p+1) == ' ') {
//         p--;
//     }

//     // Mark the end of the last word
//     end = p;

//     // Find the start of the last word
//     while (p >= s && *p != ' ') {
//         p--;
//     }

//     start = p + 1; // Move to the first character of the last word

//     // Reverse the last word
//     while (start < end) {
//         char c = *start;
//         *start = *end;
//         *end = c;
//         start++;
//         end--;
//     }
// }

// int main() {
//     char s[30] = "vector india pvt";
//     pass(s);
//     printf("%s", s); // Output: vector india tvp
//     return 0;
// }

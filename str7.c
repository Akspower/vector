#include<stdio.h>
// WAP in C to count set bit all char in string.
//  i/p: char s[10]=”bcd”;
//  o/p: 3 4 3
int main() {
    char s[20] = "Aditya";
    char *p = s;
    int digit_count = 0;
    int bit_count = 0;
    
 
    //p = s;
    while(*p) {

            //char current = *p;
            bit_count=0;
            for(int i = 7; i >= 0; i--) {
                if(*p >> i & 1) {
                    bit_count++;
                }
            }
                            printf("%d ",bit_count);
        p++;
    }

    return 0;
}
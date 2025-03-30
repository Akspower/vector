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
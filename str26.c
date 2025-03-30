#include <stdio.h>
// 26. WAP in C to print word ending with letter ‘g’.
//  i/p: char s[20]=”c ds coding doing”;
//  o/p: coding doing 

void pass(char *s){
    char *start,*end;
    while(*s){
    while(*s==' '){   //ignore space
        s++;
    }
    
    start=s;                           // when real word start
    while(*s!=' ' && *s!='\0'){           // go to space
        s++;
    }
    end=s-1;                          // one back to space because previously it pointing to space
    if(*end=='g'){
        while(start<=end){                     // start already  save  so just start<=end 
            printf("%c",*start);
            start++;
        }
        printf(" ");
    }
}
}


int main() {
char s[20]="c ds coding doing";



pass(s);
//printf("%s",s);

    return 0;
}
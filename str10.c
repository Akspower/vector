#include<stdio.h>

// WAP in C to reverse string using while loop .
//  i/p: char s[10]=”gnidoc 321”;
//  o/p: 123 coding 

// WAP in C to reverse first 3 letter from string .
//  i/p: char s[10]=”gnidoc coding ”;
//  o/p: ingdoc coding       just n=3 and while loop off;
int main(){
    char s[15]="gnidoc 321";

int n=0;
while(s[n]){
    n++;
}
//printf("%d\n",n);

    for(int i=0,j=n-1;i<j;i++,j--){
        char t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
    printf("%s",s);


}
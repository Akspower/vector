#include<stdio.h>
// WAP in C to delete prime digit from string.
//  i/p: char s[20]=”abc3456 567abc”;
//  o/p: abc46 6abc 

char delete (char *p){
   int i=0,j=0;;
while(p[i]){
if(p[i]!='2' && p[i]!='3' && p[i]!='5' && p[i]!='7'){  // if (p[i] < '0' || p[i] > '9')   to remove digit
    p[j++]=p[i];
   
}
 i++;
}
p[j]='\0';
}

int main(){
    char s[20]="abc3456 567abc";


    delete(s);
    printf("%s",s);
}
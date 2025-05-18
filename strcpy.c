#include<stdio.h>

void mystrcpy(char *src,char *dest,int i){
if(src[i]=='\0'){
   // dest[i]='\0';
    return;
}
dest[i]=src[i];

mystrcpy(src,dest,i+1);


}

int main(){

char src[]="aditya";
char dest[20];

mystrcpy(src,dest,0);

printf("%s",dest);

}
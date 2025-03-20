#include<stdio.h>

// WAP in C to delete desired char only 2 times
// from right side of given string using while loop.
//  i/p: char s[20]=”abcccababcc” , ch= ‘c’
//  o/p: abcccabab 
int main(){
char s[20]="abcccababcc" ,ch = 'c';

int n=0;
while(s[n]){
    n++;
}
//printf("%d\n",n);
int count=0;
    for(int i=n-1;i>=0;i--){
       if(s[i]==ch){
           count++;
           for(int j=i;j<n;j++){
               s[j]=s[j+1];
           }
            n--;
       i++;   //here we do i-- then it not check that index again
       }
       if(count==2){
           break;
       }
      
       
    }
    printf("%s",s);


}
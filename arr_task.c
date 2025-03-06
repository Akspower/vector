#include<stdio.h>
// if element is palidrome leave it otherwise replace with next palindrome

int ispalindrome(int i){
    int temp=i;
    int rev=0,r;
    while(temp){
   r=temp%10;
   rev=rev*10+r;
   temp/=10;
    }
    return rev==i;
}

int nextpalindrome(int num){

    while(1){
        num++;
        if(ispalindrome(num))
       return num;
    }
    
}

int main(){

int a[]={10,5,20,33,8,100,93};
int n=sizeof(a)/sizeof(a[0]);


for(int i=0;i<n;i++){
    if(!ispalindrome(a[i])){
    a[i]=nextpalindrome(a[i]);
    }
}

for(int i=0;i<n;i++){
printf("%d ",a[i]);
}

}
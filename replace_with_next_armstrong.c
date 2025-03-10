#include <stdio.h>

// check every element in array is armstrong or not if not replace with next armstrong 

int multi(int r,int digit){
    int prod=1;
    for(int i=1;i<=digit;i++){     // for strong just change condition i<=r and prod*=i 
        prod*=r;
    }
    return prod;
}

int armstrong(int n){
    int temp=n;
    int temp2=n;
    int digit=0;
    int sum=0;
    while(temp){
        temp/=10;
        digit++;
        
    }
    while(temp2){
        int r=temp2%10;
        sum+=multi(r,digit);
        temp2/=10;
    }
    
        return sum==n;
    
}
    
    int next(int n){
        while(1){
            n++;
            if(armstrong(n)){
                return n;
            }
        }
    }
    
    

int main() {
    int a[]={1,153,5,145,11232,908};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        if(!armstrong(a[i])){
            a[i]=next(a[i]);
        }
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
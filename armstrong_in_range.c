#include<stdio.h>
////print armstrong in range
int pass(int r,int digit){
    int product=1;
    for(int i=1;i<=digit;i++){
        product*=r;
    }
    return product;
}

int main(){
    
    int temp,temp2,i,digit=0,r,rev,sum=0,add=0,count=0;
    
    for(i=1;i<=8500;i++){
        sum=0;
        temp=i;
        temp2=i;
        digit=0;
        while(temp2>0){
            temp2/=10;
            digit++;
        }
        while(temp){
            r=temp%10;
            sum+=pass(r,digit);
            temp/=10;
            
        }
        if(sum==i && i>=371){
                printf("%d \n",i);
                add+=i;
                count++;
            
        }
        
    
    }
    
    printf("Add %d \n count %d \n",add,count);
    
    
    
    
}
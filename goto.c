
#include <stdio.h>

int main() {
    int num=4678,sum=0;
    l:
    if(num>0){
        int last=num%10;
        if(last%3==0){ //check every digit if it divisible add to sum
            sum+=last;
        }
        num/=10;
        if(num>0)
        goto l;
      
    }
      printf("%d",sum);

    return 0;
}
#include <stdio.h>
//#include<unistd.h>   warning it used for sleep()
int factorial(int r){
    int prod=1;
    for(int i=1;i<=r;i++){
        prod*=i;
    }
    return prod;
}
int power(int r,int count){
    int product=1;
    for(int i=1;i<=count;i++){

        product*=r;
    }
    return product;

}

int main() {
    int num;
    int op;
    int i;
    int temp,rev=0,r;
    int count=0;
    int sum=0;
    int a=0,b=1,c;
    int mul=1;
    printf("Enter a number to perform \n");
    scanf("%d",&num);
L:
    printf("which operation Click Number \n 1 Prime \n 2 Palindrome \n 3 Perfect Number \n 4 Factors \n 5 Binary Printing \n 6 Strong Number \n 7 Armstrong Number \n 8 Fibonacci Number \n 9 Factorial \n ");
    scanf("%d",&op);
    if(op<=9){
        printf("You clicked option %d ,So it perform on this number %d \n",op,num);
    }
    switch(op){
        case 1:

            for(i=2;i<num;i++){
                if(num%i==0){
                    break;
                }

            }
            if(num==i){
                printf("%d is Prime \n",num);
            }
            else{
                printf("Not a Prime\n");
            }

            break;

        case 2:

            for(temp=num;temp;temp/=10){
                r=temp%10;
                rev=rev*10+r;

            }
            if(num==rev){
                printf("%d is Palindrome\n ",num);
            }
            else{
                printf("Not a Palindrome \n");
            }
            break;

        case 3:

            for(i=1;i<num;i++){
                if(num%i==0)
                    count+=i;
            }
            if(count==num){
                printf("%d is Perfect Number\n",num);
            }
            else{
                printf("Not a Perfect Number\n");
            }
            break;
        case 4:
            printf("Factors of %d is ",num);
            for(i=1;i<=num;i++){
                if(num%i==0){
                    printf(" %d",i);
                }
            }
            break;

        case 5:
            for(i=31;i>=0;i--){
                printf("%d",num>>i&1);
                if(i%8==0){
                    printf(" ");
                }
            }

            break;


        case 6:

            for(temp=num;temp;temp/=10){
                r=temp%10;
                count+=factorial(r);
            }
            if(count==num){
                printf("%d is Strong Number \n",num);
            }
            else{
                printf("Not a Strong Number \n");
            }
            break;

        case 7:
            temp=num;
            while(temp){
                r=temp%10;
                count++;
                temp/=10;
            }

            for(temp=num;temp;temp/=10){
                r=temp%10;
                sum+=power(r,count);
            }
            if(sum==num){
                printf("%d is Armstrong Number\n",num);
            }
            else{
                printf("Not a Armstrong Number \n");
            }
            break;
        case 8:
            if(num==0){
                printf("0\n");
            }
            if(num==1){
                printf("1\n");
            }

            if(num>1){
                for(i=3;i<=num;i++){
                    c=a+b;
                    a=b;
                    b=c;
                }
                printf("In fibonacci  series %d position is %d\n",num,c);

            }
            break;
        case 9:
            for(i=1;i<=num;i++){
                mul*=i;
            }
            printf("%d\n",mul);
            break;
        default:
            printf("\n \n \n Please Enter in range\n \n \n");
            sleep(2);
            printf("it Happens , Try Again\n \n \n ");
            goto L;
    }
    return 0;
}
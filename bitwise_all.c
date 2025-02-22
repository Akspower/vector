#include <stdio.h>




int main() {
int num;
printf("Enter a number\n"); 
scanf("%d",&num);   // give 15 so easy to understand

printf("Bit representation\n");
for(int i=31;i>=0;i--){
    printf("%d",num>>i&1);
    if(i%8==0){
        printf(" ");
    }
}
printf("\nSet a Particular Bit 5th position 0 indexing\n");
int temp=num;
temp=temp|1<<5;   //5th is bit position 0 indexing
for(int i=31;i>=0;i--){
    printf("%d",temp>>i&1);
    if(i%8==0){
        printf(" ");
    }
}

printf("\nclear a Particular Bit 3rd position 0 indexing\n");
int temp2=num;
temp2=temp2&~(1<<3); //3rd is bit position 
for(int i=31;i>=0;i--){
    printf("%d",temp2>>i&1);
    if(i%8==0){
        printf(" ");
    }
}

printf("\nToggle a Particular Bit 7th position 0 indexing\n");
int temp3=num;
temp3=temp3^1<<7; //7th bit
for(int i=31;i>=0;i--){
    printf("%d",temp3>>i&1);
    if(i%8==0){
        printf(" ");
    }
}

printf("\nreverse the bit\n");
int temp4=num;
int num1=0;
int i,j;
for(i=0,j=31;j<=31;i++,j--){
   int m=num>>i&1 ;//check 0th bit in num
    if(m){ // if it is 1
        num1=num1 | 1<<j;
    }
    temp4=num1;
}
for(int i=31;i>=0;i--){
    printf("%d",temp4>>i&1);
    if(i%8==0){
        printf(" ");
    }
}

printf("\nRight bit/Clockwise Rotation by 3 \n"); //3 is No. of bit rotation
int temp5=num;
int r1,r2,n=3; //n=3 is no. of bit rotation
r1=temp5>>n;
r2=temp5<<(32-n); // 32 is used for int
temp5=r1|r2;

for(int i=31;i>=0;i--){
    printf("%d",temp5>>i&1);
    if(i%8==0){
        printf(" ");
    }
}

printf("\nLeft bit/Anti Clockwise Rotation by 3 \n"); //3 is No. of bit rotation
int temp6=num;
int r11,r22,n2=3; //n=3 is no. of bit rotation
r11=temp6<<n2;
r22=temp6>>(32-n2); // 32 is used for int
temp6=r11|r22;

for(int i=31;i>=0;i--){
    printf("%d",temp6>>i&1);
    if(i%8==0){
        printf(" ");
    }
}

    return 0;
}
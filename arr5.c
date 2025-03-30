#include<stdio.h>


//add first and last digit
int first(int j){
    if (j >= 0 && j <= 9)    // if only one digit dont add twice for that 
        return 0;
    while(j>10){
        j/=10;
    }
    return j;
}
int last (int j){

    return j%10;
}
void main()
{
    int a[]={123,23,89,3425,721,1};
    //int *p=a;
    int i,j;
    int sum=0;
    int sum2=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++){
        j=a[i];

        sum+=first(j);

        sum2+=last(j);
    }
    int total = sum+sum2;

    printf(" \n SUM %d",total);
}
// printf("\n");
// for(i=0;i<n;i++){
//     printf("%d ",a[i]);
// }
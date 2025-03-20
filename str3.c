#include<stdio.h>

// WAP in C to count digits in string using pointer .
//  i/p: char s[20]=”p6c3s1 123 ok7”;
//  o/p: count = 7 
//       sum 23 of digit




int main(){
    char s[20]="p6c3s1 123 ok7";
  char *p=s;
int count=0;




//length

// int length=0;
// while(*p){
//     length++;
//     p++;
// }
// printf("Length %d\n",length);

int sum=0;
  while(*p){

    if(*p>='0' && *p<='9'){
        sum+=(*p-48);   //sum+=(*p+'0')  it is also same
        count++;
      
    }
    p++;
   
  }


//   // Using for loop with array indexing
//   for (int i = 0; s[i] != '\0'; i++) {
//     if (s[i] >= '0' && s[i] <= '9') { // Check if character is a digit
//         count++;
//     }


  printf(" count of digit %d\n ",count);
  printf(" sum of digit %d ",sum);

//                 binary printing for every letter using char pointer
//   while(*p){
//     for(int i=7;i>=0;i--){
//         printf("%d",*p>>i&1);
//     }
//     printf("\n");
//      p++;
//    }

                 // binary printing using indexing
   for(int i=0;s[i];i++){
    for(int j=7;j>=0;j--){
        printf("%d",s[i]>>j&1);
    }
    printf("\n");
   }


}



        //  question 4


// #include <stdio.h>

// int main() {
//     char s[10] = "program";  

//     printf("Char\tASCII\tOctal\tHex\n");
//     printf("--------------------------------\n");

//     for (int i = 0; s[i] != '\0'; i++) {
//         printf("%c\t%d\t%o\t%X\n", s[i], s[i], s[i], s[i]);
//     }

//     return 0;
// }

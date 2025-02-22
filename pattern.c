#include <stdio.h>

int main() {
int i,j;

for(i=1;i<=4;i++){
    char ch='A';
int num=1;
    for(j=1;j<=4-i;j++){
        printf(" ");
    }
  if(i%2==1){
      for(j=1;j<=2*i-1;j++){
          printf("%c",ch);
          ch++;
      }
  }
  else{
       for(j=1;j<=2*i-1;j++){
          printf("%d",num);
          num++;
      }
  }
    printf("\n");
}

    return 0;
}
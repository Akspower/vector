   #include <stdio.h>
  
   int main() {
  
   printf("Welcome Programmer\n");
  
   int num,bit_pos,op,count=0;
   printf("Enter any number\n");
   scanf("%d",&num);
  L1:
  printf("Enter the bit position\n");
  scanf("%d",&bit_pos);
  if(bit_pos>=0 && bit_pos<=31){
  printf("Which operation you want\n 1 for set bit\n 2 for clear\n 3 for complement \n");
  scanf("%d",&op);
 
  if(op==1){
    num=num | 1<<bit_pos;
     printf("%d\n",num);
 }
 else if(op==2){
     num=num&~(1<<bit_pos);
     printf("%d\n",num);
 }
 else if (op==3) {
     num=num^1<<bit_pos;
      printf("%d\n",num);
 }
 else{
        printf("Invalid Input\n");
  }
  }
  else {
      printf("wrong Input for bit position\n");
      count++;
      printf("But you have %d more try\n",3-count);
      if(count<3){
         goto L1;
      }
  }
      return 0;
  }

  //add comment
                              
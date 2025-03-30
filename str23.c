#include<stdio.h>
 
//print every word length in string


int pass(char s[]){
     int count=0;
    for(int i=0;s[i];){
        //count=0;
        if(s[i]!=' '){
            count++;
            // break;
        }
        else if(count>0){
            printf("%d ",count);
            count=0;
        }
        i+=1;
        
}
if(count>0){
    printf("%d",count); //for last word length
}

}
  
int main() {
char s[100]="Aditya kumar sharma";

pass(s);
// printf("%d",store);
// printf("%s",s);


    return 0;
}                         




// make first letter capital of every word



// #include<stdio.h>
// int pass(char s[]){
//      int count=1;
//     for(int i=0;s[i];i++){
       
//         if(s[i]==' '){
//             s[i+1]-=32;   // also check if capital dont do any operation
//         }

//     }
//     s[0]-=32;               // for first word first letter
//               return count;
// }
  
// int main() {
// char s[100]="aditya kumar sharma";

// pass(s);
// printf("%s",s);


//     return 0;
// }





                                    // count word in string 




// #include<stdio.h>
// int pass(char *s){
//      int count=1;         // just for first word count
//     for(int i=0;s[i];i++){
       
//         if(s[i]==' '){
//             count++;
//         }

//     }
//               return count;
// }
  
// int main() {
// char s[100]="Aditya kumar Sharma";

// int store=pass(s);
// printf("%d",store);
// // printf("%s",s);


//     return 0;
// }
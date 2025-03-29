#include <stdio.h>

// Function to reverse part of the string
void strrev(char str[], int st, int en) {
    while (st < en) {
        char t = str[st];
        str[st] = str[en];
        str[en] = t;
        st++;
        en--;
    }
}

void pass(char str[]) {
    int s = 0, e, special = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == ' '  || str[i+1]=='\0') {
                e = ((str[i]==' ')?i-1:i);
             
            special = 0;
            for (int j = s; j <= e; j++) {
               // if (str[j] >= '0' && str[j] <= '9')
               // if (str[j]=='@' || str[j]=='#')
                {
                    special = 1;
                    break;
                }
            }

            if (special) {
                strrev(str, s, e);
            }
            s = i + 1;
        }
    }
}

int main() {
    char str[200] = "1adi shar2ma 123coss -x-1 asdfghjkl";  //change according to check reverse
    pass(str);
    printf("%s\n", str); // Print the modified string
    return 0;
}












// #include <stdio.h>
// void rev(char *st,char *en){
//     while(st<en){
//         char t=*st;
//         *st=*en;
//         *en=t;
//         st++;
//         en--;
//     }
// }
// void pass(char *str){
//     char *s=str,*e,*p=str;
//     while(*p){
//         if(*p==' ' || *p=='\0'){
//             e=(*p==' ')?p-1:p;
        
//         for(char *j=s;j<=e;j++){
//             if(*j>='0' && *j<='9'){
//                 rev(s,e);
//                 break;
//             }
//         }
//         s=p+1;
//         }
//         p++;
//     }
// }




// int main() {
// char s[]="Aditya Kumar042gc Sha3rma ";

// pass(s);

// printf("%s",s);

//     return 0;
// }

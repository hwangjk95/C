#include <stdio.h>
int main(){
    char *str;
    str = "KOREA";
    while(*str !='\0'){
        printf("%c \n",*str);
        str++;
    }
}
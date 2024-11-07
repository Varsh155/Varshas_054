#include<stdio.h>
void main()
{
    char x=getc(stdin);
    if(x>='A'&& x<='Z'){
         x=x+32; 
    }
    else if(x>='a' && x<='z'){
        x=x-32;
        printf("Value is:%c",x);
    }
    else{
        printf("invalid input");
    }
           
    getchar();
    getchar();

}
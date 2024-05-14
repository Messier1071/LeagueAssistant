#include <string.h>
#include <stdio.h>



int main(int argc, char const *argv[])
{

    char str[13] = "Messier#1071";
    const char s[2] = "#";
    char *token;
   
    token = strtok(str, s);
    printf( " %s\n", token );
    
     
   


    return 0;
}

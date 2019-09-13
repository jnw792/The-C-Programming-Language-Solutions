/**
*The complete set of escape sequences is 
* \a alert (bell) character 
* \b backspace
* \f formfeed
* \n newline 
* \r carriage return 
* \t horizontal tab
* \v vertical tab
* \\ backslash 
* \? question mark
* \' single quote
* \" double quote
* \ooo octal number
* \xhh hexadecimal number
* The character constant '\0' represent the 
* character with value zero, the null 
* character. '\0' is often written instead 
* of 0 to emphasize the character nature 
* of some expression, but the numeric
* value is just 0.
**/

#include <stdio.h>

int main(void)
{

    printf("backspace: \bHello!\n");
    printf("horizontal tab:  \tHello!\n");
    printf("vertical tab:  \vHello!\n");
    printf("Hello backslash \\!\n");
    printf("double quote:  \"Hello!\"\n");
    
    return 0;
}


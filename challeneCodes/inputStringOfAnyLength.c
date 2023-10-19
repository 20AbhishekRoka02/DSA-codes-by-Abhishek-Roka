#include <stdio.h>
#include <stdlib.h>

char * anyString(char * prompt)
{
    int ch, len=0;
    char *string;
    
    printf("%s",prompt);

    // Read characters from standard input (keyboard) until Enter is pressed
    while ((ch = fgetc(stdin)) != '\n') {
        if (len==0){
            string = (char *) malloc(sizeof(char));
            *string = (char) ch;
            len++;
        } else
        {
            len++;
            string = (char *) realloc(string, sizeof(char) * len);
            *(string + (len-1)) = (char) ch;
        }
    }
    
    string = (char *) realloc(string, sizeof(char) * len);
    *(string + (len)) = '\0';

    return string;
}

int main(){
    char * mystring = anyString("Enter string: ");
    printf("my string is: %s\n", mystring);

    return 0;
}

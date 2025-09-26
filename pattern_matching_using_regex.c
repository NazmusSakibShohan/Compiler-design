#include <stdio.h>
#include <string.h>
#include <regex.h>

int main()
{   char str[100];
    regex_t regex;
    printf("Enter a string: ");
    scanf("%s", str);
    char pattern[] = "^a.*b$";
    regcomp(&regex,pattern,REG_EXTENDED);
    int r=regexec(&regex,str,0,NULL,0);
    if(r==0)
    {
        printf("Accepted\n");
    }
    else
    {
        printf("Rejected\n");
    }
    return 0;
}
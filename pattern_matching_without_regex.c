#include <stdio.h>
#include <string.h>

int main()
{   char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len=strlen(str);
    
    if(str[0]=='a' && str[len-1]=='b')
    {
        printf("Accepted\n");
    }
    else
    {
        printf("Rejected\n");
    }
    return 0;
}
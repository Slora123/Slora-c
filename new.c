#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], rev[50];
    printf("Enter a string:");
    scanf("%s", str);
    int len = strlen(str);
    strcpy(rev, str);
    strrev(rev);
    if (strcmp(str, rev) == 0)
        printf("It's a palindrome");
    else
        printf("Not a palindrome");
    return 0;
}
// cd C:\Users\Lenovo\vscode_c
// gcc coffeeshopbill.c -o coffeeshopbill.exe
// .\coffeeshopbill.exe
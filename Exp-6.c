#include <stdio.h>
#include <ctype.h>

int main() {
    char s[20]; int i;
    scanf("%s", s);

    // Check first character (must be letter or underscore)
    if (!isalpha(s[0]) && s[0] != '_') 
        return puts("Invalid");

    // Check remaining characters (must be letter, number, or underscore)
    for (i = 1; s[i]; i++) 
        if (!isalnum(s[i]) && s[i] != '_') 
            return puts("Invalid");

    puts("Valid");
    return 0;
}
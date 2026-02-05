#include <stdio.h>

int main() {
    FILE *f = fopen("input.c", "r");
    if (!f) return 0;

    char c, n;
    while ((c = getc(f)) != EOF) {
        // Skip whitespace
        if (c == ' ' || c == '\n' || c == '\t') continue;

        // Handle comments
        if (c == '/') {
            n = getc(f);
            if (n == '/') { 
                while (getc(f) != '\n'); // Skip single line
                continue; 
            }
            if (n == '*') { 
                while (1) { // Skip multi-line
                    c = getc(f);
                    if (c == '*' && getc(f) == '/') break;
                }
                continue;
            }
            ungetc(n, f); // Not a comment, put char back
        }
        putchar(c);
    }
    fclose(f);
    return 0;
}
#include <stdio.h>

int main() {
    int c, s = 0, n = 0;
    FILE *f = fopen("input.c", "r");
    
    if (!f) return 0;

    while ((c = getc(f)) != EOF) {
        if (c == ' ') s++;
        else if (c == '\n') n++;
    }

    printf("Spaces: %d\nNew lines: %d", s, n);
    fclose(f);
}
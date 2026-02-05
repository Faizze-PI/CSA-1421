#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f = fopen("input.txt", "r");
    int c, cc = 0, ww = 0, ll = 0, in = 0;

    if (!f) return 0;

    while ((c = getc(f)) != EOF) {
        cc++;
        if (c == '\n') ll++;
        if (isspace(c)) in = 0;
        else if (!in++) ww++;
    }
    fclose(f);
    printf("Chars:%d Words:%d Lines:%d\n", cc, ww, ll);
    return 0;
}
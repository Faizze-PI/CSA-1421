#include <stdio.h>

int main() {
    FILE *f = fopen("ic.txt", "r");
    char r, a, o, b, *m;
    
    if (!f) return 0;

    while (fscanf(f, "%c = %c %c %c\n", &r, &a, &o, &b) != EOF) {
        m = o=='+' ? "ADD" : o=='-' ? "SUB" : o=='*' ? "MUL" : "DIV";
        printf("MOV %c,R1\n%s %c,R1\nMOV R1,%c\n", a, m, b, r);
    }
    return 0;
}
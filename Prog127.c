//Q127: Read text from input.txt, convert lowercase letters to uppercase, write to output.txt.
#include <stdio.h>
#include <ctype.h>

void main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: input.txt not found!");
        return;
    }

    out = fopen("output.txt", "w");

    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);
    }

    fclose(in);
    fclose(out);

    printf("File converted successfully to uppercase.\n");
}
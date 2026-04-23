#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse_str(char *s) {
    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        char t = s[i]; s[i] = s[j]; s[j] = t;
        i++; j--;
    }
}

int main(void) {
    char buf[256];
    printf("Masukkan string: ");
    if (!fgets(buf, sizeof(buf), stdin)) return 1;
    buf[strcspn(buf, "\n")] = '\0';
    char copy[256];
    strcpy(copy, buf);
    reverse_str(copy);
    printf("Reversed: %s\n", copy);
    if (strcmp(buf, copy) == 0) printf("Palindrome!\n");
    else printf("Bukan palindrome.\n");
    return 0;
}

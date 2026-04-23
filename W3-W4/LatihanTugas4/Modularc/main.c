#include <stdio.h>
#include <string.h>
#include "string_utils.h"

int main() {
    char str[100];

    printf("Masukkan string: ");
    scanf("%s", str);

    printf("Asli: %s\n", str);

    reverse(str);
    printf("Reverse: %s\n", str);

    if (is_palindrome(str))
        printf("Palindrome\n");
    else
        printf("Bukan palindrome\n");

    to_upper(str);
    printf("Uppercase: %s\n", str);

    return 0;
}
#include <stdio.h>

int index_of(char *str, char ch) {
    for (int i = 0; str[i]!='\0'; i++) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("You must provide a string to search over\n");
        return 1;
    }
    int result = index_of(argv[1], 'f');
    printf("Index of f in %s: %d\n", argv[1], result);
}

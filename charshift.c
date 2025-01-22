#include <stdio.h>
#define CHARSHIFT 4

void shift_chars(char *str, int amount) {
    for (char *ch = str; ch != 0; ++ch) {
        if (*ch >= 'A' && *ch <= 'Z') {
            *ch = (*ch - 'A' + amount) % 26 + 'A';
        } else if (*ch >= 'a' && *ch <= 'z') {
            *ch = (*ch - 'a' + amount) % 26 + 'a';
        }
    }
}

int main(void) {
    char message[] = "Rkpa pk atpajz QLwoo jatp saag bkn bnaa lqxhey pnwjoep wjz "
                     "YKWOPAN wyyaoo!";

    shift_chars(message, CHARSHIFT);
    puts(message);
}

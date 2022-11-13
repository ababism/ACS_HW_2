#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void reverse(char *it_start, char *it_end) {
    char *it_l = it_start;
    char *it_r = it_end - 1;
    char temp;
    int size = (it_r + 1 - it_l) / 2;
    for (int i = 0; i < size; ++i) {
        temp = *it_l;
        *it_l = *it_r;
        *it_r = temp;
        --it_r;
        ++it_l;
    }
}

char *task(char *str) {
    char *it_l = str;
    char *it_r = str;
    char *eof = it_r + strlen(str);
    while (it_r != eof) {
        if (!isalpha(*it_r)) {
            reverse(it_l, it_r);
            while (!isalpha(*it_r) && it_r != eof) {
                ++it_r;
            }
            it_l = it_r;
            --it_r;
        }
        ++it_r;
    }
    reverse(it_l, it_r);
    return str;
}

char *task_random(int length, char *ch_arr) {
    srand(clock());
    for (int j = 0; j < length; ++j) {
        ch_arr[j] = (char) (33 + rand() % 93);
    }
    ch_arr[length] = '\0';
    printf("Random string: %s", ch_arr);
    return task(ch_arr);
}

char *task_manual(char *ch_arr) {
    printf("Your string (no more than 217 characters):");
    getchar();
    fgets(ch_arr, 217, stdin);
    return task(ch_arr);
}
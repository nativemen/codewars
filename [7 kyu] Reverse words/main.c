#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

static void reverse(char *word, int len) {
    int left = 0;
    int right = len - 1;

    while (left < right) {
        char temp = word[left];
        word[left] = word[right];
        word[right] = temp;

        left++;
        right--;
    }
}

char *reverseWords(const char *text) {
    char *words = strdup(text);
    char *word = words;
    int len = 0;

    for (int i = 0; i <= strlen(text); i++) {
        if (isspace(words[i]) || words[i] == '\0') {
            reverse(word, len);
            word = words + i + 1;
            len = 0;
            continue;
        }

        len++;
    }

    return words;
}
#include <stdio.h>
#include <string.h>

char b[1000005];
int c[26];

int main() {
    int d = 0;
    int e;
    char f;

    scanf("%s", b);
    e = strlen(b);

    for (int i = 0; i < e; i++) {
        if (b[i] >= 'a') c[b[i] - 'a']++;
        else c[b[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (c[i] == d) {
            f = '?';
        }
        else if (c[i] > d) {
            d = c[i];
            f = 'A' + i;
        }
    }

    printf("%c", f);

    return 0;
}
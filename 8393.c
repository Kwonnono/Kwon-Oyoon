#include<stdio.h>
int main() {
    int a, s = 0;
    scanf("%d", &a);
    for (int i = 0; i <= a; i++) {
        s += i;
    }
    printf("%d", s);
}
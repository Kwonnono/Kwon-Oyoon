#include<stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr1[101][101];
    int arr2[101][101];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }

}
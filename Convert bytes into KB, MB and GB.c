// Problem 13: Convert bytes into KB, MB and GB
#include <stdio.h>
int main() {
    int b;
    scanf("%d",&b);
    printf("KB=%d MB=%d GB=%d", b/1024, b/(1024*1024), b/(1024*1024*1024));
    return 0;
}

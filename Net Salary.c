// Problem 21: Net Salary
#include <stdio.h>
int main() {
    int g;
    scanf("%d",&g);
    int a = g*0.1, d = g*0.03;
    printf("%d", g + a - d);
    return 0;
}

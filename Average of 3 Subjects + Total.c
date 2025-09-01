// Problem 23: Average of 3 Subjects + Total
#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int t = a+b+c;
    printf("Total=%d Average=%d", t, t/3);
    return 0;
}

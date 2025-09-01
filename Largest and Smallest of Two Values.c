// Problem 1: Largest and Smallest of Two Values
#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b) printf("Largest=%d Smallest=%d",a,b);
    else printf("Largest=%d Smallest=%d",b,a);
    return 0;
}

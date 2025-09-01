// Problem 5: Net Sales with discount
#include <stdio.h>
int main() {
    int g;
    scanf("%d",&g);
    float d;
    if(g>20000) d=g*0.15;
    else if(g>10000) d=g*0.10;
    else d=g*0.05;
    printf("%.2f",g-d);
    return 0;
}

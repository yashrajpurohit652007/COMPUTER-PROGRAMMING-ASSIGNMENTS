// Problem 3: Net Salary with conditions
#include <stdio.h>
int main() {
    int g;
    scanf("%d",&g);
    float a,d,ns;
    if(g>10000){ a=g*0.1; d=g*0.03; }
    else if(g>5000){ a=g*0.07; d=g*0.02; }
    else { a=0; d=0; }
    ns=g+a-d;
    printf("%.2f",ns);
    return 0;
}

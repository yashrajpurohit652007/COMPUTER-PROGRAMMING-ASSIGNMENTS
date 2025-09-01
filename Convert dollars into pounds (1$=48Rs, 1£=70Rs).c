// Problem 10: Convert dollars into pounds (1$=48Rs, 1£=70Rs)
#include <stdio.h>
int main() {
    int d;
    scanf("%d",&d);
    int rs = d*48;
    printf("%d",rs/70);
    return 0;
}

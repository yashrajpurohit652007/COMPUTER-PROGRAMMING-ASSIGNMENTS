// Problem 6: Marks total, average and grade
#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int t=a+b+c;
    float avg=t/3.0;

    if(a<35 || b<35 || c<35) printf("Fail");
    else if(avg>=70) printf("Total=%d Avg=%.2f Grade=Distinction",t,avg);
    else if(avg>=60) printf("Total=%d Avg=%.2f Grade=First",t,avg);
    else if(avg>=50) printf("Total=%d Avg=%.2f Grade=Second",t,avg);
    else if(avg>=35) printf("Total=%d Avg=%.2f Grade=Third",t,avg);
    else printf("Fail");

    return 0;
}

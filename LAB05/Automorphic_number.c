#include <stdio.h>
#include <math.h>

int main(){
    long long int num, ans, i;
    int modans, count = 1;

    printf("Input n = ");
    scanf("%llu", &num);

    ans = num * num;
    while (fmod(num,pow(10, count)) != num)
        count++;

    printf("n^2 = %llu\n", ans);
    modans = fmod(ans,pow(10,count));

    if (modans == num)
        printf("Yes. %llu is automorphic number.", num);
    else
        printf("No. %llu is not automorphic number.", num);
}
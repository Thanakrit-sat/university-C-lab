#include <stdio.h>

struct vector{
    float x, y, z;
};

int main(){
    struct vector u, v, finish;

    printf("Enter u: ");
    scanf("%f %f %f", &u.x, &u.y, &u.z);

    printf("Enter v: ");
    scanf("%f %f %f", &v.x, &v.y, &v.z);

    finish.x = (u.y*v.z)-(u.z*v.y);
    finish.y = (u.z*v.x)-(u.x*v.z);
    finish.z = (u.x*v.y)-(u.y*v.x);

    printf("u x v = %.1f %.1f %.1f", finish.x, finish.y, finish.z);

    return 0;
}
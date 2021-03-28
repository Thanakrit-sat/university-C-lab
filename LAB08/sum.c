#include <stdio.h>

struct complex {
    float real;
    float image;
};

struct complex add_complex(struct complex c,struct complex d){
    struct complex rt;
    rt.real = c.real+d.real;
    rt.image = c.image+d.image;
    return rt;
}


struct complex multiply_complex(struct complex c, struct complex d){
    struct complex rt;
    rt.real = (c.real*d.real)-(c.image*d.image);
    rt.image = (c.real*d.image)+(c.image*d.real);
    return rt;
}

void print_complex(char x[8],struct complex a){
    if (a.image != 0 && a.real != 0){
        if (a.image < 0)
            printf("%s%.1f - %.1fi\n", x, a.real, a.image*-1);
        else if (a.image > 0)
            printf("%s%.1f + %.1fi\n", x, a.real, a.image);
    }else if (a.image == 0){
        printf("%s%.1f\n", x, a.real);
    }else if (a.real == 0){
        printf("%s%.1fi\n", x, a.image);
    }
}

int main(){
    struct complex C,D,E,F;
    printf("Enter C: ");
    scanf("%f %f", &C.real, &C.image);
    
    printf("Enter D: ");
    scanf("%f %f", &D.real, &D.image);

    E = add_complex(C, D);
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}
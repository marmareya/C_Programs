/*
Author: Mariam Ahmed
Date: 11/2/2020

This program sums complex nymbers. 
*/

#include <stdio.h>

typedef struct complex
{
    double real;
    double img;
} make_complex;

void add_complex(make_complex *a, make_complex *b);
make_complex *d = NULL;

main()
{
    //struct complex c1, c2;
    make_complex c1, c2, c3;
    d = &c3;

    printf("Enter a and b, where a+ib is the 1st complex number/\n");
    scanf("%lf %lf", &c1.real, &c1.img);

    printf("Enter c and d, where c+id is the 2nd complex number.\n");
    scanf("%lf %lf", &c2.real, &c2.img);

    add_complex(&c1, &c2);

    printf("The sum of the complex numbers: %lf + j %lf\n", d->real, d->img);

}

void add_complex(make_complex *a, make_complex *b)
{
    d -> real = a -> real+b -> real;
    (*d).img = (*a).img + (*b).img;
}

/*
void make_complex(struct complex *c, struct complex *b)
{
    //struct complex *d;
    d -> real = c-> real + b -> real;
    d -> img = (*c).img + (*b).img;
}
*/

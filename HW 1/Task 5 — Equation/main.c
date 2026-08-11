#include <stdio.h>
#include <math.h>

int main(){
    int a=3;
    float b=4.5;
    int c=16;
    float d=2.7;
    int e=5;
    float f=25.2;
    float g=2.4;
    int h=6;
    float y;

    y = ((log10(sqrt(pow(a, 2)+pow(b,2)))+sqrt(c*d))/(e*sqrt(f)))-log10(g+h);

    printf("%f", y);

    return 0;
}
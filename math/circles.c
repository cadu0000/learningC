#include <stdio.h>
#include <math.h>

int main(){
    
    const float pi = 3.14;
    double radius;
    double circumference;
    double area;

    printf("\n enter the radius of your circle in meters: ");
    scanf("%lf", &radius);

    circumference = 2*pi*radius;
    area = pi*pow(radius, 2);

    printf("your circle has %lf meters of circuference and %lf meters of area", circumference, area);


    return 0;
}
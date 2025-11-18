#include <stdio.h>
int main() {
    float radius, surface_area, volume;
    const float pi = 3.14159;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    surface_area = 4 * pi * radius * radius;
    printf("Surface Area = %.2f\n", surface_area);
    

    return 0;
}
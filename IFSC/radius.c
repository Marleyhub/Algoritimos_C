#include <stdio.h>

int main() {
    const float PI = 3.14159;
    float radius, area;

    // Ask the user to input the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area
    area = PI * radius * radius;

    // Display the result
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
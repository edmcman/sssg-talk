#include <stdio.h>

void calculateRectangle(int length, int width, int *area, int *perimeter) {
    *area = length * width;
    *perimeter = 2 * (length + width);
}

int main() {
    int length, width, area, perimeter;
    printf("Enter length and width: ");
    scanf("%d %d", &length, &width);
    
    calculateRectangle(length, width, &area, &perimeter);
    printf("Area: %d, Perimeter: %d\n", area, perimeter);
    return 0;
}


#include <stdio.h>

typedef struct {
  int length; int width; int area;  int perimeter;
} rectangle;
void calculateRectangle(rectangle *r) {
    r->area = r->length * r->width;
    r->perimeter = 2 * (r->length + r->width);
}
int main() {
    rectangle rects[NRECT];
    for (int i = 0; i < NRECT; i++) {
        printf("Enter length and width: ");
        scanf("%d %d", &rects[i].length, &rects[i].width);
        calculateRectangle(&rects[i]);
        printf("Area: %d, Perimeter: %d\n", rects[i].area, rects[i].perimeter);
    }
    return 0;
}


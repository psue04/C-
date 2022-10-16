#include <stdio.h>

typedef struct {
    int xpos;
    int ypos;
} Point;

Point getScale2xPoint(const Point* p) {
    Point p_double;
    p_double.xpos = p->xpos*2;
    p_double.ypos = p->ypos*2;
    
    return p_double;
    
}

void swapPoint(Point* p1, Point* p2) {
    Point temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(void) {
    Point p1, p2;
    scanf("%d %d", &p1.xpos, &p1.ypos);
    scanf("%d %d", &p2.xpos, &p2.ypos);
    printf("Calling getScale2xPoint()\n");
    getScale2xPoint(&p1);
    printf("P1: %d %d\n", p1.xpos, p1.ypos);
    getScale2xPoint(&p2);
    printf("P2: %d %d\n", p2.xpos, p2.ypos);
    printf("Calling swapPoint()\n");
    swapPoint(&p1, &p2);
    printf("P1: %d %d\n", p1.xpos, p1.ypos);
    printf("P2: %d %d\n", p2.xpos, p2.ypos);
    
    return 0;
}

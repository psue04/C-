#include <stdio.h>

typedef struct {
    double x;
    double y;
} Point;

typedef struct {
    char name[7];
    Point points[3];
} Person;

int main(void)
{
    
    int i;
    Person persons[3];
    
    for (i = 0; i < 3; i++) {
        scanf("%s %lf %lf %lf %lf %lf %lf", 
        persons[i].name, 
        &persons[i].points[0].x, &persons[i].points[0].y, 
        &persons[i].points[1].x, &persons[i].points[1].y, 
        &persons[i].points[2].x, &persons[i].points[2].y);
    }
    
    for (i = 0; i < 3; i++) {
        printf("%s (%0.lf %0.lf) (%0.lf %0.lf) (%0.lf %0.lf)\n", 
        persons[i].name, 
        persons[i].points[0].x, persons[i].points[0].y, 
        persons[i].points[1].x, persons[i].points[1].y, 
        persons[i].points[2].x, persons[i].points[2].y);
    }

    return 0;
}

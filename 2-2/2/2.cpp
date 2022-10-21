#include <stdio.h>
#include <math.h>

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
    int fX, fY, iPoints;
    int distance;
    int maxDistance = 0;
    
    double near[1000], near2[1000];
    
    Person persons[3];
    
    for (i = 0; i < 3; i++) {
        scanf("%s %lf %lf %lf %lf %lf %lf",
        persons[i].name,
        &persons[i].points[0].x, &persons[i].points[0].y,
        &persons[i].points[1].x, &persons[i].points[1].y,
        &persons[i].points[2].x, &persons[i].points[2].y);
    }
    
    for (int j = 0; j < 3; j++) {
        maxDistance = 0;
        for (i = 0; i < 3; i++) {
            distance = sqrt((persons[j].points[i].x * persons[j].points[i].x) + (persons[j].points[i].y * persons[j].points[i].y));
        
        
        
        if (distance >= maxDistance) {
            maxDistance = distance;
            
            near[j] = persons[j].points[i].x;
            near2[j] = persons[j].points[i].y;
            }
        }
    }
        
    for (i = 0; i < 3; i++) {
        printf("%s (%0.001lf %0.001lf)\n", persons[i].name, near[i], near2[i]);
    }

    return 0;
}

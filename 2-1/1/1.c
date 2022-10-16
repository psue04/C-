#include <stdio.h>

typedef struct Book{
    char name[100];
    int year;
} book;

int main()
{
    book arr[4] = {0};
    int i;
    char* name;
    int year;
    
    for(i = 0; i < 4; i++) {
        scanf("%s", arr[i].name);
        scanf("%d", &arr[i].year);
    }
    
    for (i = 0; i < 4; i++) {
        printf("Name: %s, Published Year: %d", arr[i].name, arr[i].year);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int compute_grade( int points ) {
    int grade = 4;

    if ( points > 85 ) {
        grade = 1;
    } else if ( points > 65 ) {
        grade = 2;
    } else if ( points > 50 ) {
        grade = 3;
    } else {
        grade = 4;
    }

    return grade;
}

void printGrades(int* points, int len) {
    int grade = 0;
    for (int i = 0; i < len; i++) {
        if (points[i] > 100) {
            printf("%s\n", "NA");
        } else if (points[i] < 0) {
            free(points);
            return;
        } else {
            grade = compute_grade(points[i]);
            printf("%d\n", grade);
        }
    }
}

void gradesIO (int pointsEntered, int *pointsAll, int current, int len) {
    int temp;
    // int* points = calloc(0, sizeof(int));
    pointsAll[current] = pointsEntered;

    if  (pointsAll[current] < 0) {
        printGrades(pointsAll, len);
    } else {
        len++;
        pointsAll = realloc(pointsAll, len * sizeof(int));
        
        current++;
        scanf("%d", &temp);
        gradesIO(temp, pointsAll, current, len);
    }
}

int main() {
    // int* points = calloc(0, sizeof(int));
    int* points = malloc(1 * sizeof(int));
    int first;
    int current = 0;
    int len = 1;

    scanf("%d", &first);

    gradesIO(first, points, current, len);
}
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

void print_grades(int* points, int len) {
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
            return;
        }
    }
}

void grades_io(int pointsEntered, int *pointsAll, int current, int len) {
    int temp;
    pointsAll[current] = pointsEntered;

    if  (pointsAll[current] < 0) {
        print_grades(pointsAll, len);
    } else {
        len++;
        pointsAll = realloc(pointsAll, len * sizeof(int));
        
        current++;
        scanf("%d", &temp);
        grades_io(temp, pointsAll, current, len);
    }
}

int user_int_input() {
    int input;
    scanf("%d", &input);
    return input;
}

int main() {
    int* points = (int*) malloc(1 * sizeof(int));
    int inputed = user_int_input();
    int current = 0;
    int len = 0;

    grades_io(inputed, points, current, len);

    return 0;
}
#include <stdio.h>

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

int main() {
    int points = 0;

    int grade = compute_grade( points );

    printf("For points: %d is grade: %d\n", points, grade );

    return 0;
}

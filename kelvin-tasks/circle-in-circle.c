#include <stdio.h>
#include <math.h>

// global vars
float pi = M_PI;

// structures definitions
typedef struct {
  float x;
  float y;
} Point2;

typedef struct {
  float radius;
  Point2 center;
} Circle;

// bool circle_contains_circle( const Circle * self, const Circle * other );
// Circle crcl = { .radius = 4.568787, .center = { .x = 4.54654, .y = 687468 } };
// printf("sizeof(crcl.center) = %d | sizeof(crcl.radius) = %d", sizeof(crcl.center), sizeof(crcl.radius));

int main() {

  return 0;
}
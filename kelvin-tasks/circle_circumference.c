#include <stdio.h>
#include <math.h>

// structures definitions
typedef struct {
  float x;
  float y;
} Point2;

typedef struct {
  float radius;
  Point2 center;
} Circle;

// float user_float_input() {
//     float input;
//     scanf("%f", &input);
//     return input;
// }

float circle_circumference(const Circle self ) {
  float pi = M_PI;
  float r = self.radius;
  Point2 self_point2 = self.center;
  float x = self_point2.x;
  float y = self_point2.y;

  float circumference = 2 * pi * r;
  return circumference;
};

int main() {
  // float r = user_float_input();
  float input_radius, input_x, input_y;
  scanf("%f %f %f", &input_x, &input_y, &input_radius);

  Circle crcl = { .radius = input_radius, .center = { .x = input_x, .y = input_y } };

  float result;
  result = circle_circumference(crcl);

  // printf("sizeof(crcl.center) = %ld", sizeof(crcl.center));
  // printf("\nradius = %.2f", crcl.radius);
  // printf("\nx = %f", crcl.center.x);
  // printf("\ny = %f", crcl.center.y);
  // printf("\nresult = %f", result);

  printf("%.2f\n", result);

  return 0;
}
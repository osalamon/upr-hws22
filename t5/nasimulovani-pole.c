#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
  void **data;
  int capacity;
  int count;
} Array;

void arrpush ( Array * self, void * value ) {
  if ( self->capacity == self->count) {
    self->capacity = self->capacity * 2;
  }

}






int main( int argc, char **argv ) {
  Array a;

  arr_init( &a, 3);
}
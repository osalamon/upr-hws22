#include <stdio.h>

int main() {
  int x = 666;

  printf( "sizeof(x) = %d\n", (sizeof(x)) );


  int *pointr; // inicializace ukazatele bez stanoveni datoveho typu; vybere si sam nahodne, na kterou adresu v pameti ukazuje

  // kdyz chci, aby ten muj pointer ukazoval na nejakou danou promennou, tak do jeho hodnoty priradim adresu teto promenne
  // coz se deje skrze OPERATOR "&", tzv. adresni operator:

  pointr = &x; // == ukazatel ukazuje na stejne misto v pameti jako ta promenna x

  printf("variable x and pointer pointr::: \n");
  printf("&x = %p\n",  &x);
  printf("pointr = %p\n" , pointr);
  printf("\ni.e. both values should be the same");

  return 0;
}
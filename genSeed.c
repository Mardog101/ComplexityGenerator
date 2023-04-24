#include <stdlib.h> 
#include <stdio.h>
#include <time.h>
#include <limits.h>

int main(int argc, char *argv[]) {
  time_t t;

  printf("%d\n", time(&t));

  return 0;
}

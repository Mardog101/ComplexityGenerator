#include <stdlib.h> 
#include <stdio.h>
#include <time.h>
#include <limits.h>

int main(int argc, char *argv[]) {
  int length;
  time_t t;

  scanf("%d", &t);

  //scanf("%d", &length);
  length = atoi(argv[1]);

  printf("%d\n", length);

  srand((unsigned) t);
  int rnd;

  for (int i = 0; i < length; i++) {
    rnd = rand() % INT_MAX;

    if (rand() % 2) {
      rnd *= -1;
    }

    printf("%d ", rnd);
  }

  printf("\n");

  return 0;
}

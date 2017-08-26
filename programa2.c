#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
  printf("Hello world! %d\n", getpid());
  exit(0);
}

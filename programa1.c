#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argsn, char** args) {
  int p = fork();
  if (p == 0) {
    execv("./programa2", args);
  }
  sleep(3);
  printf("Ive finished %d\n", p);
}

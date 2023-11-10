#include <stdio.h>

#include <stdlib.h>

#include <main.h>

void get_cmd() {
  // get command from user
  printf("#cisfun$\t");
  fgets(cmd, MAX_SIZE_CMD, stdin);
  // remove trailing newline
  if ((strlen(cmd) > 0) && (cmd[strlen(cmd) - 1] == '\n'))
    cmd[strlen(cmd) - 1] = '\0';
  //printf("%s\n", cmd);
}

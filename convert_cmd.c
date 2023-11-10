#include <stdio.h>

#include <stdlib.h>

#include <main.h>

void convert_cmd() {
  // split string into argv
  char * ptr;
  i = 0;
  ptr = strtok(cmd, " ");
  while (ptr != NULL) {
    //printf("%s\n", ptr);
    argv[i] = ptr;
    i++;
    ptr = strtok(NULL, " ");
  }

  // check for "&"
  if (!strcmp("&", argv[i - 1])) {
    argv[i - 1] = NULL;
    argv[i] = "&";
  } else {
    argv[i] = NULL;
  }

  if (!strcmp("cd", argv[0]) && !strcmp("cd", argv[i - 1])) {
    //chdir("argv[i-1]");
    chdir(getenv("HOME"));
  }
  if (!strcmp("..", argv[i - 1]))
    chdir("..");
  /*if (!strcmp("cd", argv[0]))
	{
	mkdir(argv[i-1]); //Makes directory for account

    chdir(mkdir(argv[i-1]));}*/
}

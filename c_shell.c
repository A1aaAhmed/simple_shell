#include <stdio.h>

#include <stdlib.h>

#include <main.h>

void c_shell() {
  while (1) {
    // get the command from user
    get_cmd();

    // bypass empty commands
    //if the command is empty get the cmd from user again
    if (!strcmp("", cmd)) continue;

    // check for "exit" command
    if (!strcmp("exit", cmd)) break;

    // fit the command into *argv[]
    convert_cmd();

    // fork and execute the command
    pid = fork();
    if (pid == -1) {
      printf("failed to create a child\n");
    } else if (pid == 0) {
      // printf("hello from child\n");
      // execute a command
      execvp(argv[0], argv);
    } else {
      // printf("hello from parent\n");
      // wait for the command to finish if "&" is not present
      waitpid(pid, & stat_loc, WUNTRACED);
    }
  }

}

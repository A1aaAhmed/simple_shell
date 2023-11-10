#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/types.h>

#include <sys/wait.h>

#include <unistd.h>

#include <signal.h>

#define MAX_SIZE_CMD 256
#define MAX_SIZE_ARG 16

char cmd[MAX_SIZE_CMD]; // string holder for the command
char * argv[MAX_SIZE_ARG]; // an array for command and arguments
pid_t pid; // global variable for the child process ID
char i; // global for loop counter
int stat_loc;
void get_cmd(); // get command string from the user
void convert_cmd(); // convert the command string to the required format by execvp()
void c_shell(); // to start the shell
void log_handle(int sig); // signal handler to add log statements

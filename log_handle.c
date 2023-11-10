#include <stdio.h>

#include <stdlib.h>

#include <main.h>

void log_handle(int sig) {
  //printf("[LOG] child proccess terminated.\n");
  //printf("%d\n" , sig);
  FILE * pFile;
  pFile = fopen("log.txt", "a");
  if (pFile == NULL) perror("Error opening file.");
  else fprintf(pFile, "[LOG] child proccess terminated.\n");
  fclose(pFile);
}

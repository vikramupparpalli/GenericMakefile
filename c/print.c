#include <stdio.h>
#include <string.h>
#include "print.h"

static char actualMsg[80];

void printEntry(void)
{
  printf("Entry Logged\n");
}

void printProcessing(void)
{
  printf("Processing . . .\n");
}

void printExit(void)
{
  printf("Exit Logged\n");
}

void printMessage(char * msg)
{
  strcat(actualMsg, msg);
  strcat(actualMsg, "\n");
  printf(actualMsg);
}

#include "print.h"

int main(int argc, char* argv[])
{
  // suppress warnings
  (void)argc; (void)argv;

  printEntry();
  printProcessing();
  printMessage("helloWorld");
  printExit();

  return 0;
}

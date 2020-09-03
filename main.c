// Author: Christian Jones cpj5199@psu.edu
// Collaborator: Jeannemarie Milmerstadt jkm6181@psu.edu
// Collaborator: Emily Abert ela5186@psu.edu
// Collaborator: Claudio Tapia-Manon cbt5311@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *temp = readline("Enter temperature in celsius: ");
  double c = atof(temp);
  double f = (c*1.8)+32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", c,f);
  return 0;
  }
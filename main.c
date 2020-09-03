// Author: Christian Jones cpj5199@psu.edu
// Collaborator: Jeannemarie Milmerstadt jkm6181@psu.edu
// Collaborator: Emily Abert ela5186@psu.edu
// Collaborator: Claudio Tapia-Manon cbt5311@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *temp = readline("Enter the Temperature in Celsius: ");
  double c = atof(temp);
  double f = (c*1.8)+32;
  printf("%f° in Celsius is equivalant to %f° in Fahrenheit.\n", c,f);
  return 0;
  }
#include <stdio.h>
#include <stdlib.h>


float ftoc(float fahrenheit);
float ctof(float celcius);

float ctof(float celcius){
  float farenheit = (celcius * 9/5) + 32;
  return farenheit;
}

float ftoc(float fahrenheit){
  float celcius = (fahrenheit - 32) * 5/9;
  return celcius;
}

int main(void){
  
  printf("Temperature converter menu:\n");
  printf("1. Fahrenheit to Celcius\n");
  printf("2. Celcius to Fahrenheit\n");
  printf("0.Exit\n");
  int choice;
  
  if(scanf("%d", &choice) != 1){
    printf("Invalid input, please try again.\n");
    return 1;
  } 
  
  switch(choice){
    case 1:
      float fahrenheit;
      scanf("%f", &fahrenheit);
      printf("%f\n", ftoc(fahrenheit));
      break;
    case 2:
      float celcius;
      scanf("%f", &celcius);
      printf("%f", ctof(celcius));
      break;
    case 0:
      exit(EXIT_SUCCESS);
      break;
    default:
      printf("invalid input. try again.\n");
  }

  return 0;
}

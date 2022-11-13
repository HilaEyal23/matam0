#include <stdio.h>

#define NOT_POWER_OF_TWO -2000

enum {false, true};
//===============================================================================

/** Calculates the exponent of 2 which equals the number. Returns negetive number if the number isn't a power of two **/
int calculateExponent(int number);

//===============================================================================

int main()
{
  printf("Enter size of input:\n");
  int inputSize = {0};
  if(!scanf("%d", &inputSize) || inputSize <= 0)
  {
    printf("Invalid size\n");
    return 0;
  }
  printf("Enter numbers:\n");
  int numbersArr[inputSize];
  for(int i = 0; i < inputSize; i++)
    {
      if(!scanf("%d", &numbersArr[i]))
      {
        printf("Invalid number\n");
        return 0;
      }
    }
  int sum = 0;
  int currPower = 0;
  for(int i = 0; i < inputSize; i++)
    {
      currPower = calculateExponent(numbersArr[i]);
      if(currPower >= 0)
      {
        printf("The number %d is a power of 2: %d = 2^%d\n", numbersArr[i], numbersArr[i], currPower);
        sum += currPower;
      }
    }
printf("Total exponent sum is %d\n", sum);

  return 0;
}



int calculateExponent(int number)
{
  if(number == 1)
    return 0;
  if(number < 2 || (number % 2 != 0))
    return NOT_POWER_OF_TWO;
  return calculateExponent(number/2) + 1;
}



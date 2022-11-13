#include <stdio.h>
#include <string.h> // for strlen()
#include <stdlib.h> // for atoi()

#define NOT_POWER_OF_TWO -2000

enum {false, true};

int calculate_exponent(int number);
int is_int(char str[]);

int main()
{
  printf("Enter size of input:\n");
  int input_size = {0};
  char str[50];
  scanf("%s", str);
  input_size = atoi(str);
  if(!is_int(str) || input_size <= 0)
  {
    printf("Invalid size\n");
    return 0;
  }
  input_size = atoi(str);

  printf("Enter numbers:\n");
  int numbers_arr[input_size];
  int i = 0;
  for(i = 0; i < input_size; i++)
    {
      if(!scanf("%d", &numbers_arr[i]))
      {
        printf("Invalid number\n");
        return 0;
      }
    }
  int sum = 0;
  int currPower = 0;
  for(i = 0; i < input_size; i++)
    {
      currPower = calculate_exponent(numbers_arr[i]);
      if(currPower >= 0)
      {
        printf("The number %d is a power of 2: %d = 2^%d\n", numbers_arr[i], numbers_arr[i], currPower);
        sum += currPower;
      }
    }
printf("Total exponent sum is %d\n", sum);

  return 0;
}



int calculate_exponent(int number)
{
  //if(number == 2)
    //return 1;
  if(number == 1)
    return 0;
  if(number < 2 || (number % 2 != 0))
    return NOT_POWER_OF_TWO;
  return calculate_exponent(number/2) + 1;
}

int is_int(char str[])
{
  int len = strlen(str);
  int i = 0;
  for(i = 0; i < len; i++)
    {
      if(!('1' <= str[i] && str[i] <= '9'))
      {
        //if(!(str[i] == '\n' || str[i] == EOF || str[i] == '\0')) // The least character is '\n' when using the tesminal
          return false;
      }
    }
  return true;
}


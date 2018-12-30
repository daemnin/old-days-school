
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

int main()
{
  system("clear");

  // Variable declaration/initialization
  int inputNumber, secretNumber, min = 1, max = 100, attempts = 1;
  bool exit = false;

  // Get a random number between min and max values
  srand(time(NULL));
  secretNumber = rand() % max + 1;

  // Guest loop
  do
  {
    printf("Guest a secret number between %d and %d: ", min, max);
    scanf("%d", &inputNumber);
    if (inputNumber == secretNumber)
    {
      printf("You find the secret number %d after %d attempt(s)!\n\n", secretNumber, attempts);
      exit = true;
    }
    else
    {
      if (inputNumber < secretNumber)
      {
        min = inputNumber;
      }
      else if (inputNumber > secretNumber)
      {
        max = inputNumber;
      }
      attempts++;
    }
  } while (!exit);
}

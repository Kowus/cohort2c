#include <stdio.h>

int main(int argc, char const *argv[])
{
  int guess;
  int number = 10;
  // A computer takes input, does some processing, gives output
  // Sending Output
  printf("Enter a number: ");
  // Taking Input
  scanf("%d", &guess);
  // printf("Your number is: %d", guess);
  if (guess == number)
  {
    printf("You are right!");
  }
  else
  {
    printf("You are wrong");
  }

  return 0;
}

// gcc -o eg1 eg1.c && ./eg1
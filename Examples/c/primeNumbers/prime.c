
// This program will run on a Intel(R) Xeon(R) CPU E5-2620 v3 @ 2.40GHz
// in 2m22.024s

#include <stdio.h>

int is_a_prime(int number)
{

  int isPrime = 1;

  int  i;
  for (i=2; i<number; i++)
  {
    if (number % i == 0 )
    {
     
      isPrime = 0; 
      break;
    }

  }

  return isPrime;
}

int main ()
{

  int i;
  for (i=1; i<1000000; i++)

  {
    if (is_a_prime(i)) printf("%i is a prime\n", i);

  } 

  return 0;


}


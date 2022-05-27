#include <stdio.h>
#include <stdlib.h>
/*
// find all prime number from 3-100
there will be no input to the program
the output will be each prime number separated by a space on a single line
need to create an array that will store each prime number as it is generated
can hard-code the first prime numbers (2 and 3) in the primes array
should utilize loops to only fine prime number up 10 and a loop to print out the primes array;
*/
int main()
{
    int primeNumber[50] = {2};
    int lastPrimeNumberIndex = 0;
    int numberOfPrimeNumber = 1;

    // for loop to find prime number
    for(int i = 3; i < 100; i+=2){
            int count = 0;
            for(int j = 0; j <= numberOfPrimeNumber; j++){
                if(count == numberOfPrimeNumber){
                    primeNumber[numberOfPrimeNumber] = i;
                    numberOfPrimeNumber++;
                    break;
                }
                if(i % primeNumber[j] == 0){
                        break;
                }else{
                    count++;
                }
            }
    }

    // for loop to print out the prime number
    for(int i = 0; i < numberOfPrimeNumber; i++){
        printf("%d\n", primeNumber[i]);
    }
   // printf("The number of prime number is : %d", numberOfPrimeNumber);
    return 0;
}

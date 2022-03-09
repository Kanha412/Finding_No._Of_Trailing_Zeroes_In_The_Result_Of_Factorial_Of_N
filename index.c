// Trailing Zeroes in Factorial :- After result of factorial of N, the zeroes at the end are called trailing zeroes in factorial. Since, result of factorial have huge no. of digits, therefore there will be an overflowing. Hence, we use different style to solve this problem.


#include<stdio.h>

int TrailingZero(int N)
{
    // Initialize count with 0.
    int count = 0;
    // We will run for loop from powers of 5 to N, because we will only get a trailing zero when 5 is multiplied by any even number.
    for(int i=5; i<=N; i=i*5)
    {
        count = count + (N/i);                // (N/i) will result in number of multiples of 5.
    }
    return count;
}

int main()
{
    int N;
    printf("Enter N ");
    scanf("%i",&N);
    printf("Trailing Zeroes in the result of %d! is '%d' \n", N, TrailingZero(N));
    return 0;
}

// Time Complexity of this program is log(N).

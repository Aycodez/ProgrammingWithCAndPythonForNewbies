// Programming With Python And C For Newbies Day 2(Data types and variables in C)

// Things covered in this class:
// 1. Data types in C 
// 2. Variables and its syntax in C
// 3. Good and bad syntax
// 4. Operations on what we learnt


// Day 2 codes

// Finding the sum of two numbers
# include <stdio.h>

int main()
{
    int x = 6;
    int y = 3;
    int sum = x + y;
    int result = sum - 2;
    printf("%i",result);
}
// Output: 7

// Converting the price of gasoline to litres
# include <stdio.h>

int main()
{
    float one_liter = 630.0;
    float price_to_buy = 5000.0;
    float to_litres = price_to_buy / one_liter;
    printf("%f", to_litres);
}
// Output: 7.936508

// converting 12 Minutes,23 seconds to seconds
# include <stdio.h>

int main()
{
    int one_minute = 60;
    int to_seconds = 12 * one_minute + 23;

    printf("%i seconds: ",to_seconds);

}
// Output: 743 seconds




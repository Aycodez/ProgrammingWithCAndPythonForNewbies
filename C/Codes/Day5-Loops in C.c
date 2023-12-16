// Programming With Python And C For Newbies Day 4(Loops in C)

// Things covered in this class:
// 1.Loops in C
// 2.For loops
// 3.while looops

// Day  5 codes

// printing patterns

#include <stdio.h>

int main()
{
    int stars;
    printf("How many");
    scanf("%i", &stars);

    while (stars > 0)
    {
        for ( int star = 0; star < stars; star++)
        {
            printf("*");
        }
        printf("\n");
        stars -= 1;
        
    }
}


// user validation with do while loop

# include <stdio.h>

int main()
{
    int number;
    do 
    {
        printf("Enter number: ");
        scanf("%i",&number);
    }
    while(number < 1);
}
   
// printing even numbers 

# include <stdio.h>

int main()
{
    int limit;
    printf("Enter limit to stop at");
    scanf("%i",&limit);

    for (int count = 0; count < limit; count+=1)
    {
        if (count % 2 == 0 )
        {
            printf("%i,",count);
        }
    }
   
}

// Multiplication table

# include <stdio.h>

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%i,",&number);

    for (int i = 1; i <=12; i ++)
    {
        int result = number * i;
        printf("%i x %i = %i\n",number,i,result);
    }
}

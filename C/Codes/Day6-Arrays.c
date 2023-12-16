// Programming With Python And C For Newbies Day (Arrays)

// Things covered in this class:
// 1.Arrays in C
// 2.Operations on arrays
// 3.Comments

// Day  6 codes

# include <stdio.h>

int main()
{
    int size;
    printf("Enter size of array");
    scanf("%i",&size);

    int numbers[size];
    //insering elements into the array
    for (int i = 0; i < size; i ++)
    {
       
        printf("Enter a number to put in array: ");
        scanf("%i", &numbers[i]);
        
    }

    // printing the elements in the array

    for (int j = 0; j < size;j++)
    {
        printf("%i",numbers[j]);
    }
}

// minimum value in an array

# include <stdio.h>

int main()
{
    int numbers[8] = {2,3,6,1,7,8,4,5};  
    int minimum = numbers[0];  // setting the min value to the first element in the array
    
    for (int i = 0; i < 8; i ++)
    {
        // changing the min value to any smaller value found in the array if any
        if (numbers[i] < minimum)
        {
            minimum = numbers[i];
        }
    }

    printf("Mininum value: %i ",minimum);

}

// Searching operation in an array

# include <stdio.h>

int main()
{
    int numbers[8] = {3,5,2,7,34,12,32,87};  
    int num_to_search;
    printf("Enter number to search: ");
    scanf("%i",&num_to_search);
    
    for (int i = 0; i < 8; i ++)
    {
       if (numbers[i] == num_to_search)
       {
            printf("Found at index %i", i);
            return 0;
            
       }
    }

    printf("Not found!!!");
    return 1;

}

// Sum of the element in an arry

# include <stdio.h>

int main()
{
    int array[7] = {3,5,2,7,4,1,3};
    int sum = 0;

    for (int element = 0; element < 7; element ++)
    {
        sum = sum + array[element];
    }

    printf("Sum of the array: %i",sum);
}


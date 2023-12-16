// Programming With Python And C For Newbies Day 3(Conditional statements in C)

// Things covered in this class:
// 1.Conditional statements
// 2.if,else if and else statements
// 3.Operations using Conditional statements



// Day 3 codes

// Password checker
# include <stdio.h>
int main()
{
    int password = 1234;
    int user_password = 12234;

    if (password == user_password)
    {
        printf("You've successfully logged in to your phone");

    }
    else
    {
        printf("Invalid password");
    }
}
// Output: Invalid password

// Guess game
# include <stdio.h>

int main()
{
    int guess = 4;
    int user_guess = 4;
    
    if (guess == user_guess)
    {
        printf("You won!!!");
    }
    else
    {
        printf("You lost!!!");
    }
}
// Output: You won

// Music player

# include <stdio.h>

int main()
{
    int user_input = 1;

    if (user_input == 1)
    {
        printf("Playing the song");

    }
    else if ( user_input == 2)
    {
        printf("Song paused");

    }
    else if ( user_input == 3)
    {
        printf("Playing the next song");
        
    }
    else if ( user_input == 4)
    {
        printf("Playing the previous song");
        
    }
    else 
    {
        printf("Wrong input");
        
    }
}  
// Output: Playing the song 

// Comparison of numbers 
# include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    if ( a > b)
    {
        printf("A is greater than B");
    }
    else if(b > a)
    {
        printf("B is greater than A");
    }
    else
    {
        printf("A is equal to B");
    }
}
// Output: B is greater than A

 

 



// Programming With Python And C For Newbies Day 4(User input Validation)

// Things covered in this class:
// 1.User input and validation
// 2.scanf function

// Day 4 codes

// getting user input for addition operation
# include <stdio.h>

int main()
{
    float x;
    float y;
    printf("Enter X: ");
    scanf("%f %f",&x, &y);
    float result = x + y;
    printf("%.3f",result);
}

// getting the user's name and surname 
# include <stdio.h>

int main()
{
   char name[10];
   char surname[10];

   printf("Your name and surname: ");
   scanf("%s %s",&name,&surname);
   printf("%s %s", name, surname);
}

// little AI robot
# include <stdio.h>
# include <string.h>


int main()
{
   char user_response[5];

   printf("Hey there! I'm an AI and i work in this restaurant. Tell me your gender so i can show you too the restroom\n");
   scanf("%s",&user_response);

   if (strcmp(user_response, "Male") == 0)
   {
        printf("Go to you right!");
   }

   else if (strcmp(user_response, "Female") == 0)
   {
        printf("Go to your left");
   }
   else
   {
        printf("Couldnt hear you. Kindly repeat what you just said!!");
   }
}


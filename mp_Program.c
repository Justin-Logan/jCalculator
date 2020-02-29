#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = get_string("Hello, What's your name?\n");


    string a = get_string("What would you like to do %s?\n", name);

string add;
add = " add ";

    //if (a == "add"){
      if (strncmp (a, add, 3) == 1){

        printf("What's the two numbers that you'd like to add?\n");
}
   // else {
     //     printf("Hello, %s\n", name); 
                                    }
//}

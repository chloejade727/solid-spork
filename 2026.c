#include <stdio.h>
int main () {
   // while loop example //
  /*  int i, s;
    i = 1;
    s = 0;
while (i <= 10) 
    {
        s = s + i; i++; 
        printf("%d %d\n", i, s);
    } */

// do while loop example // 
/* int i, s;
i = 1;
s = 0;
do {
    i = i + 1;
    s = s + i;
    printf("%d %d \n", i, s);
}
while (i <= 10); */
// for loop example 
/* int i, s;
for (i = 1, s = 0; i <= 10; i++)
{s = s + i;
printf("%d %d \n", i, s);

} */ 
// so this for loop lets users input a value till i is i guess 
// equivalent to ten from there users can choose between negative and or postive values 
// if they choose negative using an if statemnts the looop automatically breaks out 
// if they choose a postiive the variable s is added to x and then that new numbers is stored in s
// i choose then to print the iternation i variable and new s everytime the loop is ran 
// boom
int i, s;
for ( i = 0, s = 0; i < 10; i++){
    int x; 
    printf("Enter a number\n ");
    scanf("%d", &x);
        if (x < 0){  
         printf("Thats a negative!\n");\
        break;
    }
    s += x; // this adds s to x and stores the result in s
    printf("%d %d\n", i, s);
    printf("That's positive keep going!\n");
}
    return 0;
}
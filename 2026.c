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
int i, s;
for (i = 1, s = 0; i <= 10; i++)
{s = s + i;
printf("%d %d \n", i, s);

}

    return 0;
}
#include <stdio.h>
int main (){
int n = 1;
int n1 = ++n; // prefix changes both 
int n2 = n1++; // suffix saves the orgingal value into a new variable and increments the original 


printf("%d %d %d\n", n2, n1, n);

return 0;
}
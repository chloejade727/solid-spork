// hi //
#include <stdio.h>
int main() {
    printf("Enter a Height and Base:");
   float height, base;
   scanf("%f %f", &height, &base);
   float area = (height * base)/2;
   printf("The height is: %f\n", height);
   printf("The base is: %f\n", base);
   printf("The area is: %f\n", area);

   
    return 0;
}
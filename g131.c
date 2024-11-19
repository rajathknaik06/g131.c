/*Create a program that takes person A's name and age as input, along with the age of person B. Calculate and display both persons' ages ten years from now and the age difference between them. 



Implement pointer arithmetic concept in the code.

Input format :
The first line of input consists of person A's name (a string).

The second line of input consists of person A's current age (an integer).

The third line of input consists of person B's current age (an integer).

Output format :
The first line of output displays an integer representing Person A's age after 10 years.

The second line of output displays an integer representing Person B's age after 10 years.

The third line of output displays an integer representing the age difference between two persons after 10 years.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50];
    int age;

    scanf("%s %d", name, &age);

    char *ptr_name = name;
    int *ptr_age = &age;

    int B;
    scanf("%d", &B);

    int A1 = *ptr_age + 10;
    int B1 = B + 10;

    int difference = abs(B - *ptr_age);

    printf("%d\n", A1);
    printf("%d\n", B1);
    printf("%d\n", difference);

    return 0;
}

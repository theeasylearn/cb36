// input -> num1, num2 -> check if both are same 
// same -> t -> print "Both are same "
// same -> f -> print "Both are not same "

#include <stdio.h>
void main() {
    int num1, num2;

    printf("Enter num1 : ");
    scanf("%d", &num1);

    printf("Enter num2 : ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("Both are same ");
    }

    if (num1 != num2) {
        printf("Both are not same ");
    }
}
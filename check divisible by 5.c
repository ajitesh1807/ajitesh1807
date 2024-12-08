#include <stdio.h>
int isDivisibleBy5(int num) {
    return (num % 5 == 0);}
int main() {int num;
    printf("Enter a number: ");
    scanf("%d", &num);
if (isDivisibleBy5(num)) {
        printf("%d is divisible by 5.\n", num);
    } else {printf("%d is not divisible by 5.\n", num);}
return 0;}

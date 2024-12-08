#include <stdio.h>
int isComposite(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not composite
    }for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 1; // Number is composite if a factor is found
        }
    }return 0; // Number is not composite if no factors are found
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isComposite(num)) {
        printf("%d is a composite number.\n", num);
    } else {
        printf("%d is not a composite number.\n", num);
    }return 0;
}
 


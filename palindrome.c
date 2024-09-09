#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int num, reversed_num = 0, remainder;

    printf("Enter a string or a number: ");
    scanf("%s", str);

    // Check if input is a number
    if (str[0] >= '0' && str[0] <= '9') {
        num = atoi(str);
        int original_num = num;

        // Reverse the number
        while (num != 0) {
            remainder = num % 10;
            reversed_num = reversed_num * 10 + remainder;
            num /= 10;
        }

        if (original_num == reversed_num) {
            printf("%d is a palindrome number\n", original_num);
        } else {
            printf("%d is not a palindrome number\n", original_num);
         }
         
    } else {
        // Check if the string is a palindrome
        int length = strlen(str);
        int i;
        for (i = 0; i < length / 2; i++) {
            if (str[i] != str[length - i - 1]) {
                printf("%s is not a palindrome string\n", str);
                break;
            }
        }
        if (i == length / 2) {
            printf("%s is a palindrome string\n", str);
        }
    }

    return 0;
}



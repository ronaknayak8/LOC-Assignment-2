#include <stdio.h>

int isArmstrong(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    }
    else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}

int isArmstrong(int num)
{
  
 int digit, cube; 
    int original = num;
    int sum = 0;
    while (original != 0) {
         digit = original % 10;
         cube = digit * digit * digit;
        sum = sum+ cube;
        original=original/ 10;
    }
    return (sum == num);
}

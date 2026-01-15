#include <stdio.h>

int main() {
    int numbers[5];
    int temp;

    for (int i = 0; i < 5; i++) {
        printf("Enter integer elements: \n");
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
            
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Elements of array in sorted ascending order: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}


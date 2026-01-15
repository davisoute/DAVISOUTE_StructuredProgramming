#include <stdio.h>

int main(){
    int numbers[3];
    for (int i = 0; i < 3; i++)
    {   printf("Enter integer elements: \n");
        scanf("%d", &numbers[i]);
    }

    printf("Values stored in the array are: %d %d %d\n",numbers[0], numbers[1], numbers[2]);

    printf("Values stored in the array in reverse are: \n");
    for (int j = 2; j >= 0; j--)
    {
       printf("%d ", numbers[j]);
    }
  
    
}

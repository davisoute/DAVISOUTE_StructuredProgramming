#include <stdio.h>

int main(){
    int num[4];
    int count;

    for (int i = 0; i < 4; i++)
    {
        printf("Enter integer elements: \n");
        scanf("%d", &num[i]);
    }

    printf("The unique elements found in the array are: ");
    for (int i = 0; i < 4; i++)
    {
        count = 0;
        for (int j = 0; j < 4; j++)
        {
            if(num[i] == num[j]){
                count ++;
            }
        
        }
        
        if(count == 1){
            printf("%d ", num[i]);
        }
    }

    return 0;
    
    
}

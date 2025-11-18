#include <stdio.h>
#include <string.h>
int main() {
    char name1[100], name2[100];
    int totalLength;

    printf("Enter your FIRST NAME: ");
    scanf("%s", name1);

    printf("Enter your LAST NAME: ");
    scanf("%s", name2);

    totalLength = strlen(name1) + strlen(name2);

    printf("Hello, %s %s! Your name has %d characters.\n", name1, name2, totalLength);

    return 0;


}
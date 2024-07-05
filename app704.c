#include <stdio.h>
void main()
{
    char grade;
    printf("Please enter Grade "); //A,B,C,D
    scanf("%c", &grade);
    switch (grade){
    case 'A':
        printf("80-100 grade %c\n", grade);
        break;
    case 'B':
        printf("70-79 grade %c\n", grade);
        break;
    case 'C':
        printf("60-69 grade %c\n", grade);
        break;
    case 'D':
        printf("50-59 grade %c\n", grade);
        break;
    default:
        printf("0-49 Grade F = %c\n", grade);
    
    }
}
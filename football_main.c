#include "football.h"
#include <stdio.h>

int main(int argc, char *argv[]) {

    int score;

    while (1)
    {
        printf("Enter 0 or 1 to STOP\n");
        printf("Enter the NFL Score: ");
        
        if (scanf("%d", &score) != 1)
        {
            printf("[Invalid Input]\n");
            while (getchar() != '\n');
        }
        else if (score == 0 || score == 1)
        {
            break;
        }
        else if (score < 0)
        {
            printf("[Invalid Input: Negative]\n");
        }
        else
        {
            print_combinations(score);
        }

    }
    return 0;
}
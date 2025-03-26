#include "football.h"
#include <stdio.h>

// Return the number of possible combinations to add up to `points`
int count_combinations(int points)
{
    int count = 0;

    // Basically it loops through every possible score type (decided by how many times it can appear in points (max/points)) and checks if it equals points

    for (int tdp2 = 0; tdp2 <= points / 8; tdp2++)
    {
        for (int tdp1 = 0; tdp1 <= points / 7; tdp1++)
        {
            for (int td = 0; td <= points / 6; td++)
            {
                for (int fg = 0; fg <= points / 3; fg++)
                {
                    for (int sf = 0; sf <= points / 2; sf++)
                    {
                        if ( (tdp2 * 8) + (tdp1 * 7) + (td * 6) + (fg * 3) + (sf * 2) == points )
                        {
                            count++;
                        }
                    }
                }
            }
        }
    }

    return count;
}

// Print a formatted table of all possible combinations that add up to `points`
void print_combinations(int points)
{
    printf("\nPossible combinations of scoring plays if a team’s score is %d:\n", points);

    for (int tdp2 = 0; tdp2 <= points / 8; tdp2++)
    {
        for (int tdp1 = 0; tdp1 <= points / 7; tdp1++)
        {
            for (int td = 0; td <= points / 6; td++)
            {
                for (int fg = 0; fg <= points / 3; fg++)
                {
                    for (int sf = 0; sf <= points / 2; sf++)
                    {
                        if ( ((tdp2 * 8) + (tdp1 * 7) + (td * 6) + (fg * 3) + (sf * 2)) == points )
                        {
                            printf("\n%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety", tdp2, tdp1, td, fg, sf);
                        }
                    }
                }
            }
        }
    }
    printf("\n\n");
}
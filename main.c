#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    int dice_rolls[100];
    int dice_values[6];
    int sum = 0;

    for(int i = 0; i < 100; i++) {
        dice_rolls[i] = (rand() % 6) + 1;
    }
    
    for(int i = 0; i < 100; i++) {
        if (dice_rolls[i] == 1) {
            dice_values[0]++;
        }
        if (dice_rolls[i] == 2) {
            dice_values[1]++;
        }
        if (dice_rolls[i] == 3) {
            dice_values[2] ++;
        }
        if (dice_rolls[i] == 4) {
            dice_values[3]++;
        }
        if (dice_rolls[i] == 5) {
            dice_values[4]++;
        }
        if (dice_rolls[i] == 6) {
            dice_values[5]++;
        }

        sum += dice_rolls[i];
    }
    
    printf("%d\n", dice_values[0]);
    printf("%d\n", dice_values[1]);
    printf("%d\n", dice_values[2]); // Won't print properly. If set to single int it works (int threes = 0).
    printf("%d\n", dice_values[3]);
    printf("%d\n", dice_values[4]);
    printf("%d\n", dice_values[5]); 
    printf("%d\n", sum);
    printf("%.1f", sum/100.0);

    return 0;
}

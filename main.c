#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    int dice_rolls[100];
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int sum = 0;

    for(int i = 0; i < 100; i++) {
        dice_rolls[i] = (rand() % 6) + 1;
    }
    
    for(int i = 0; i < 100; i++) {
        if (dice_rolls[i] == 1) {
            one++;
        }
        if (dice_rolls[i] == 2) {
            two++;
        }
        if (dice_rolls[i] == 3) {
            three++;
        }
        if (dice_rolls[i] == 4) {
            four++;
        }
        if (dice_rolls[i] == 5) {
            five++;
        }
        if (dice_rolls[i] == 6) {
            six++;
        }

        sum += dice_rolls[i];
    }
    
    printf("%d\n", one);
    printf("%d\n", two);
    printf("%d\n", three);
    printf("%d\n", four);
    printf("%d\n", five);
    printf("%d\n", six); 
    printf("%d\n", sum);
    printf("%.1f", sum/100.0);

    return 0;
}

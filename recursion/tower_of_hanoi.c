#include <stdio.h>


// Time Complexity : O(2^n)
void tower_of_hanoi(int n, char start, char end, char middle)
{
    if (n == 1)
    {
        printf("(%c,%c)\n", start, end);
        return;
    }
    tower_of_hanoi(n - 1, start, middle, end);
    printf("(%c,%c)\n", start, end);
    tower_of_hanoi(n - 1, middle, end, start);
}

int main()
{
    tower_of_hanoi(3`, 'A', 'C', 'B');
    return 0;
}
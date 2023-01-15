#include <stdio.h>

void towerofHanoi(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        printf(" Move disc 1 form rod %c to rod %c\n", from, to);
        return;
    }
    towerofHanoi(n - 1,from, aux, to);
    printf("Move disc %d from rod %c to rod %c \n", n ,from, to);
    towerofHanoi(n - 1, aux, to, from);
}
int main()
{
    int n = 2;
    towerofHanoi(n, 'A', 'C', 'B');
    return 0;
}
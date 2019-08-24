#include <stdio.h>

#define UNUSED(x) (void)x


int main(int argc, char const *argv[])
{
    unsigned char name[] = {1, 2, 3, 'a', 'b', 'c'};
    printf("name:%x\n", name[3]);
    return 0;
}

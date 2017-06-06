#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0;i<3;i++)
    {
        int sum = 0;
        for(int i=0;i<4;i++)
        {
            int num;
            scanf("%d",&num);
            sum += num;
        }

        switch(sum)
        {
        case 0:
            printf("D\n");
            break;
        case 1:
            printf("C\n");
            break;
        case 2:
            printf("B\n");
            break;
        case 3:
            printf("A\n");
            break;
        case 4:
            printf("E\n");
            break;
        }
    }
    return 0;
}

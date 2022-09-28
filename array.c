#include <stdio.h>
int main()
{
    int i, j;
    int sam[2][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d%d number in array\n", i, j);
            scanf("%d",&sam[i][j]);
        }
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",sam[i][j]);
        
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
 
    bool is_unit = true;

    if (r == c)
    {

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    // diagonal position
                    if(a[i][j]!= 1){
                        is_unit=false;
                    }
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        is_unit=false;
                    }
                }
            }
        }
        if(is_unit==true){
            printf("This is a unit matrix");
        }
        
        else
        {
            printf("This is not a unit matrix\n");
        }
    }
    else
    {
        printf("Its not a unit matrix");
    }

    return 0;
}

// Example of primary diagonal matrix
/*
3 3
1 0 0
0 1 0
0 0 1
*/
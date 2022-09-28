#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int n;
    // printf("Enter size of aray  you wan't creat in heap using malloc\n");
    // scanf("%d", &n);
    // int *ptr;
    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the at array adress %d element in array\n", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf(" The value of %d is %d\n", i, ptr[i]);
    // }
    // free(ptr);
    // -----------------------------------------
    int n;
    printf("Enter size of aray  you wan't creat in heap using calloc\n");
    scanf("%d",&n);
    int *ptr;
        ptr = (int *)calloc(n, sizeof(int));
    for (int  i = 0; i < n; i++)
    {
        printf("Enter the at array adress %d element in array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int  i = 0; i < n; i++)
    {
        printf(" The value of %d is %d\n",i,ptr[i]);
    }
    free(ptr);
    // -------------------------------------
    int nr;
    printf("Enter size of aray  you wan't creat in heap using ralloc\n");
    scanf("%d",&nr);
    int *ptra;
        ptra = (int *)realloc(ptr,nr* sizeof(int));
    for (int  i = 0; i < nr; i++)
    {
        printf("Enter the at array adress %d element in array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int  i = 0; i < nr; i++)
    {
        printf(" The value of %d is %d\n",i,ptr[i]);
    }
    free(ptr);
    

    //     int *sam;
    //     sam = (int *)calloc(9, sizeof(int));
    //     int *mount;
    //   mount=(int*) realloc(sam,9*sizeof(int));
    //   free(ptr);
    //   free(sam);
    //   free(mount);

    return 0;
}
#include <stdio.h>
int main()
{
    printf("file name is %s \n", __FILE__);
    printf("todays date is %s \n", __DATE__);
    printf("now time is  %s \n", __TIME__);
    printf("The line number is %d\n",__LINE__);
    printf("ANSI %d\n",__STDC__);
    return 0;
}
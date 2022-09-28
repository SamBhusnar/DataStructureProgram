#include <stdio.h>
int main()
{
    long long a;
    printf("Enter any number \n");
    scanf("%lld", &a);
    int count = 0;
    do
    {
        a /= 10;
        ++count;
    } while (a != 0);

    printf("Number of digit in entered number is :%d", count);

    return 0;
}
// #include <stdio.h>
// int main() {
//   long long n;
//   int count = 0;
//   printf("Enter an integer: ");
//   scanf("%lld", &n);

//   // iterate at least once, then until n becomes 0
//   // remove last digit from n in each iteration
//   // increase count by 1 in each iteration
//   do {
//     n /= 10;
//     ++count;
//   } while (n != 0);

//   printf("Number of digits: %d", count);
// }

#include <iostream>
using namespace std;
int countdigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        int digit = n % 10;
        count++;
        n = n / 10;
    }
    return count;
}
int main()
{   int n=4567;
    cout << countdigit(n);
}
#include <iostream>
using namespace std;
int main()
{
    int a, digit;
    cout << "Enter the number to check wheather the given number is armstrong or not ";
    cin >> a;
    int temp = a, count = 0;
    int num = 0;
    int original = a;
    while (temp > 0)
    {
        temp = temp / 10;
        count = count + 1;
    }
    temp = a;
    while (temp > 0)
    {
        digit = temp % 10;
        int o_digit = 1;
        for (int i = 1; i <= count; i++)
        {
            o_digit = o_digit * digit;
        }
        num = num + o_digit;
        temp = temp / 10;
    }

    if (original == num)
    {
        cout << "The given number is Armstrong number " << original;
    }
    else
    {
        cout << "The given number is not Armstrong number " << original;
    }
}
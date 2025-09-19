#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Treingle pattern printing\n";
    cout << "Entre the six=ze of the patter: ";
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << "by using the numeric value to print the triangle patter\n";
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "by using the numeric value to print the triangle patter\n";
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << "by using the numeric value to print the triangle patter\n";
    int x = 1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << x << " ";
            x = x + 1;
        }

        cout << endl;
    }

    cout << "by using the alphabate value to print the triangle patter\n";

    for (int i = 1; i <= a; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }

        cout << endl;
    }

    cout << "by using the alphabate value to print the triangle patter\n";
    char ch = 'A';
    for (int i = 1; i <= a; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }

        cout << endl;
    }
/*  1
    2 1
    3 2 1
    4 3 2 1
*/

    cout<<"Now we are going to print the pattern of triangle in reverse order or the numeric value\n";
    for(int i=1; i<=a; i++){
        for(int j=i; j>0; j--){
            cout<<j<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n,sum;
    sum = 0;
    cout << "Enter number till which you would like to add: ";
    cin >> n;
    while (n > 0)
    {
        sum = sum + n;
        n = n - 1;
    }
    cout << "Sum is : " << sum << endl;
    
}
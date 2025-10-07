#include<iostream>
#include<limits>
using namespace std;

int main()
{
    int k, i = 1, sum_k = 0, number;
    while (true)
    {
        cout << "Enter the amount of integers to sum = ";
        cin >> k;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "You have entered wrong input! Please enter a number." << endl;
        }
        else
        {
            break;
        }
    }
    do {
        cout << "Enter integer nr. " << i << ": ";
        cin >> number;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter an integer: ";
            cin >> number;
        }
        sum_k += number;
        i++;
    } while (i <= k);
    cout << "The total sum of " << k << " integers is: " << sum_k;
    return 0;
}

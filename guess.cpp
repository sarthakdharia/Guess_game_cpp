#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int sec_num = (rand() % 10);
    int guess, i = 0;

    while (i != 4)
    {
        if (i == 0)
        {
            cout << "4 chances Remaining" << endl;
        }
        else if (i == 1)
        {
            cout << "3 chances Remaining" << endl;
        }
        else if (i == 2)
        {
            cout << "2 chances Remaining" << endl;
        }
        else
        {
            cout << "1 chances Remaining" << endl;
        }

        cout << "Enter number Between 0 to 10:";
        cin >> guess;
        if (guess <= 10)
        {
            if (guess == sec_num)
            {
                cout << "Correct Answer!" << endl;
                i = 4;
            }
            else if (guess < sec_num)
            {
                cout << "The number is smaller" << endl;
                i++;
            }
            else
            {
                cout << "The number is Bigger" << endl;
                i++;
            }
        }
        else
        {
            cout << "Invalid Input" << endl;
        }
    }
    if (guess == sec_num)
    {
        cout << "You won" << endl;
    }
    else
    {
        cout << "4 chances done";
    }
    return 0;
}
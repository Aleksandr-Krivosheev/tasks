#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int n;
    srand(time(NULL));
    n = rand() % 100;

    char x;

    while (x != 'y')
    {
        cout << n << " - это верное число" << endl;
        cout << "y/n" << endl;
        cin >> x;
        if (x == 'n')
        {
            cout << "1 - больше" << endl
                 << "2 - меньше" << endl;
            int d;
            cin >> d;
            switch (d)
            {
            case 1:
                n++;
                break;
            case 2:
                n--;
                break;
            default:
                break;
            }
        }
    }
    cout << "Нашли ваше число " << n << endl;

    return 0;
}

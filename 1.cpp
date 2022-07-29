#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int n;
    srand(time(NULL));
    n = rand() % 100;

    cout << n << endl;

    int x;

    while (x != n)
    {
        cout << "Введите число" << endl;
        cin >> x;
        if (x < n)
        {
            cout << "Больше" << endl;
        }
        else if (x > n)
        {
            cout << "Меньше" << endl;
        }
    }
    cout << "Нашли" << endl;

    return 0;
}

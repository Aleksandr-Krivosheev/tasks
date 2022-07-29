#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f;
    f.open("test.txt");

    if (!f)
    {
        cout << "Файл не открылся";
        return -1;
    }

    int sum = 0;
    string str;
    while (!f.eof())
    {
        str = "";
        f >> str;
        /* getline(f,str); */
        if ((str != ";") && (str != ".") && (str != "-") && (str != ","))
        {
            sum++;
        }

        cout << str << endl;
    }

    cout << sum;

    f.close();
    return 0;
}

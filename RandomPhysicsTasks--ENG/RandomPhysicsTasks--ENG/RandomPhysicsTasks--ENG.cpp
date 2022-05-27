#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "English");
    srand(time(NULL));

    vector<string> amount = { "k", "d", "c", "m" }; // 5 eng
    vector<string> value = { "m" };

    for (int i = 0; i < 100; ++i)
    {
        int choose = rand() % 4; // 0-2

        if (choose < 2)
        {
            // 1
            cout << (rand() % 18 + 1) << amount[rand() % 4] << value[0] << " = " << amount[rand() % 4] << value[0] << endl;
        }
        else if (choose == 3)
        {
            int choose2 = rand() % 2;

            if (choose2 == 0)
            {
                // just m left
                cout << (rand() % 18 + 1) << value[0] << " = " << amount[rand() % 4] << value[0] << endl;
            }
            else {
                // just m right
                cout << (rand() + 1) % 18 << amount[rand() % 4] << value[0] << " = " << value[0] << endl;
            }
        }
        else
        {
            // 0.01
            double numBig = ((rand() % 45) * 1.0 + 1);
            cout << ((rand() % 45) * 1.0 + 1) / 100 << amount[rand() % 4] << value[0] << " = " << amount[rand() % 4] << value[0] << endl;
        }
    }


    cout << endl; system("pause"); return 0;
}

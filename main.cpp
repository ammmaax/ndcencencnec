#include <iostream>
#include <string>
#include "Bank.h"
using namespace std;

Bank* findBank(Bank banks[], int size, const string& bankName)
{
    for (int i = 0; i < size; i++)
    {
        if (banks[i].getName() == bankName)
        {
            return &banks[i];
        }
    }

    return nullptr;
}

Bank* createBanks(int size)
{
    Bank* banks = new Bank[size];

    for (int i = 0; i < size; i++)
    {
        string name;
        double money;

        cout << "Введіть назву банку #" << i + 1 << ": ";
        getline(cin >> ws, name);

        cout << "Введіть суму грошей: ";
        cin >> money;

        banks[i].setName(name);
        banks[i].setMoney(money);
    }

    return banks;
}

int main()
{
    const int N = 4;

    Bank banks[N] = {
        {"Private Bank", 3e5},
        {"Raifaisen Bank", 2.5e4},
        {"MonoBank", 4.2e3},
        {"VST", 2.6e2}
    };

    Bank* found = findBank(banks, N, "MonoBank");

    if (found != nullptr)
    {
        cout << found->getName() << ": " << found->getMoney() << '\n';
    }
    else
    {
        cout << "Банк не знайдено.\n";
    }

    for (int i = 0; i < N; i++)
    {
        if (banks[i].getMoney() > 260)
        {
            cout << banks[i].getName() << ": "
                 << banks[i].getMoney() << '\n';
        }
    }

    int count;
    cout << "Скільки банків створити? ";
    cin >> count;

    Bank* userBanks = createBanks(count);

    for (int i = 0; i < count; i++)
    {
        cout << userBanks[i].getName() << ": "
             << userBanks[i].getMoney() << '\n';
    }

    delete[] userBanks;

    return 0;
}
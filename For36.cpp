
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n, k, sum = 0, slag;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        slag = i;
        for (int j = 1; j < k; j++)
        {
            slag *= i;
        }
        sum += slag;
    }
    cout << fixed << setprecision(2) << sum << endl;
    system("pause");
}

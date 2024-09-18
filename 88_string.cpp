#include <iostream>
using namespace std;
int main()
{
    string city[] = {"indore", "ujjain", "mhow", "ujjain", "dewas", "ujjain"};
    int i, c = 0;
    for (i = 0; i < 6; i++)
    {
        cout << city[i] << endl;
        if (city[i] == "ujjain")
        {

            c++;
        }
    }
    cout << " total count of ujjain :" << c << endl;
    return 0;
}
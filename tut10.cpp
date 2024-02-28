#include <iostream>

using namespace std;

int main()
{

    // Loops
    // There are three types of loops
    // For Loops
    // While Loops
    // Do While loops

    // For Loops
    for (int i = 1; i < 50; i++)
    {
        cout << i << endl;
    }
    // // Example of infinite loop

    for (int i = 1; 45 <= 50; i++)
    {
        cout << i << endl;
    }

    // While Loop
    int i = 1;
    while (i <= 50)
    {

        cout << i << endl;
        i++;
    }
    // Do While

    int i = 4;

    do
    {
        cout << i << endl;
        i++;
    } while (false);

    return 0;
}
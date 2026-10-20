#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (float y = 2.0f; y > -2.0f; y -= 0.1f)
    {
        for (float x = -2.0f; x < 2.0f; x += 0.05f)
        {
            float a = x * x + y * y - 1;
            if (a * a * a - x * x * y * y * y <= 0)
                cout << "v";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
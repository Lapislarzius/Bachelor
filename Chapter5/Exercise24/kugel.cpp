#include <iostream>
using namespace std;
#define PI 3.1415927f
#define QUAD(x) (x * x)
#define CUB(x) (QUAD(x) * x)

int main(void)
{
    float radius = 0.0f;

    cout << "Bitte geben Sie einen Radius ein!";
    cin >> radius;
    cout << "Die Kugel hat folgende Eigenschaften\nOberflaeche = " << 4 * PI * QUAD(radius)
         << "\nVolumen = " << 4 / 3.0 * PI * CUB(radius);
    return 0;
}
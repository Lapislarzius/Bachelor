#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
#define SWAP(X,Y)  {int t=(X); (X)=(Y); (Y)=t;} 

int main(void)
{
    vector<int> median;
    int v = 0;
    int result = 0;
    string s = "";
    cout << "Bitte geben sie den Median ein ";
    getline(cin, s);
    istringstream is(s);

    while (is >> v) median.push_back(v);

    for (int i = 0; i < median.size(); i++) {
        for (int j = 0; j < median.size()-1; j++) {
            if (median.at(j) > median.at(j + 1)) {
                SWAP(median.at(j), median.at(j + 1))
            }
        }
    }

    if (median.size() % 2 == 1) {
        cout << "Der Median von: ";
        for (int x : median) cout << x << ' ';
        cout << endl;
        result = median.at(median.size() / 2);
        cout << "ist " << result;
    }
    else {
        cout << "Der Median von: ";
        for (int x : median) cout << x << ' ';
        cout << endl;
        result = (median.at((median.size() / 2) - 1) + median.at(median.size() / 2)) / 2;
        cout << "ist " << result;
    }
  
    return 0;
}
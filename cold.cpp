#include <iostream>

using namespace std;

int main() {
    int x, result = 0;
    cin >> x;
    
    while (x--) {
        int temp;
        cin >> temp;
        if (temp < 0) {
            result++;
        }
    }
    
    cout << result << endl;
    
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    string x, result = "";
    cin >> x;
    
    for (int i = 0; i <= x.length(); i++) {
        if (x[i] == 'A' || x[i] == 'a') {
            result = x.substr(i, x.length());
            break;
        }
    }
    
    if (result != "") {
        cout << result;
    }
    
    return 0;
}

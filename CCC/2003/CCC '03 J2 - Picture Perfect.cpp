#include <bits/stdc++.h>
using namespace std;

int main() {
    int area, width, length, perimeter;
    cin >> area;
    while ( area != 0) {
        width = sqrt(area);
        length = area/width;
        perimeter = (width+length)*2;
        cout << "Minimum perimeter is " << perimeter << " with dimensions " << width << " x " << length << endl;
        cin >> area;
    }

    
    return 0;
}
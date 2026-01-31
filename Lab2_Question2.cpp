#include <iostream>
using namespace std;

int main() {
    int length = 0;
    int width = 0;
    int area = 0;
    int smallBrownies = 0;
    int largeBrownies = 0;

    cout << "Enter the length of the baking pan (in inches): ";
    cin >> length;

    cout << "Enter the width of the baking pan (in inches): ";
    cin >> width;

    area = length * width;
    smallBrownies = area;
    largeBrownies = area / 4;

    cout << "A " << length << " x " << width
         << " inch pan can hold "
         << smallBrownies << " small brownies or "
         << largeBrownies << " large brownies.\n";

    return 0;
}
#include <iostream>
#include <limits>
using namespace std;

int main() {
   typedef int feet;
   cout << "Size of feet : " << sizeof(feet) << endl;
    std::cout << "Int Min " << std::numeric_limits<feet>::min() << endl;
    std::cout << "Int Max " << std::numeric_limits<feet>::max() << endl;

    enum color { red, green, blue } c;
    cout << "enum c" << c;
    // enum color { red, green = 5, blue };
    // cout << "color" << color;
    cout << "red" << red;
    cout << "green" << green;
    cout << "blue" << blue;
   return 0;
}
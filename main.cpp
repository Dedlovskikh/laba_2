#include <iostream>
#include "segment.h"

using namespace std;

int main()
{
    float x;
    float y;
    cout << "Enter coordinate (x, y) of 1'st point: ";
    cin >> x >> y;
    Segment obj(x, y);
    cout << "Enter coordinate (x, y) of 2'st point: ";
    cin >> x >> y;
    //obj.setSecondPoint(x, y);
    cout << "Lenght is " << obj.segmentLength();
    return 0;
}

#include "segment.h"

Segment::Segment(float x, float y) : Point::Point(x, y)
{

}

void Segment::setSecondPoint(float x, float y)
{
    secondPoint[0] = x;
    secondPoint[1] = y;
}

float Segment::segmentLength()
{
    float lenght = sqrt(pow(secondPoint[0]-getX(),2)+pow(secondPoint[1]-getY(),2));
    return lenght;
}

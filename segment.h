#ifndef SEGMENT_H
#define SEGMENT_H

#include "point.h"
#include "math.h"

class Segment : public Point
{
private:
    float secondPoint[2];

public:
    Segment(float x, float y);
    void setSecondPoint(float x, float y);
    float segmentLength();
};

#endif // SEGMENT_H

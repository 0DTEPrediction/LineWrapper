#include "pch.h"
#include "line.hxx"
#include <cmath>

Line::Line() : x1(0), y1(0), x2(0), y2(0) {}

void Line::constructLineFromOrigin(double x, double y) {
    x2 = x;
    y2 = y;
}

double Line::getLength() const {
    return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}
#pragma once

class Position {
public: double x, y;
public:
    Position() { x = 0; y = 0; }
    Position(double xx, double yy) : x (xx), y(yy) {}
};

class Line {
private:
    double x1, y1, x2, y2;

public:
    Line();
    void constructLineFromOrigin(double x, double y);
    double getLength() const;
    Position start() { return Position(x1, y1); }
    Position end() { return Position(x2, y2); }
};
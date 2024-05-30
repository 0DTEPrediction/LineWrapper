#include "pch.h"
#include "linewrapper.hxx"

namespace lineWrapperNamespace {
    linewrapper::linewrapper() {
        line = new Line();
    }

    linewrapper::~linewrapper() {
        this->!linewrapper();
    }

    linewrapper::!linewrapper() {
        delete line;
    }

    void linewrapper::constructLineFromOrigin(double x, double y) {
        line->constructLineFromOrigin(x, y);
    }

    double linewrapper::length::get() {
        return line->getLength();
    }

    PositionWrapper^ linewrapper::start() {
        return gcnew PositionWrapper(line->start().x, line->start().y);
    }

    PositionWrapper^ linewrapper::end() {
        return gcnew PositionWrapper(line->end().x, line->end().y);
    }

    //////////////////////Position////////////////
    PositionWrapper::PositionWrapper() {
        position = new Position();
    }

    PositionWrapper::PositionWrapper(double xx, double yy) {
        position = new Position(xx, yy);
    }

    PositionWrapper::PositionWrapper( PositionWrapper^ other) {
        position = new Position(other->X, other->Y);
    }

    PositionWrapper::PositionWrapper( PositionWrapper% other) {
        position = new Position(other.X, other.Y);
    }

    double PositionWrapper::X::get()  {
        return position->x;
    }

    void PositionWrapper::X::set(double value) {
        position->x = value;
    }

    double PositionWrapper::Y::get() {
        return position->y;
    }

    void PositionWrapper::Y::set(double value) {
        position->y = value;
    }
}
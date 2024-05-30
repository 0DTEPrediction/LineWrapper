#pragma once

#include "pch.h"
#include "line.hxx"

namespace lineWrapperNamespace {
    public ref class PositionWrapper {
    public:
        PositionWrapper();
        PositionWrapper(double xx, double yy);
        PositionWrapper( PositionWrapper^ other);  // Copy constructor for PositionWrapper instances
        PositionWrapper( PositionWrapper% other);  // Copy constructor for PositionWrapper(double xx, double yy) instances

        property double X {
            double get();
            void set(double value);
        }

        property double Y {
            double get();
            void set(double value);
        }

    private:
        Position* position;
    };

    public ref class linewrapper {
    public:
        linewrapper();
        ~linewrapper();
        !linewrapper();
        void constructLineFromOrigin(double x, double y);
        PositionWrapper^ start(); // Change the return type to PositionWrapper^
        PositionWrapper^ end(); // Change the return type to PositionWrapper^  

        property double length { double get(); }

    private:
        Line* line;
    };
}
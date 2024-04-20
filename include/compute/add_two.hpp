#pragma once

#include <boost/rational.hpp>

namespace compute
{

    class AddTwo {
    public:
        int operator() (int i) const {
            boost::rational<int> fraction(10, 5);
            return i + fraction.numerator();
        }
    };



} // namespace compute

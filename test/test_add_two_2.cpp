#include "compute/add_two.hpp"

// This define is needed once per executable (which here is every cpp file).
#define BOOST_TEST_MODULE test_add_two_2
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE (AddTwo)
{
    compute::AddTwo add_two;
    BOOST_TEST(add_two(70) == 72);
}
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

Coord3D test_one = {10, 20, 30}; //distance is 37.41657387
Coord3D test_two = {5, 6, 7}; // distance is 10.48808848
Coord3D test_three = {0, -5, 50}; // distance is 
Coord3D test_four = {100, 100, 100}; // distance is 50.24937
Coord3D test_five = {69, 105, -50}; // distance is 135.2257

std::string test_test(Coord3D *ppos, Coord3D *pvel, double dt) 
{ 
    double xi = (ppos -> x) + ((pvel -> x) * dt);
    double yi = (ppos -> y) + ((pvel -> y) * dt);
    double zi = (ppos -> z) + ((pvel -> z) * dt);
    ppos -> x = xi;
    ppos -> y = yi;
    ppos -> z = zi; 

    return std::to_string((int)ppos->x) + " " + std::to_string((int)ppos->y) + " " + std::to_string((int)ppos->z);
}

TEST_CASE("Task A:") 
{ 
    CHECK(length(&test_one) == doctest::Approx(37.4166).epsilon(.05)); 
    CHECK(length(&test_two) == doctest::Approx(10.4881).epsilon(.05));
}

TEST_CASE("Task B:") 
{ 
    CHECK(fartherFromOrigin(&test_one, &test_two) == &test_one);
    CHECK(fartherFromOrigin(&test_five, &test_two) == &test_five);
}

// results are in ## ## ##, * 2 for all 
TEST_CASE("Task C:") 
{ 
    SUBCASE("Test #1:") 
    {
        std::string test = test_test(&test_one, &test_two, 2);
        CHECK(test == "20 32 44"); 
    }
    SUBCASE("Test #2:") 
    {
        std::string test = test_test(&test_four, &test_three, 2);
        CHECK(test == "100 90 200"); 
    }

}
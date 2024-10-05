#include "extra-task-1.h"

#include <cassert>
#include <iostream>
#include <cmath>

using namespace std;

void main()
{
    setlocale(LC_ALL, "");

    // �������� ������� double seconds_difference(double time_1, double time_2)
    assert(fabs(seconds_difference(1800.0, 3600.0) - 1800.0) < DBL_EPSILON);
    assert(fabs(seconds_difference(3600.0, 1800.0) - (-1800.0)) < DBL_EPSILON);
    assert(fabs(seconds_difference(1800.0, 2160.0) - 360.0) < DBL_EPSILON);
    assert(fabs(seconds_difference(1800.0, 1800.0) - 0.0) < DBL_EPSILON);



    system("pause");
}
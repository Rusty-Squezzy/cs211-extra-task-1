#include "extra-task-1.h"

#include <cassert>
#include <iostream>
#include <cmath>

using namespace std;

void main()
{
    setlocale(LC_ALL, "");

    // �������� �������: double seconds_difference(double time_1, double time_2)
    assert(fabs(seconds_difference(1800.0, 3600.0) - 1800.0) < DBL_EPSILON);
    assert(fabs(seconds_difference(3600.0, 1800.0) - (-1800.0)) < DBL_EPSILON);
    assert(fabs(seconds_difference(1800.0, 2160.0) - 360.0) < DBL_EPSILON);
    assert(fabs(seconds_difference(1800.0, 1800.0) - 0.0) < DBL_EPSILON);


    // �������� �������: double hours_difference(double time_1, double time_2)
    assert(fabs(hours_difference(1800.0, 3600.0) - 0.5) < DBL_EPSILON);
    assert(fabs(hours_difference(3600.0, 1800.0) - (-0.5)) < DBL_EPSILON);
    assert(fabs(hours_difference(1800.0, 2160.0) - 0.1) < DBL_EPSILON);
    assert(fabs(hours_difference(1800.0, 1800.0) - 0.0) < DBL_EPSILON);


    // �������� �������: double to_float_hours(int hours, int minutes, int seconds)
    assert(fabs(to_float_hours(0, 15, 0) - 0.25) < DBL_EPSILON);
    assert(fabs(to_float_hours(2, 45, 9) - 2.7525) < DBL_EPSILON);
    assert(fabs(to_float_hours(1, 0, 36) - 1.01) < DBL_EPSILON);


    // �������� �������: double to_24_hour_clock(double hours)
    assert(fabs(to_24_hour_clock(24) - 0) < DBL_EPSILON);
    assert(fabs(to_24_hour_clock(48) - 0) < DBL_EPSILON);
    assert(fabs(to_24_hour_clock(25) - 1) < DBL_EPSILON);
    assert(fabs(to_24_hour_clock(4) - 4) < DBL_EPSILON);
    assert(fabs(to_24_hour_clock(28.5) - 4.5) < DBL_EPSILON);


    // �������� �������: int get_hours(int seconds)
    assert(get_hours(3800) == 1);

    // �������� �������: int get_minutes(int seconds)
    assert(get_minutes(3800) == 3);



    system("pause");
}
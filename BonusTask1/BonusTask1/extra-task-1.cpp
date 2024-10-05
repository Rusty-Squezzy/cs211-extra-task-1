#include "extra-task-1.h"

#include "assert.h"

double seconds_difference(double time_1, double time_2)
{
    return time_2 - time_1;
}


double hours_difference(double time_1, double time_2)
{
    return (time_2 - time_1) / 3600;
}


double to_float_hours(int hours, int minutes, int seconds)
{
    assert(seconds >= 0 && seconds < 60);
    assert(minutes >= 0 && minutes < 60);
    
    return seconds / 3600.0 + minutes / 60.0 + hours;
}
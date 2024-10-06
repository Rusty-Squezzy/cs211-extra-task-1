#pragma once

/*
* Return the number of seconds later that a time in seconds time_2 is than a time in seconds time_1.
*/
double seconds_difference(double time_1, double time_2);


/*
* Return the number of hours later that a time in seconds time_2 is than a time in seconds time_1.
*/
double hours_difference(double time_1, double time_2);


/*
* Return the total number of hours in the specified number of hours, minutes, and seconds.
* Precondition: 0 <= minutes < 60  and  0 <= seconds < 60
*/
double to_float_hours(int hours, int minutes, int seconds);


/*
* Hours is a number of hours since midnight. 
* Return the hour as seen on a 24-hour clock.
* Precondition: hours >= 0
*/
double to_24_hour_clock(double hours);


/*
* This function is used to determine the hours part of a time in seconds.
*/
int get_hours(int seconds);


/*
* This function is used to determine the minutes part of a time in seconds.
*/
int get_minutes(int seconds);

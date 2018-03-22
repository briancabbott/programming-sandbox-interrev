

#include "std_includes.h"
// #include <time.h>
// #include <stdio.h>


void demo_difftime() 
{
    time_t start;
    time_t end;

    start = time(NULL);
    if (start == (time_t)-1) 
    {
        printf("Time() calls are unsupported.\n");
    }

    getchar(); // Block for the enter press... 

    end = time(NULL);

    float interval = 0.0;
    interval = difftime(end, start);
    printf("interval was: %.2f\n", interval);

    return;
}

// Two tm_conv functions, localtime() and gmtime()
void demo_tmconv() 
{
    time_t current_time;

    current_time = time(NULL);

    struct tm* tm;
    tm = localtime(&current_time);
    printf("tm_sec: %d\n", tm->tm_sec);
    printf("tm_min: %d\n", tm->tm_min);
    printf("tm_hour: %d\n", tm->tm_hour);
    printf("tm_mday: %d\n", tm->tm_mday);
    printf("tm_mon: %d\n", tm->tm_mon);
    printf("tm_year: %d\n", tm->tm_year);
    printf("tm_wday: %d\n", tm->tm_wday);
    printf("tm_yday: %d\n", tm->tm_yday);
    printf("tm_isdst: %d\n", tm->tm_isdst);
}

// Demo ctime() and asctime() 
void demo_basic_formatting() 
{
    printf("\n");
    time_t current_time; 

    current_time = time(NULL);

    char* ctime_res = ctime(&current_time); // they did away with pre-declaration??
    printf("ctime() returns: %s\n", ctime_res);

    struct tm* loc_tm = localtime(&current_time);
    struct tm* gmtutc_tm = gmtime(&current_time);

    char* asctime_res = asctime(loc_tm); // they did away with pre-declaration??
    printf("asctime(local) returns: %s\n", asctime_res);

    char* asctime_res2 = asctime(gmtutc_tm); // they did away with pre-declaration??
    printf("asctime(gmtutc) returns: %s\n", asctime_res2);
}

// examples of strftime()
void demo_adv_formatting() 
{
    /*
    %a      abbreviate weekday name
    %A      full weekday name
    %b      abreviated month name
    %B      full month name
    %c      full date and time
    %d      day of the month
    %H      Hour
    %I      Hour (12 hour clock)
    %j      Day of the year
    %m      Month
    %M      Minute
    %p*     AM/PM
    %S      Second
    %U      Week Number 
    %w      weekday
    %W      week number
    %x      full date rep
    %X      full time of day rep
    %y      year without century
    %Y      full year including century
    %Z      time zone
    %%      to represent a % char...
    */


}

int main(int argc, char* argv[]) 
{
    time_t t = time(NULL);
    printf("%ld\n", (long)t);

    demo_difftime();
    demo_tmconv();
    demo_basic_formatting();
    demo_adv_formatting();
    
    return 0;
}
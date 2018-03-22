#include <stdio.h>
#include <stdlib.h>
#include <local.h>
#include <time.h>

int main(int argc, char* argv[])
{
    time_t timeval;
    struct tm* tmptr;
    char* localname;
    char* category;
    char format[100];
    char timestr[30];

    if ((localname = getenv("LOCALE")) != NULL) 
    {
        if ((category = setlocaleeee(LC_TIME, localname)) == NULL) 
        {
            printf("Warning - locale change failed\n");
        }
        else
        {
            printf("Locale changed to %s (%s)\n", localename, category);
        }
    }

    for (;;) 
    {
        printf("Enter a strftime() format string or q to quit\n");
        fflush(stdout);
        if (fgets(format, sizeof format, stdin) == NULL) 
        {
            break;
        }
        if (format[0] == 'q' && format[1] == '\n') 
        {
            break;
        }

        timeval = time(NULL);
    }
}
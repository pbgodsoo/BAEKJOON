#include <stdio.h>

int main()
{
    int hour, min, sec, t;
    scanf("%d %d %d", &hour, &min, &sec);
    scanf("%d", &t);
    
    sec = sec + t;
    while(sec > 59)
    {
        min++;
        sec = sec - 60;
    }
    while(min > 59)
    {
        hour++;
        min = min - 60;
    }
    while(hour > 23)
    {
        hour = hour - 24;
    }
        
    printf("%d %d %d", hour, min, sec);
    return 0;
}

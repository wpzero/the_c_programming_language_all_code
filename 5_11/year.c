#include <stdio.h>

static char daytab[][13] = {
  {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
  {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int day_of_year(int year, int month, int day) {
  int i, leap;
  i = leap = 0;
  leap = (year%4==0 && year%100!=0) || year%400==0;
  for(i = 0; i < month; i++) {
    day += daytab[leap][i];
  }
  return day;
}

void month_day(int year, int yearday, int *pmonth, int *pday) {
  int i, leap;
  leap = (year%4==0 && year%100!=0) || year%400==0;
  for (i = 1; yearday > daytab[leap][i]; i++)
    yearday -= daytab[leap][i];
  *pmonth = i;
  *pday = yearday;
}

char *month_name(int month) {
  static char *names[] = {
    "Illegal month",
    "January", "February", "March",
    "April", "May", "June",
    "July", "August", "September",
    "October", "November", "December"
  };
  return names[month];
}

int main() {
  int year, days, month, day;
  year = 1998;
  days = 190;
  month_day(year, 190, &month, &day);
  printf("the month is %d, the day is %d\n", month, day);
  printf("the month is %s\n", month_name(month));
  return 0;
}

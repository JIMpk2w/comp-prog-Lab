#include <stdio.h>
enum DayOfWeek {TUE, WED, THU, FRI, SAT, SUN, MON}typedef DayOfWeek;

DayOfWeek findDayOfWeek(int day, int month) {
    int m = 0, ans;
    int list[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i=0;i<month-1;i++){
        m += list[i];
    }
    ans = (day + m)%7;
	switch(ans){
        case 0: return MON;
        case 1: return TUE;
        case 2: return WED;
        case 3: return THU;
        case 4: return FRI;
        case 5: return SAT;
        case 6: return SUN;
    }
}

int main()
{
	int day, month;
	DayOfWeek dow;

	printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
	printf("Enter Day and Month: ");
	scanf("%d %d", &day, &month);
	dow = findDayOfWeek(day, month);
	printf("Day:%d Month:%d of Year 2013 is ", day, month);
	switch(dow){
		case 6: printf("Sunday.\n"); break;
		case 0: printf("Monday.\n"); break;
		case 1: printf("Tuesday.\n"); break;
		case 2: printf("Wednesday.\n"); break;
		case 3: printf("Thursday.\n"); break;
		case 4: printf("Friday.\n"); break;
		case 5: printf("Saturday.\n"); break;
	}
}
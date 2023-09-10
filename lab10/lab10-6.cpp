#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

class Time{
    private:
    int hour;
    int minute;
    int second;

    public:
    Time(int hour, int minute, int second) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    Time(int duration) {
        this->hour = duration / 3600;
        this->minute = (duration % 3600) / 60;
        this->second = duration % 60;
    }

    int getHour() const {
        return hour;
    }

    int getMinute() const {
        return minute;
    }

    int getSecond() const {
        return second;
    }

    void setHour(int hour) {
        this->hour = hour;
    }

    void setMinute(int minute) {
        this->minute = minute;
    }

    void setSecond(int second) {
        this->second = second;
    }

    int getDuration() const {
        return hour * 3600 + minute * 60 + second;
    }

    Time add(Time other) const {
        return (getDuration() + other.getDuration()) * 86400;
    }

    int subtract(Time other) const {
        if(getDuration() > other.getDuration()){
            return getDuration() - other.getDuration();
        }else{
            return (86400 + getDuration()) - other.getDuration();
        }
    }

    int equals(Time other) const {
        if(hour == other.getHour() &&
            minute == other.getMinute() && 
            second == other.getSecond()){
            return 1;
        }else { return 0; };
    }

    string toString() const {
        string hourStr = to_string(hour);
        string minuteStr = to_string(minute);
        string secondStr = to_string(second);

        if (hour < 10) {
            hourStr = "0" + hourStr;
        }
        if (minute < 10) {
            minuteStr = "0" + minuteStr;
        }
        if (second < 10) {
            secondStr = "0" + secondStr;
        }
        return hourStr + ":" + minuteStr + ":" + secondStr;
    }

};

int main() {
    Time t1(2, 2, 2);
    Time t2(1, 1, 1);
    Time t3 = t1.add(t2);
    cout << "(a) -> " << t1.toString() << endl;
    cout << "(b) -> " << t2.toString() << endl;
    // cout << t3.toString() << endl; 
    cout << "(a)-(b) => " << t1.subtract(t2) << endl;
    cout << "(b)-(a) => " << t2.subtract(t1) << endl; 
    // cout << t1.equals(t2) << endl;
    return 0;
}




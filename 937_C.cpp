#include <iostream>
#include <string>

using namespace std;

string convert_to_12_hour_format(string time_24_hour) {
    int hour = stoi(time_24_hour.substr(0, 2));
    int minute = stoi(time_24_hour.substr(3, 2));

    string period;
    if (hour < 12) {
        period = "AM";
        if (hour == 0) {
            hour = 12;
        }
    } else {
        period = "PM";
        if (hour > 12) {
            hour -= 12;
        }
    }

    string hour_str = to_string(hour);
    if (hour < 10) {
        hour_str = "0" + hour_str;
    }

    return hour_str + ":" + time_24_hour.substr(3, 2) + " " + period;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string time_24_hour;
        cin >> time_24_hour;
        cout << convert_to_12_hour_format(time_24_hour) << endl;
    }

    return 0;
}

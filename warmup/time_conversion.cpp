#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string> 
#include <sstream> 
using namespace std;

int main() {
    string t;
    cin >> t;

    string output = t.substr(0, 8);
    string ampm = t.substr(t.size() - 2);
    string hourString = t.substr(0, 2);

    if (ampm == "PM" && hourString != "12") {
        int hour = stoi(hourString);
        hour = (hour + 12) % 24;

        stringstream ss;
        ss << hour;

        output[0] = ss.str()[0];
        output[1] = ss.str()[1];
    }
    else if (ampm == "AM" && hourString == "12") {
        output[0] = output[1] = '0';
    }

    cout << output;

    return 0;
}

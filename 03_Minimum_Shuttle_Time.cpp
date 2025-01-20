#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canCompleteTrips(const vector<int>& time, int totalTrips, long long currentTime) {
    long long trips = 0;
    for (const int& t : time) {
        trips += currentTime / t;
        if (trips >= totalTrips) {
            return true;
        }
    }
    return trips >= totalTrips;
}

long long minimumTime(vector<int>& time, int totalTrips) {
    long long left = 1;
    long long right = *min_element(time.begin(), time.end()) * (long long)totalTrips;
    long long result = right;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (canCompleteTrips(time, totalTrips, mid)) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    vector<int> time1 = {1, 2, 3};
    int totalTrips1 = 5;
    cout << "Minimum time for example 1: " << minimumTime(time1, totalTrips1) << endl;

    vector<int> time2 = {2};
    int totalTrips2 = 1;
    cout << "Minimum time for example 2: " << minimumTime(time2, totalTrips2) << endl;

    return 0;
}

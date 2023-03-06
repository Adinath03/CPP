#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

// Struct to represent a time in hours, minutes, and seconds
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to parse a time string into a Time struct
Time parseTime(string timeStr) {
    Time time;
    stringstream ss(timeStr);
    char colon;
    ss >> time.hours >> colon >> time.minutes >> colon >> time.seconds;
    return time;
}

// Function to convert a Time struct to seconds since midnight
int timeToSeconds(Time time) {
    return time.hours * 3600 + time.minutes * 60 + time.seconds;
}

// Function to convert seconds since midnight to a Time struct
Time secondsToTime(int seconds) {
    Time time;
    time.hours = seconds / 3600;
    time.minutes = (seconds % 3600) / 60;
    time.seconds = seconds % 60;
    return time;
}

// Function to find the average time and return the correction time
int berkeley(vector<Time> times, int leader) {
    int n = times.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if(i!= leader)
        {
            sum += timeToSeconds(times[i]);
        }
    }
    int avgSeconds = sum / (n-1);
    return avgSeconds;
}

int main() {
    int n; // number of nodes
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector<Time> times(n); // array to store current times of each node

    // Taking input for current times of each node
    for (int i = 0; i < n; i++) {
        string timeStr;
        cout << "Enter current time for node " << i << " (in the format HH:MM:SS): ";
        cin >> timeStr;
        times[i] = parseTime(timeStr);
    }

    int leader; // leader node ID
    cout << "Enter the leader node ID: ";
    cin >> leader;

    // Requesting time from all nodes
    cout << "Requesting time from all nodes..." << endl;
    cout << "Time synchronization process begins....." << endl;
    int correctionSeconds = berkeley(times,leader);
    

    // Simulating request and response from each node
    vector<int> diff;
    for (int i = 0; i < n; i++) {
        {
            diff.push_back(timeToSeconds(times[i]) - correctionSeconds);     
            times[i] = secondsToTime(correctionSeconds);
            cout << "Node " << i << " updated its time to " << times[i].hours << ":" << times[i].minutes << ":" << times[i].seconds << endl;
        }
    }

    // Printing final times of all nodes
    cout << "Final times of all nodes:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Node " << i << ": " << times[i].hours << ":" << times[i].minutes << ":" << times[i].seconds << " Time difference is : "<< diff[i]<< " seconds"<<endl ;
        
    }

    return 0;
}

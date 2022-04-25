#include<bits/stdc++.h>

Time::Time(int h = 0, int m  = 0, int s = 0) {
        hour = h;
        minute = m;
        second = s;
    }
//setter function 
void Time:: setTime(int h, int m, int s){
        hour = h;
        minute = m;
        second = s; 
    }
//print description of object in hh:mm:ss
void Time:: print(){
     cout << setw(2) << setfill('0') << hour << ":"
        << setw(2) << setfill('0') << minute << ":"
         << setw(2) << setfill('0') << second << "\n";
}
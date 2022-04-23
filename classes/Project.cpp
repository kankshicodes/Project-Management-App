#include<iostream>
#include<string>
#include "Project.h"
#include "Task.h"
#include "Time.h"

using namespace std;

Project::Project(int tasks){
        totaltask=tasks;
        }

void Project::showtotaltask(){
            cout<<"Total tasks project requred for the compeletion = "<<totaltask;
        }
        
void Task::setTask(string taskname, int time, string tasktype);

//constructor with default value 0
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


#include<bits/stdc++.h>
using namespace std;
class Project
{
    private:
        int totaltask;
        string projectname;

    public:

        Project(int totaltask){
        this.totaltask = totaltask;
        }
        void showtotaltask(){
            cout<<"Total tasks project requred for the compeletion = "<<totaltask;
        }
    
};
class Task{
  public:
    string taskname;
    int time;
    string tasktype; 
    // Task(string taskname = 0, int time = 0, string tasktype = 0) if we need constructor with default value 0
    void setTask(string taskname, int time, string tasktype);
};
class Time
{
    private :
        int hour;
        int minute;
        int second;
    public :
        //constructor with default value 0
        Time(int h = 0, int m  = 0, int s = 0);
        //setter function 
        void setTime(int h, int m, int s);
        //print description of object in hh:mm:ss
        void print();
};

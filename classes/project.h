#include<iostream>
#include<string>
using namespace std;

class Project{
    private:
        int totaltask;
        string projectname;
    public:
        Project(int totaltask);
        void showtotaltask();
};

class Task{
    public:
    string taskname;
    int time;
    string tasktype; 
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

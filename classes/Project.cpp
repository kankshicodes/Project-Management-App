#include<bits/stdc++.h>
using namespace std;

// This is the project class which has all the necessary attributes and methods.
class Project
{
    private:
        int totaltask;

    public:

        Project(int totaltask){
        this.totaltask = totaltask;
        }
        void showtotaltask(){
            cout<<"Total tasks project requred for the compeletion = "<<totaltask;
        }
    
};
//It's the task class which has all the attributes and methods that are required while doing a task for a user
class Task{

  public:
    void settask();
    string gettask();
    string taststatus();
    int taskid();

};



int main(){
    return 0;
}
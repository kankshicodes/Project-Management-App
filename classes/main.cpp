#include<bits/stdc++.h>
#include "project.h"
#include "task.h"
#include "time.h"
using namespace std;
int main(){
    Time t1(10, 50, 59);
    t1.print();  // 10:50:59
    Time t2;  //object created with default value
    t2.print();  // 00:00:00
    t2.setTime(6, 39, 9); //set the new time in object
    t2.print();  // 06:39:09
    return 0;
}
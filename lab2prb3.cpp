// assume a runner runs 14km in 45min & 30 sec wap that displays the average speed in miles per hour (miles=1.6km)
#include <iostream>
using namespace std;
int main () {
    float distance =14, time = 0.759, speed=0;

    float miles = distance /1.6;
    speed = miles/time;
    

    cout << "the runner runs average speed = " << speed;

    return 0;
}
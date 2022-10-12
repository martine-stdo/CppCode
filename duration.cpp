#include<iostream>
using namespace std;

int main() {
   
    double start, stop, duration;
    start = clock();

    //填入要统计时间的函数
    stop = clock();
    duration  = (stop - start) / CLK_TCK;
    cout << duration << endl;


    return 0;
}
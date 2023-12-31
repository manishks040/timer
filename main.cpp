//      Date: Tue 4 Jul 10:20 PM
// Developer: Manish Kumar Singh
// This code can be used for educational purpose only, not for sale. If 
// anyone found misusing it then he/she will be sued in court!
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include<windows.h>

using std::cout;
using std::cin;
using std::endl;

int main(){
    short minutes, seconds; int time;

    do{
        cout<< "Enter seconds::  ";
        cin>> seconds;
    } while (seconds>59);

    do{
        cout<< "Enter minutes::  ";
        cin>> minutes;
    } while (minutes>59);

    time = minutes != 0 ? minutes*60 : 0;
    time += seconds;

    for(int i = time; i> 0 ; i--){
        system("clear");
        system("cls"); // for Windows
        cout<< "The time remaining is 0:" << minutes << ":" << seconds << endl;
        minutes = i % 60 == 0 ? --minutes : minutes;
        seconds = seconds == 0 ? 59 : --seconds;
        system("sleep 1");
        sleep(1); // the same effect.
        // system("TIMEOUT 1"); // kinda
    }
    system("clear");
    cout<< "*******************\nTimer ended!\a\nLasted for " << time << " seconds" << "\n*******************\n\n\n\n\n\n" << endl;
    
}

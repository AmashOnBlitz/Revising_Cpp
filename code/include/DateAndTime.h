/*=============================================================
Project    : Revising CPP
file       : DateAndTime.h
Created By : Amash Shafi Jami
On         : 2026-02-24
=============================================================*/

#ifndef REVISE_CPP_DATEANDTIME_HEADER
#define REVISE_CPP_DATEANDTIME_HEADER

#include <ctime>
#include <string>
#include <iostream>

int main_Dateandtime(int argc, char const *argv[]) {

    time_t currentTime = time(0); //system time
    std::string strTime = std::string(ctime(&currentTime)); //conv to string
    std::cout << "Current date and time is : " << strTime << "\n";

    tm *gmtm = gmtime(&currentTime); // Convert to UTC
    strTime = asctime(gmtm); // Get ASCII String
    std::cout << "The UTC date and time is:"<< strTime << "\n";


    //Formatting time based on tm struct
    std::cout << "Number of sec since January 1,1970 is:: " << currentTime << "\n";
    tm *ltm = localtime(&currentTime);

    // print various components of tm structure.
    std::cout << "Year:" << 1900 + ltm->tm_year << "\n";
    std::cout << "Month: "<< 1 + ltm->tm_mon<< "\n";
    std::cout << "Day: "<< ltm->tm_mday << "\n";
    std::cout << "Time: "<< 5+ltm->tm_hour << ":";
    std::cout << 30+ltm->tm_min << ":";
    std::cout << ltm->tm_sec << "\n";

    return 0;
}

#endif //!REVISE_CPP_DATEANDTIME_HEADER
#include <iostream>
#include <fstream>
#include <string>
#include <chrono>

int main (){

    typedef std::chrono::high_resolution_clock Time;
    typedef std::chrono::milliseconds ms;
    typedef std::chrono::duration<float> fsec;
    auto t0 = Time::now();
    std::ifstream myfile;
    myfile.open("link.txt");
    std::string myline;
    if ( myfile.is_open() ) {
        while ( myfile ) { 
        std::getline (myfile, myline);
        // std::cout << myline << '\n';
    }
    }
    else {
        std::cout << "Couldn't open file\n";
    }
    fsec duration = Time::now() - t0;
    std::cout << duration.count() << "s\n";
    return 0;      
}
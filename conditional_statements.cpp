#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//  If 1 <= N <= 9, 
//  then print the English representation of it. 
//  That is "one" for 1, "two" for 2, and so on.
//  Otherwise print "Greater than 9" (without quotes).

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int input;
    std::cin >> input;
    if(input > 9) {
        std::cout << "Greater than 9" << endl;
    } else if(input > 8) {
        std::cout << "nine" << endl;
    } else if(input > 7) {
        std::cout << "eight" << endl;
    } else if(input > 6) {
        std::cout << "seven" << endl;
    } else if(input > 5) {
        std::cout << "six" << endl;
    } else if(input > 4) {
        std::cout << "five" << endl;
    } else if(input > 3) {
        std::cout << "four" << endl;
    } else if(input > 2) {
      std::cout << "three" << endl;
    } else if(input > 1) {
        std::cout << "two" << endl;
    } else  {
        std::cout << "one" << endl;
    }
    
   return 0;
}


#include <iostream>
using namespace std;

int main(void) {

 int i=0, r; 

 while(i<3) {

switch(i) { 

    case 0: r = i; break; 

    case 1: r = i+1; break; 

    case 2: r = i+2; 

    case 3: r = i+3; 

  }

 i++; 

 } 

cout <<r; 

}
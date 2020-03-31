#include "all_tests.h"
#include <cassert>
#include <iostream>
#include <map>
using namespace std;

typedef char tH3SZSname[8];

struct tStationNames
{
  tH3SZSname stationname[8];
} aStationNames[8]=
{
 {'H', 'A', 'N', 'N', 'O', 'V', 'E', 'R'},
 {'V', 'e', 'c', 'h', 'e', 'l', 'd', 'e'},
 {'J', 'a', 'u', 'n', 'd', 'e', '\0', '\0'},
 {'W', 'o', 'l', 'f', 'e', 'n', 'b', 'u'},
 {'E', 'R', 'O', 'D', 'E', '\0', '\0', '\0'},
 {'D', 'E', 'L', 'H', 'I', '\0', '\0', '\0'},
 {'S', 't', 'o', 'e', 'c', 'k', 's', 'e'},
 {'B', 'r', 'n', 's', 'c', 'h', 'w', 'g'},
};



int main()
{

	cout<<*aStationNames[2].stationname<<endl;
	

	getchar();	
    return 0;
}
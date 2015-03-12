#include <iostream>
#include <vector>
#include <string>
#include "StrBlob.h"

using namespace std;


int main(int argc, char *argv[])
{
	StrBlob b1;
	StrBlob b2 = {"a","an","the"};
	b1 =b2;
	b2.push_back("about");
	return 0;
}
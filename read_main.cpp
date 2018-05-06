#include "parsehead.pb.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(void)
{
	ifstream inf("a.txt",ios::in | ios::binary);
	hanplayer::Parse cmd;
	cmd.ParseFromIstream(&inf);
	std::cout<<"cmd:"<<cmd.mutable_haha()->cmd()<<std::endl;
	std::cout<<"subcmd:"<<cmd.mutable_haha()->subcmd()<<std::endl;
	return 0;
}



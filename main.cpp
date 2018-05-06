#include "add.pb.h"
#include "head.pb.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	hanplayer::Add a;
	a.mutable_head()->set_cmd("add");
	a.mutable_head()->set_subcmd("device");
	a.set_num(555);

	ofstream of("a.txt",ios::out|ios::binary);
	a.SerializeToOstream(&of);
	return 0;
}

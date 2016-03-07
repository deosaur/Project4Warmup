#include <iostream>
#include <cstring> 

#include "DiskList.h"

using namespace std;


int main()
{
    DiskList x("mylist.dat");
    x.push_front("Freshdfjhdjkfhjksdfhkjsdfhjksdhfkjdshfkjsdhfkjsdhfjksdhfkjsdhfkjsdhfkjdshfjksdhfkjdshfkjdshfkjdshfkjdshfkjdshfasjkdhkjashdkjashdkjashdkjashdjksahdkjsahdkjashdkjsahdjkashdjksahdjksahdkjashdkjashdkjsahdkjashdjkashdjkashdkjashdkjsahdkjashdkjashdkjashdkjashdkjashdkjashdkjashdkjashdkjsahdkjashdkjsahdkjsahdkjashdkjsahdkjsahdkjashdsjakdhkajshdkjashdjkashdjkashdkjashjkdhaskjhdkjashdjkashdjkashdkjahsdkjahsdjkhasjkdhasjkdhaskjdhakjshdjkashdkjashdjkashdjk");
    x.push_front("Fred");
    x.push_front("Lucy");
    x.push_front("Ethel");
    x.push_front("Ethel");
    x.push_front("Lucy");
    x.push_front("Fred");
    x.push_front("Ethel");
    x.push_front("Ricky");
    x.push_front("Lucy");
    x.remove("Lucy");
    x.push_front("Fred");
    x.push_front("Ricky");
    x.printAll();  // writes, one per line
		  // Ricky  Fred  Ricky  Ethel  Fred  Ethel  Ethel  Fred
}

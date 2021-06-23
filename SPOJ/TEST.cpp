#include <iostream>
using namespace std;

// Check Examples


//Compiler version g++ 6.3.0

int main()
{
	int n;
	do {
		
		cin>>n;
		if(n!=42) {
			cout<<n<<"\n";
		} 
	} while(n!=42);
    return 0;
}
//Code in C++
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int testcases,i,input,zeroes,c;//Declare all to be integers because we want decimals to be truncated after division.
    cin>>testcases;
        for(i=0;i<testcases;i++)
    {
        zeroes=0;
        cin>>input;
        c=5;
        while((input/c)>0)//(input/c) is a non negative integer.
        {
            zeroes=zeroes+(input/c);
            c=c*5; //Divide input by a higher power of 5
        }
        cout<<zeroes<<"\n";
    }

}

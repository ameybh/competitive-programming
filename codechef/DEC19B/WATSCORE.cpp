#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    //cout << "Hello, Dcoder!";
    int t;
    cin>>t;
    while(t--) {
      int n;
      cin >> n;
      int ps[12];
      
      for(int i=0;i<=12;i++) {
        ps[i]=0;    
      }
      
      for(int i=0;i<n;i++) {
        int x,y;
        cin >> x >> y;
        if(y>ps[x]) {
          ps[x] = y;
        }    
      }
      int sum=0;
      for(int i=1;i<9;i++)
        sum+=ps[i];
        
      cout << sum << "\n";
     
      
    }
    
    return 0;
}
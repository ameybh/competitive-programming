#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0) {
        
        int n;
        cin>>n;
        
        int *ns;
        ns = new int[n];
        int sum=0;
        for(int i = 0;i<n;i++) {
            cin>>ns[i];
            sum+=ns[i];
        }
        
        cout<<int(sum/3);
        
        t--;
        if(t!=0) {
            cout<<endl;
        }
    }
	return 0;
}
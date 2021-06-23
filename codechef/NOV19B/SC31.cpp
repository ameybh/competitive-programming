#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main() {
	// your code goes here
	// const std::string s = "1110001101";
	// unsigned long long value = std::bitset<64>(s).to_ullong();
	// std::string binary = std::bitset<8>(128).to_string(); //to binary
 //   std::cout<<binary<<"\n";
 //   unsigned long decimal = std::bitset<8>(binary).to_ulong();
 //   std::cout<<decimal<<"\n";
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		unsigned long long temp = 0;
		for(int i=0; i<n; i++) {
			string bin;
			cin >> bin;
			unsigned long long dec = bitset<10>(bin).to_ullong();
			temp ^= dec;
		}
		string ans = bitset<10>(temp).to_string();
		// cout << ans << "\n";
		unsigned long long count = 0;
		for(int j=0; j<10; j++) {
			if(ans[j]=='1') {
				count++;
			}
		}
		cout << count << "\n";
	}
	return 0;
}
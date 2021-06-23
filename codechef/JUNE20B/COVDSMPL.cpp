// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: ---

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal
// traversal function to avoid long template definition
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
//find version works for all containers. This is present in std namespace.
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define MOD 1000000007
//make sure to change MAXN according to constraints
#define MAXN 100001

std::random_device rand_dev;
std::mt19937       generator(rand_dev());
int rand(int a, int b) {
    const int range_from  = a;
	const int range_to    = b;
	std::uniform_int_distribution<int>  distr(range_from, range_to);
	return distr(generator);
}

int n,p,x;
vector<vector<int>> a;
void solution() {
	cin >> n >> p;
	a.assign(n, vector<int> (n,0));
	vector<int> rowCnt(n,0);
	//~vector<int> colCnt(n,0);
	
	cout << 1 << " " << 1 << " " << 1 << " " << n << " " << n << endl;
	cin >> x;
	int totalCnt = x;
	if (totalCnt == 0) {
		cout << 2 << endl;
		for (auto& e:a) {
			for (auto& c:e) {
				cout << c << " ";
			}
			cout << "\n";
		}	
		cin >> x;
		if (x == -1)
			exit(0);
		return;
	}
		
		
	//~int rowCurr = 0, colCurr = 0;
	int rowCurr = 0;
	//~vector<int> rs1(n), cs1(n);
	vector<int> rs1(n);
	rep(i,0,n) {
		rs1[i] = i+1;
	}		
	//~rep(i,0,n) {
		//~cs1[i] = i+1;
	//~}	
	
	vector<int> s1(n*n);
	rep(i,0,n*n) {
		s1[i]=i;
	}
		
	for (int i=0; i<n && (int) rs1.size() > 0; i++) {
		if (rowCurr == totalCnt)
			break;
		int ind = rand(0,(int) rs1.size()-1);
		int val = rs1[ind];
		rs1.erase(rs1.begin()+ind);
		cout << 1 << " " << val << " " << 1 << " " << val << " " << n << endl;
		cin >> rowCnt[val-1];
		rowCurr += rowCnt[val-1];
		if (rowCurr == 0) {
			for (int j=0; j<n; j++) {
				int data = (val-1)*n + j;
				auto pos = lower_bound(all(s1), data);
				if (pos != s1.end() && *pos == data) {
					s1.erase(pos);
				}
			}
		}
	}	
	
	
	//~for (int i=0; i<n && (int) cs1.size() > 0; i++) {
		//~if (colCurr == totalCnt)
			//~break;
		//~int ind = rand(0,(int) cs1.size()-1);
		//~int val = cs1[ind];
		//~cs1.erase(cs1.begin()+ind);
		//~cout << 1 << " " << 1 << " " << val << " " << n << " " << val << endl;
		//~cin >> colCnt[val-1];
		//~colCurr += colCnt[val-1];
		//~if (colCurr == 0) {
			//~for (int j=0; j<n; j++) {
				//~int data = j*n + val-1;
				//~auto pos = lower_bound(all(s1), data);
				//~if (pos != s1.end() && *pos == data) {
					//~s1.erase(pos);
				//~}
			//~}
		//~}
	//~}	
	

	int e_cnt;
	while (totalCnt > 0 && (int) s1.size() > 0) {
		int ind = rand(0,(int) s1.size()-1);
		int val = s1[ind];
		s1.erase(s1.begin()+ind);
		int row = val/n;
		int col = val%n;
		//~if (rowCnt[row] == 0 || colCnt[col] == 0)
			//~continue;
		if (rowCnt[row] == 0)
			continue;
			
		cout << 1 << " " << row+1 << " " << col+1 << " " << row+1 << " " << col+1 << endl;
		cin >> e_cnt;
		if (e_cnt == 1) {
			totalCnt--;
			rowCnt[row]--;
			//~colCnt[col]--;
			a[row][col] = 1;
		}
		
	}
	
	
	
	
	
	//~ask n^2 queries
	//~rep(i,1,n+1) {
		//~if (totalCnt == 0)
			//~break;
		//~int thisRowCnt = rowCnt[i-1];
		//~vector<int> s1 (n,0);
		//~rep(j,0,n)
			//~s1[j] = j+1;
		
		//~while (thisRowCnt > 0 && totalCnt > 0) {
			//~int ind = rand(0,(int) s1.size()-1);
			//~int col = s1[ind];
			//~s1.erase(s1.begin()+ind);
			//~if (colCnt[col-1] == 0)
				//~continue;
			
			//~cout << 1 << " " << i << " " << col << " " << i << " " << col << endl;
			//~cin >> x;
			//~if (x == -1)
				//~exit(0);
			//~if (x) {
				//~a[i-1][col-1] = 1;
				//~totalCnt--;
				//~thisRowCnt--;
				//~colCnt[col-1]--;
			//~}
		//~}
	//~}
	
	cout << 2 << endl;
	for (auto& e:a) {
		for (auto& c:e) {
			cout << c << " ";
		}
		cout << "\n";
	}
	
	cin >> x;
	if (x == -1)
		exit(0);
}

int main() {
	//~ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}

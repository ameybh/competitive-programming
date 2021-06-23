// Author: Amey Bhavsar - ameybhavsar24@(github & twitter)
// IDE: Geany on Ubuntu 20.04
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define MOD 1000000007
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	string b;
	while (1)
	 {
		cin >> b;
		if (b == "end") break;
		vector< string > board(3);
		int xCnt = 0, oCnt = 0;
		board[0] = b.substr(0,3);
		board[1] = b.substr(3,3);
		board[2] = b.substr(6,3);
		for (auto& e:board) {
			xCnt += count_if(e.begin(), e.end(), [](char x) {return x == 'X';});
			oCnt += count_if(e.begin(), e.end(), [](char x) {return x == 'O';});
		}	
		
		int xWins = 0, oWins = 0;
		bool xWinsDiag1 = 1, xWinsDiag2 = 1, oWinsDiag1 = 1, oWinsDiag2 = 1;
		for (int i=0; i<3; i++) {
			bool xWinsRow = 1, oWinsRow = 1, xWinsCol = 1, oWinsCol = 1;
			for (int j=0; j<3; j++) {
				xWinsRow &= board[i][j] == 'X';
				xWinsCol &= board[j][i] == 'X';
				oWinsRow &= board[i][j] == 'O';
				oWinsCol &= board[j][i] == 'O';
				if (i == j) {
					xWinsDiag1 &= board[i][j] == 'X';
					oWinsDiag1 &= board[i][j] == 'O';
				}
				if (i+j == 2) {
					xWinsDiag2 &= board[i][j] == 'X';
					oWinsDiag2 &= board[i][j] == 'O';
				}
			}
			xWins += xWinsRow + xWinsCol;
			oWins += oWinsRow + oWinsCol;
		}
		xWins += xWinsDiag1 + xWinsDiag2;
		oWins += oWinsDiag1 + oWinsDiag2;
		
		int diff = xCnt - oCnt;
		if ((xWins > 0 && oWins > 0) || diff < 0 || diff > 1 || (oWins > 0 && diff != 0) || (xWins > 0 && diff != 1)) {
			/*
			 * Conditions for unreachable board state:
			 * 1. There cannot be 2 winners.
			 * 2. Count of X should be equal to count of O or 1 more.
			 * 3. If O has won the game, it's only possible when count of X equals count of O.
			 * 4. If X has won the game, it's only possible when count of X is one greater than count of O.
			 */ 
			cout << "invalid\n";
		} else {
			if (xWins > 0 || oWins > 0 || (xCnt + oCnt == 9)) {
				cout << "valid\n";
			} else {
				cout << "invalid\n";
			}
		}
	}
	return 0;
}

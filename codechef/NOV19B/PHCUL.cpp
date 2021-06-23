#include <iostream>
#include <cmath>
#include <utility>
#include <vector>
#include <tuple>
#include <iomanip>
#include <limits>
// #include <bits/stdc++.h>
using namespace std;

#define ld long double
// #define pointDat tuple <long double, long long, long long>
#define pointData tuple<int,int,ld>
#define MIN(a, b) ((a) < (b) ? (a) : (b))


ld getDistance(pair<int,int> p1, pair<int,int> p2) {
	ld dis = sqrt( pow(p2.first-p1.first,2) + pow(p2.second-p1.second,2) );
	return dis;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int x,y,n,m,k;
        cin >> x >> y >> n >> m >> k;
        pair <int,int> shareChat = make_pair(x,y);
        // point sets
        vector< pair <int,int> >  np,mp,kp;

        for(int i=0;i<n;i++) {
            int x,y;
            cin >> x >> y;
            np.push_back(make_pair(x,y));
        }

        for(int i=0;i<m;i++) {
            int x,y;
            cin >> x >> y;
            mp.push_back(make_pair(x,y));
        }

        for(int i=0;i<k;i++) {
            int x,y;
            cin >> x >> y;
            kp.push_back(make_pair(x,y));
        }
        ld minDistanceN = numeric_limits<ld>::infinity();
        int pathFollowedN[6];
        for(int p=0; p<n; p++) {
            ld fromShareChat = getDistance(shareChat, np[p]);
            for(int q=0; q<m; q++) {
                ld newDistance = getDistance(np[p], mp[q]);
                for(int r=0; r<k; r++) {
                    ld newDistance2 = getDistance(mp[q],kp[r]);
                    ld totalDistance = fromShareChat+newDistance+newDistance2;
                    // cout << totalDistance << "---";
                    // cout << "(" << shareChat.first << "," << shareChat.second << ")";
                    // cout << "(" << np[p].first << "," << np[p].second << ")";
                    // cout << "(" << mp[q].first << "," << mp[q].second << ")";
                    // cout << "(" << kp[r].first << "," << kp[r].second << ")";
                    // cout << "\n";
                    if( (totalDistance) < minDistanceN) {
                        minDistanceN = totalDistance;
                        // pathFollowed[0] = np[p];
                        // pathFollowed[1] = mp[q];
                        // pathFollowed[2] = kp[r];
                        // pathFollowedN[0] = np[p].first;
                        // pathFollowedN[1] = np[p].second;

                        // pathFollowedN[2] = mp[q].first;
                        // pathFollowedN[3] = mp[q].second;

                        // pathFollowedN[4] = kp[r].first;
                        // pathFollowedN[5] = kp[r].second;


                    }
                }
            }
        }

        // cout << "\n";

        ld minDistanceM = numeric_limits<ld>::infinity();
        int pathFollowedM[6];
        for(int q=0; q<m; q++) {
            ld fromShareChat = getDistance(shareChat, mp[q]);
            for(int p=0; p<n; p++) {
                ld newDistance = getDistance(mp[q], np[p]);
                for(int r=0; r<k; r++) {
                    ld newDistance2 = getDistance(np[p],kp[r]);
                    ld totalDistance = fromShareChat+newDistance+newDistance2;
                    // cout << totalDistance << "---";
                    // cout << "(" << shareChat.first << "," << shareChat.second << ")";
                    // cout << "(" << np[p].first << "," << np[p].second << ")";
                    // cout << "(" << mp[q].first << "," << mp[q].second << ")";
                    // cout << "(" << kp[r].first << "," << kp[r].second << ")";
                    // cout << "\n";
                    if( (totalDistance) < minDistanceM) {
                        minDistanceM = totalDistance;
                        // pathFollowed[0] = np[p];
                        // pathFollowed[1] = mp[q];
                        // pathFollowed[2] = kp[r];
                        // pathFollowedM[0] = mp[q].first;
                        // pathFollowedM[1] = mp[q].second;

                        // pathFollowedM[2] = np[p].first;
                        // pathFollowedM[3] = np[p].second;

                        // pathFollowedM[4] = kp[r].first;
                        // pathFollowedM[5] = kp[r].second;


                    }
                }
            }
        }
        ld minDistance = MIN(minDistanceM,minDistanceN);
        cout << fixed;
        cout << setprecision(10) << minDistance << "\n";
        // cout << "M's path\n";
        // for(int i=0; i<6; i+=2) {
        //     cout << i << ": " << pathFollowedM[i] << "," << pathFollowedM[i+1] << "\n";
        // }
        // cout << "N's path\n";
        // for(int i=0; i<6; i+=2) {
        //     cout << i << ": " << pathFollowedN[i] << "," << pathFollowedN[i+1] << "\n";
        // }

        
    }

    return 0;
}
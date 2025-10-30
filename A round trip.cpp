#include<bits/stdc++.h>
using namespace std;


int main(){




    int t;
    if (!(cin >> t)) return 0;

    while (t--) {

        long long R0, X, D;
        int n;


        cin >> R0 >> X >> D >> n;


        string rounds;
        cin >> rounds;


        long long min_R = R0;
        long long max_R = R0;


        int rated_count = 0;


        for (int i = 0; i < n; ++i) {
            char round_type = rounds[i];

            if (round_type == '1') {


                rated_count++;


                min_R = max(0LL, min_R - D);
                max_R = max_R + D;

            } else if (round_type == '2') {

                if (min_R < X) {

                    rated_count++;


                    min_R = max(0LL, min_R - D);


                    long long highest_rated_R_old = min(X - 1, max_R);
                    max_R = highest_rated_R_old + D;

                } else {

                }
            }
        }


        cout << rated_count << "\n";
    }

    return 0;
}

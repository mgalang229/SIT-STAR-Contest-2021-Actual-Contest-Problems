#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
  	int x, y;
  	cin >> x >> y;
  	x--; y--;
  	int walking_time = x * 20;
  	int elevator_time = (5 * y)  + (x * 5);              
  	cout << min(walking_time, elevator_time) << '\n';
  }
	return 0;
}      

#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
  	int x1, y1, x2, y2, x3, y3;
  	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  	if (x1 != x2 && x1 != x3) {
  		cout << x1 << " " << (y1 != y2 ? y2 : y3);
  	} else if (x2 != x1 && x2 != x3) {
  		cout << x2 << " " << (y2 != y1 ? y1 : y3);
  	} else if (x3 != x1 && x3 != x2) {
  		cout << x3 << " " << (y3 != y1 ? y1 : y2);
  	} 
  	cout << '\n';
  }
	return 0;
}      

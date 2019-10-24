#include <iostream>
#include <string>

using namespace std;

int maxNum(int a, int b){
	if(a>b){
		return a;
	} else {
		return b;
	}
}

int cutRoad(int *p, int n){
	int r[n+1];
	r[0] = 0;
	int q;
	for(int j = 1; j <= n; j++){
		q = -1;
		for(int i = 0; i < j; i++){
			q = maxNum(q, p[i] + r[j - i - 1]);
		}
		r[j]=q;
	}
	r[n] = q;
	return q;
}

int main() {
	int n = 4;
	int p[] = {1,5,8,9};
	cout << cutRoad(p, n);
}
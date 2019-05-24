#include <iostream>
#include <vector>
using namespace std;
bool ans[10000] = {};
vector <int> map[10000];
void mark(int x) {
//	cout << "mark " << x << "\n";
	if (!ans[x]) {
		ans[x] = 1;
		for (int i = 0; i < map[x].size(); i++) {
			if (ans[map[x][i]-1])
				continue;
			else
				mark(map[x][i]-1);
		}
	}
//	for (int i = 0; i < 10; i++)
//		cout << ans[i] << " ";
//	cout << "\n";
}

int main() {
	int N, M, L, Q;
	cin >> N >> M >> L >> Q;
		
	for(int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		map[a-1].push_back(b);
	}
	
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < map[i].size(); j++) {
//			cout << map[i][j] << " ";
//		}
//		cout << "\n";
//	}
	
	for (int i = 0; i < L; i++) {
		int x;
		cin >> x;
		mark(x-1);
	}
	
	for (int i = 0; i < Q; i++) {
		int y;
		cin >> y;
		if (ans[y-1]) {
			cout << "TUIHUOOOOOO\n";
		} else {
			cout << "YA~~\n";
		}
	}
} 

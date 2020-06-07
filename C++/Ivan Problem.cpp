#include <bits/stdc++.h>
#define MAX 1005

using namespace std;

int N, M;
char arr[MAX][MAX];

int dr[4] = {-1,0,1,0};
int dc[4] = {0,1,0,-1};

bool isInBounds (int r, int c) {
    if (0 <= r && r < N) {
        if (0 <= c && c < M) {
            return true;
        }
    }
    return false;
}

void fillArr(int r, int c) {
    if (arr[r][c] == '.') return;
    else {
        arr[r][c] = '.';
        for (int i = 0; i < 4; i++) {
            int nextR = r + dr[i];
            int nextC = c + dc[i];
            if (isInBounds(nextR, nextC)) {
                fillArr(nextR,nextC);
            }
        }
    }
}

int main(void) {
    cout << "Enter R and C:\n";
    cin >> N >> M;
    cout << "Enter character array:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }

    //Now do BFS
    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] == '*') {
                fillArr(i,j);
                ans++;
            }
        }
    }
    cout << ans;
}

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define INF 987654321

using namespace std;

int solution(vector<string> arr) 
{
	int n = arr.size() / 2 + 1;
	
    vector<vector<int>> dmax(n, vector<int>(n, -INF));
	vector<vector<int>> dmin(n, vector<int>(n, INF));

    for (int i = 0; i < n; ++i)
		dmax[i][i] = dmin[i][i] = stoi(arr[i*2]);
	for (int t = 1; t < n; ++t) 
    {
		for (int i = 0; i < n-t; ++i) 
        {
			int j = t + i;
			for (int k = i; k < j; ++k) 
            {
				if (arr[k*2+1] == "+") 
                {
					dmax[i][j] = max(dmax[i][j], dmax[i][k] + dmax[k+1][j]);
					dmin[i][j] = min(dmin[i][j], dmin[i][k] + dmin[k+1][j]);
				} else 
                {
					dmax[i][j] = max(dmax[i][j], dmax[i][k] - dmin[k+1][j]);
					dmin[i][j] = min(dmin[i][j], dmin[i][k] - dmax[k+1][j]);
				}
			}
		}
	}
	return dmax[0][n-1];
}

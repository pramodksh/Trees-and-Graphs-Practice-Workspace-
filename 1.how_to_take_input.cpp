#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
int graph[N][N];

int main(){
	
	int n,m;
	cin>>n>>m;
	for(int i = 0; i < m; i++){
		int v1,v2;
		cin>>v1>>v2;
		graph[v1][v2] = 1;
		graph[v2][v1] = 1;
	}
	for(int i = 0; i<n ; ++i){
		for (int j = 0; j < n; ++j)
		{ 
			printf("%d\t",graph[i][j]);
		}
		cout<<endl;
	}
	return 0;
}
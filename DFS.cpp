#include<bits/stdc++.h>
using namespace std;

#define N 20
vector<int> G[N];

bool visited[N];

void dfs(int vertex){

	cout<<"reached vertex : "<<vertex<<endl;
	visited[vertex] = true;
	for(int child : G[vertex]){
		// cout<<"Flag1";

		if(visited[child]) continue;

		dfs(child);
	}
	return;
}


int main(){
	int n,m;
	cin>>n>>m;
	int v1, v2;

	for (int i = 0; i < m; ++i)
	{
		cin>>v1>>v2;
		G[v1].push_back(v2);
		G[v2].push_back(v1);
		cout<<"Pushed "<<v2 <<"into"<<v1<<endl;
	}
	dfs(1);


	printf("\n\nDone! Lol");
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define N 10

vector<int> g[N];
bool visited[N];

vector<int> presentList;
vector<vector<int>> allLists;


void dfs(int vertex){
	cout<<"visited"<<vertex<<endl;
	visited[vertex] = true;
	presentList.push_back(vertex);
	for(int child : g[vertex]){

		if(visited[child]) continue;
		dfs(child);

	}
	return;
}

int main(){

	int n,m;
	cin>>n>>m;
	int v1,v2;
	for (int i = 0; i < m; ++i)
	{
		cin>>v1>>v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1)	;
	}

	int count = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (visited[i]) continue;
		presentList.clear();
		count++;

		dfs(i);
		allLists.push_back(presentList);

	}

	cout<<count;

	cout<<"List of Components are : "<<endl;
	for(auto i : allLists){
		for(auto j : i){
			cout<<j<<"  ";
		}
		cout<<endl;
	}

	return 0;
}
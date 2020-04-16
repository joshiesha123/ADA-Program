#include<iostream>
using namespace std;	
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;
void bfs(int v)
{
	for(i=1;i<=n;i++)
		if(a[v][i] && !visited[i])
			q[++r]=i;
		if(f<=r)
		{
			visited[q[f]]=1;
			bfs(q[f++]);
		}
}
int main()
{
	int v;
	cout<<"Enter the no of vertices"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		q[i]=0;
		visited[i]=0;
	}
	cout<<"Enter graph data in matrix"<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the Starting vertex:"<<endl;
	cin>>v;
	bfs(v);
	cout<<"The nodes which are reachable are:"<<endl;
	for(i=1;i<=n;i++)
	{
		if(visited[i])
		cout<<i;
		else
		{
		cout<<"BFS is not possible.Not all nodes are reachable"<<endl;
		break;
		}
	}
}

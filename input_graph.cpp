#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m ;
    cin>>n>>m;
    vector<vector<int>> edgelist;
    // there will be m lines indicating m edges 
    int a,b;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        edgelist[a].push_back(b);
        edgelist[b].push_back(a);
    }

    //printing the edge list
    for(int i=0;i<edgelist.size();i++)
    {

        cout<< "Neighbours of "<<i<<endl;
        for(int j=0;j<edgelist[i].size();j++)
        {
            cout<<j<<" "
        }
    }
}
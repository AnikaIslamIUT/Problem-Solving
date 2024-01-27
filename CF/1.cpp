
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> ans2;
    vector<int> ans;
    vector<vector<int>> graph(n+1);
    vector<int> inDegree(n+1);
    queue<int> q;


    for(int i=1; i<=m; i++)
    {
        int a ;
        int b ;
        cin>>a>>b;
        graph[a].push_back(b);
        ++inDegree[b];
    }

    for (int i = 1; i <= n; ++i)
        if (inDegree[i] == 1)
            q.push(i);

    while (!q.empty())
    {
        int a = q.front();
        q.pop();
        ans.push_back(a);
        for (int b=1; b<=n; b++)
            if (--inDegree[b] == 1)
                q.push(b);
    }



        for (auto it =  ans.begin(); it !=  ans.end(); it++)
            cout << *it << " ";


}

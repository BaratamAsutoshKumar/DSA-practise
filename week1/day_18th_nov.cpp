#include<bits/stdc++.h>
using namespace std;
vector<int> getConcatenation(vector<int>& nums){
    vector<int> ans;
    for(int i=0;i<2;i++)
    {
        for(auto j:nums)
        {
            ans.push_back(j);
        }
    }

    return ans;
}
int main()
{
    int n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        nums.push_back(i);
    }
    vector<int> ans= getConcatenation (nums);

    cout<< "printing ans"<<endl;
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
}
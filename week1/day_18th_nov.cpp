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

vector<int> permutation(vector<int>& nums)
{
    vector<int> ans;
    for(auto i:nums)
    {
        ans.push_back(nums[i]);
    }
    return ans;

}

int findValueafterOperations(vector<string>& operations)
{
    int num=0;
    for(auto i:operations)
    {
        if(i=="++X" || i=="X++")
        {
            num++;
        }
        else
        {
            num--

        }
    }
    return num;

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
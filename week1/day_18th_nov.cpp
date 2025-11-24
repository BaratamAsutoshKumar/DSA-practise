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



vector<int> rearrange(vector<int>& nums)
{
    int n=nums.size()/2;
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        ans.push_back(nums[i]);
        ans.push_back(nums[i+n]);
    }
    return ans 
}

void reverse_Array(int[] arr)
{
    int start=0, end=arr.size()-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

// adding all possible permutation of a vector
vector<vector<int>> permute(vector<int>& nums)
{
    sort(num.begin().num.end());
    vector<vector<int>> ans;
    do{
        ans.push_back(nums);
    }while(next_permuatation(nums.begin(), nums.end()));

    return ans;
}

map<int,int> countFrequency(vector<int>& nums)
{
    map<int,int> freq;
    for(auto i: nunms)
    {
        freq[i]++;
    }

    return freq;
}

vector<int> findMinMax(vector<int>& nums)
{
    int minVal=INT_MAX;
    int minFreq=INT_MAX;
    int maxVal=INT_MIN;
    int maxFreq= INT_MIN;
    map<int,int> freq;
    for(auto i: nums)
    {
        freq[i]++;
        if(i<minVal)
        {
            minVal=i;
        }
        else if(i>maxVal)
        {
            maxVal=i;
        }
    }

    for(auto i: freq)
    {
        if(i.second>maxFreq)
        {
            maxFred=i.second;
        }
        else if(i.second<minFreq)
        {
            minFreq=i.second;
        }

    }

    vector<int> result;
    result.push_back(minVal);
    result.push_back(maxVal);
    result.push_back(minFreq);
    result.push_back(maxFreq);

    return result;
}

void selection_sort(vector<int>& nums)
{
    // selection sort algorithm O(n^2)
    int min =-1;
    for(int i=0;i<nums.,size();i++)
    {
        min =i;
        for(int j=i;j<nums.size();j++)
        {
            if(arr[min]<arr[j])
            {
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }


    // array will be sorted 
}


// Bubble sort 

void bubble_sort(vector<int>& nums)
{
    //bubble sort works based on Adjacent swapping O(n^2)
    int n=nums.size();
    for(int i=n-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(nums[j]>nums[j+1])
            {
                swap(nums[j],nums[j+1]);
            }
        }
    }
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
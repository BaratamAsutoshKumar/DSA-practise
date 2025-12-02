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

//optimised bubble sort (in case of sortred array keeping the best case time complexity O(n))
// How to do is check the number of swaps in first iteration, if there are no swaps, then break the loop 


void optimised_bubble_sport(vector<int>& nums)
{
    for(int i=nums.size()-1; i>=0;i--)
    {
        int num_swaps=0;
        for(int j=0;j<i;j++)
        {
            if(nums[j]>nums[j+1])
            {
                swap(nums[j]mums[j+1]);
                num_swaps++;
            }
        }
        if(nums_swaps==0)
        {
            return;
        }
    }
}

//insertion sort

void insertion_sort(vector<int>& nums)
{
    for(int i=0;i<nums.size();i++)
    {
        int j=i;
        while(j>0 && nums[j]<nums[j-1])
        {
            swap(nums[j],nums[j-1]);
            j--;
        }
    }
}


//merge sort O(nlogn)
void mergesort(vector<int>& nums)
{


}


//avoiding repetition in array
//Assume input array is sorted
// lets first do with O(nlogn)+O(n) array 
void avoid_reps(vector<int>& nums)
{
    sort(nums.begin(),nums.end());//this was not required as said input is sorted array


}



// move zeros to the end

void move_zeros(vector<itn>& nums)
{
    int i=0, j=-1;
    while(i<nums.size())
    {
        if(nums[i]!=0)
        {
            swap(nums[i],nums[j+1]);
            j++;
        }
        i++;
    }
}
// finding smallest and second smallest ellemnt in the array in O(N)
pair<int,int> firstsmall_secondsmall(vector<int>& nums)
{
    int first_min= INT_MAX,second_min=INT_MAX;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]<first_min)
        {
            second_min=first_min;
            first_min=nums[i];
        }
        else if(nums[i]>second_min && nums[i]!=first_min)
        {
            second_min=nums[i];
        }
    }
    pair<int,int> ans={first_min,second_min};
    return ans;
}

// finding largeest and second largest element in the array in O(N)



pair<int,int> findfirstmax_secondmax(vector<int>& nums)
{
    int first_max=INT_MIN, second_max=INT_MIN;

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>first_max)
        {
            second_max=first_max;
            first_max=nums[i];
        }
        else if(nums[i]>second_max && nums[i]!=first_max)
        {
            second_max=nums[i];
        }
    }

}

// finding non-repeating value in the array 
int singleNumber(vector<int>& nums)
[
    int ans=0;
    for(auto i:nums)
    {
        ans=ans^i;
    }
    return ans;
]



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
#include<bits/stdc++.h>
using namespace std;


void merge(vector<int>& nums , int start , int mid , int end )
{
    int i =start , j=mid+1;
    vector<int> temp;
    while(i<=mid && j<=end)
    {
        if(nums[i]<nums[j])
        {
            temp.push_back(nums[i]);
            i++;
        }
        else
        {
            temp.push_back(nums[j]);
            j++;
        }
    }
    while(i<=mid)
    {
        temp.push_back(nums[i]);
        i++;
    }
    while(j<=end)
    {
        temp.push_back(nums[j]);
        j++;
    }


    int k =start;
    for(int i=0;i<temp.size();i++)
    {
        nums[k]=temp[i];
        k++;
    }
}
void mergeSortaux(vector<int>& nums, int start, int end)
{
    if(start>= end)
    {
        return;
    }
    int mid =(start+end)/2;
    mergeSortaux(nums, start,mid);
    mergeSortaux(nums,mid+1, end);
    merge(nums, start, mid, end);
}
void mergesort(vector<int>& nums)
{
    mergeSortaux(nums, 0, nums.size()-1);
}
int main(){
    //Write your code here. 
    vector<int> nums;
    for(int i =10;i>=0;i--)
    {
        nums.push_back(i);
        nums.push_back(10-i);
    }
    cout<<"Array before sorting"<<endl;
    for(auto i: nums)
    {
        cout<<i<<"\t";
    }
    cout<<endl;
    mergeSortaux(nums, 0, nums.size()-1);
    cout<<"Array after sorting"<<endl;
    for(auto i: nums)
    {
        cout<<i<<" ";
    }
    return 0;
}
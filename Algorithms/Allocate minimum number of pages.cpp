/*
You are given N number of books. Every ith book has Ai number of pages. The books are arranged in ascending order.

You have to allocate contiguous books to M number of students. There can be many ways or permutations to do so. In each permutation, one of the M students will be allocated the maximum number of pages. Out of all these permutations, the task is to find that particular permutation in which the maximum number of pages allocated to a student is the minimum of those in all the other permutations and print this minimum value.

Each book will be allocated to exactly one student. Each student has to be allocated at least one book.
*/

//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isPossible(int A[],int N,int m,int mid)
{
   int studentCount = 1;
   int pageSum = 0;
    for(int i=0;i<N;i++)
    {
        if(pageSum + A[i] <= mid)
        {
            pageSum += A[i];
        }
        else
        {
            studentCount++;
            if(A[i] > mid || studentCount > m)
            {
                return false;
            }
            pageSum = A[i];
        }
    }
    return true;
}
    int findPages(int A[], int N, int M) 
    {
    if(N<M)
    {
        return -1;
    }
    int start = 0, sum = 0;
    for(int i=0;i<N;i++)
    {
        sum += A[i];
    }
    int end = sum;
    int answer = -1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(isPossible(A,N,M,mid))
        {
            answer = mid;
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    return answer;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends
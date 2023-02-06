//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int> positive;
        vector<int> negative;
        for(int i=0;i<n;i++) {
            if(arr[i]>0)
                positive.push_back(arr[i]);
            else
                negative.push_back(arr[i]);
        }
        std::copy(positive.begin(), positive.end(), arr);
        std::copy(negative.begin(),negative.end(),arr+positive.size());
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends
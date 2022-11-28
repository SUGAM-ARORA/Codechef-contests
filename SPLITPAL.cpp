#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int low= 0, high=n-1, res=0;

while(low < high)
{
if(arr[low] == arr[high]) 
low++, high--;
else if
(arr[low] > arr[high])
{
arr[low] =arr[low] - arr[high];
high--;
res++;
}
else
{
arr[high]=arr[high] - arr[low];
	        low++;
	      res++;
	    }
}
	    cout<<res<<endl;
	}
	
	return 0;
}
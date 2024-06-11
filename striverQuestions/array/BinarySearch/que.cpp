//given an ascending sorted rotated array arr of distinct integers of size n. The array is right-rotated k times. Find the value of k.

class Solution{
public:	
	int findKRotation(int arr[], int n) {
        int low = 0;
        int high = n - 1;
        int ans=INT_MAX;
        int index=-1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[low] <= arr[high]) {
                if(arr[low]<ans){
                    index=low;
                    ans=arr[low];
                }
                break;
            }
            if(arr[low]<=arr[mid]){
                if(arr[low]<ans){
                    index=low;
                    ans=arr[low];
                }
                    low = mid + 1;
            } 
            else {
                high = mid - 1;
                if(arr[mid]<ans){
                    index=mid;
                    ans=arr[mid];
                }
            }
        }    
        return index;
    }
};
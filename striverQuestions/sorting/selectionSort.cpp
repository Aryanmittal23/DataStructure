class Solution
{
    public:
    
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int i=0;i<=n-2;i++){
        int mini = i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp =arr[mini];
        arr[mini] = arr[i];
        arr[i]=temp;
       }
    }
};
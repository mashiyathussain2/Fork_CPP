class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        int result = 0;
        int left_max = 0, right_max = 0;
        int lo = 0, hi = n - 1;
        while (lo <= hi) {
            if (arr[lo] < arr[hi]) {
                if (arr[lo] > left_max)
                   left_max = arr[lo];
                else
                    result += left_max - arr[lo];
                    lo++;
                }
                else {
                    if (arr[hi] > right_max)
                        right_max = arr[hi];
                    else
                        result += right_max - arr[hi];
                        hi--;
                    }
                }
            return result;
       }
};

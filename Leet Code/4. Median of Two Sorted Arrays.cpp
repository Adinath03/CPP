class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = n1 + n2;

        int i = 0;
        int j = 0;
        int k = 0;
        vector<int> nums(n, 0);

        while (i < n1 && j < n2)
        {
            if (nums1[i] < nums2[j])
            {
                nums[k++] = nums1[i++];
            }
            else
            {
                nums[k++] = nums2[j++];
            }
        }

        while (i < n1)
        {
            nums[k++] = nums1[i++];
        }
        while (j < n2)
        {
            nums[k++] = nums2[j++];
        }

        double ans;
        if (n % 2 == 0)
        {
            ans = double(nums[n / 2] + nums[n / 2 - 1]) / 2;
        }
        else
        {
            ans = nums[n / 2];
        }

        return ans;
    }
};
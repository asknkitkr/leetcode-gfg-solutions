class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n = nums1.length;
        int m = nums2.length;

        if (n > m) {
            int[] temp = nums1;
            nums1 = nums2;
            nums2 = temp;
            int tmp = n;
            n = m;
            m = tmp;
        }

        int i, j, imin = 0, imax = n, half = (n + m + 1) / 2;
        while (imin <= imax) {
            i = (imin + imax) / 2;
            j = half - i;
            if (i < n && nums2[j - 1] > nums1[i]) {
                imin = i + 1;
            } else if (i > 0 && nums1[i - 1] > nums2[j]) {
                imax = i - 1;
            } else {
                int maxLeft = 0;
                if (i == 0) {
                    maxLeft = nums2[j - 1];
                } else if (j == 0) {
                    maxLeft = nums1[i - 1];
                } else {
                    maxLeft = Math.max(nums1[i - 1], nums2[j - 1]);
                }
                if ((n + m) % 2 == 1) {
                    return maxLeft;
                }

                int minRight = 0;
                if (i == n) {
                    minRight = nums2[j];
                } else if (j == m) {
                    minRight = nums1[i];
                } else {
                    minRight = Math.min(nums1[i], nums2[j]);
                }

                return (maxLeft + minRight) / 2.0;
            }
        }
        return 0.0;
    }
}

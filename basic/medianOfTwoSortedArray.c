//Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

//The overall run time complexity should be O(log (m+n)).


#include <stdio.h>
#include <limits.h>

double findMedianSortedArrays(int nums1[], int m, int nums2[], int n) {
    if (m > n) {
        // To ensure that nums1 is smaller than nums2
        return findMedianSortedArrays(nums2, n, nums1, m);
    }

    int left = 0, right = m;
    int partitionX, partitionY;
    int maxLeftX, minRightX, maxLeftY, minRightY;

    while (left <= right) {
        partitionX = (left + right) / 2;
        partitionY = (m + n + 1) / 2 - partitionX;

        maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
        minRightX = (partitionX == m) ? INT_MAX : nums1[partitionX];

        maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
        minRightY = (partitionY == n) ? INT_MAX : nums2[partitionY];

        if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
            // We have found the two partitions
            if ((m + n) % 2 == 0) {
                return ((double)fmax(maxLeftX, maxLeftY) + fmin(minRightX, minRightY)) / 2.0;
            } else {
                return (double)fmax(maxLeftX, maxLeftY);
            }
        } else if (maxLeftX > minRightY) {
            // We need to shift the partitionX to the left
            right = partitionX - 1;
        } else {
            // We need to shift the partitionX to the right
            left = partitionX + 1;
        }
    }

    // We should never reach here
    return 0.0;
}
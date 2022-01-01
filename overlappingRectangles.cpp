//Question 2 https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/

//Solution:

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
    // If one rectangle is to left of other
    if (L1[0] >R2[0] || L2[0] >R1[0])
        return 0;

    // If one rectangle is above other
    if (L2[1]<R1[1] || L1[1]<R2[1])
        return 0;

    return 1;
    }
};

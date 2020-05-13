/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */

class Solution {

public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> vec;
        vec =  binaryMatrix.dimensions();
        int rows = vec[0];
        int cols = vec[1];
        int answer=cols;
        for(int i=0;i<rows;i++){
            while(answer>0 && binaryMatrix.get(i,answer-1)==1)
                answer--;
        }
        if(answer == cols)
            answer =-1;
        return answer;

        
    }
};
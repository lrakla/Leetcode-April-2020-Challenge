class Solution {
public:
    bool checkValidString(string s) {
        int maxOpen = 0, minOpen = 0;
        for (char ch : s) {
        if (ch=='(') {
        minOpen++;
        maxOpen++;
        } 
        else if (ch==')'){
        minOpen--; maxOpen--;
        }
        else if (ch=='*') {
        minOpen--; maxOpen++;
        }
        if (maxOpen < 0) { return false;}
        if (minOpen < 0) { minOpen = 0;}
    }
    return minOpen == 0;
        }
  
};
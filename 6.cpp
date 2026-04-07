#include <iostream>
using namespace std;

string convert(string s, int numRows) {
    if (numRows == 1) return s;
    int numCols = (s.length() + numRows - 3) / (numRows*2-2) + 1;
    cout << (s.length() % (numRows*2-2)) << endl;
    string returnStr = "";
    for (int row=0; row<numRows; row++){
        for (int col=0; col<numCols; col++){
            if (row != 0 && row != numRows-1 && col > 0 && col*(2*numRows-2)+row-2*row < s.length()){
                returnStr += s[col*(2*numRows-2)+row-2*row];
            }
            if (col*(2*numRows-2)+row < s.length()){
                returnStr += s[col*(2*numRows-2)+row];
            }
        }
    }
    return returnStr;
}

int main(){
    string input = "ABCDEF";
    cout << convert(input, 5) << endl;
    return 0;
}
#include <string>
#include <vector>

std::string convert(const std::string& s, int numRows) {
    if (numRows == 1 || s.length() <= numRows) {
        return s;
    }

    std::vector<std::string> rows(numRows);
    int currRow = 0, step = 1;

    for (char c : s) {
        rows[currRow] += c;
        if (currRow == 0) {
            step = 1;
        } else if (currRow == numRows - 1) {
            step = -1;
        }
        currRow += step;
    }

    std::string result;
    for (const std::string& row : rows) {
        result += row;
    }

    return result;
}
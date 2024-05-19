#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int leventhstein(string str1, string str2) {
    int val_a = str1.size();
    int val_b = str2.size();

    int mat[val_a + 1][val_b + 1];

    for (int i = 0; i <= val_a; i++) {
        for (int j = 0; j <= val_b; j++) {
            if (i == 0) {
                mat[i][j] = j;

            } else if (j == 0) {
                mat[i][j] = i;

            } else if (str1[i - 1] == str2[j - 1]) {
                mat[i][j] = mat[i - 1][j - 1];

            } else {
                mat[i][j] = 1 + min(min(mat[i][j - 1],
                                        mat[i - 1][j]),
                                  mat[i - 1][j - 1]);
            }
        }
    }

    return mat[val_a][val_b];
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    int result = leventhstein(str1, str2);
    cout << result << endl;
    return 0;
}
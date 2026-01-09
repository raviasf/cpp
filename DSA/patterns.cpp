// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void pattern1(int row) {
    for (row; row > 0; row--) {
        cout << "*****\n";
    }
}

void pattern2(int row) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int row) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << j + 1;
        }
        cout << endl;
    }
}

void pattern4(int row) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << i + 1;
        }
        cout << endl;
    }
}

void pattern5(int row) {
    for (int i = 5; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6(int row) {
    for (int i = 5; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

// good one----->
void pattern7(int row) {
    for (int i = 0; i < row; i++) {
        for (int j = i; j < row - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            if (j == 0)
                cout << "*";
            else
                cout << "**";
        }
        cout << "\n";
    }
}

void pattern8(int row) {
    for (int i = row; i > 0; i--) {
        for (int j = i; j < row; j++) {
            cout << " ";
        }
        for (int k = 0; k < i; k++) {
            if (k == 0)
                cout << "*";
            else
                cout << "**";
        }
        cout << "\n";
    }
}

void pattern9(int row) {
    for (int i = 0; i < row; i++) {
        for (int j = row - 1; j > i; j--) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = row; i > 0; i--) {
        for (int j = row; j > i; j--) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern10(int row) {
    for (int i = 1; i < 2 * row; i++) {
        int diff = abs(row - i);
        for (int j = row; j > diff; j--) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int row) {
    for (int i = 0; i < row; i++) {
        int binary = i % 2 ? 0 : 1;
        for (int j = 0; j <= i; j++) {
            cout << binary % 2;
            binary++;
        }
        cout << endl;
    }
}

void pattern12(int row) {
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = 1; j <= 2 * row - 2 * i; j++) {
            cout << " ";
        }
        for (int j = i; j > 0; j--) {
            cout << j;
        }
        cout << endl;
    }
}

void pattern13(int row) {
    int count = 1;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j <= i; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void pattern14(int row) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j <= i; j++) {
            cout << static_cast<char>(65 + j);
        }
        cout << endl;
    }
}

void pattern15(int row) {
    for (int i = 0; i < row; i++) {
        for (int j = row; j > i; j--) {
            cout << static_cast<char>(65 + row - j);
        }
        cout << endl;
    }
}

void pattern16(int row) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j <= i; j++) {
            cout << static_cast<char>(65 + i);
        }
        cout << endl;
    }
}

void pattern17(int row) {
    for (int i = 0; i < row; i++) {
        for (int j = i; j < row; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            int diff = j <= i ? i - j : j - i;
            cout << static_cast<char>(65 + i - diff);
        }
        cout << endl;
    }
}

void pattern18(int row) {
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            cout << static_cast<char>(65 + row + j - 1 - i);
        }
        cout << endl;
    }
}

void pattern19(int row) {
    for (int i = 1; i <= 2 * row; i++) {
        for (int j = 1; i <= row ? j <= row - i + 1 : j <= i - row; j++) {
            cout << "*";
        }
        for (int j = 0; i <= row ? j < 2 * (i - 1) : j < 4 * row - 2 * i; j++) {
            cout << " ";
        }
        for (int j = 1; i <= row ? j <= row - i + 1 : j <= i - row; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern20(int row) {
    for (int i = 1; i < 2 * row; i++) {
        for (int j = 0; i <= row ? j < i : j < 2 * row - i; j++) {
            cout << "*";
        }
        for (int j = i <= row ? 2 * (row - i) : 2 * (i - row); j > 0; j--) {
            cout << " ";
        }
        for (int j = 0; i <= row ? j < i : j < 2 * row - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern21(int row) {
    for (int i = 0; i < row; i++) {
        if (i == 0 || i == row - 1) {
            for (int j = 0; j < row; j++) {
                cout << "*";
            }
        } else {
            cout << "*";
            for (int j = 2; j < row; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}

void pattern22(int row) {
    int n = 2 * row - 1;
    vector<vector<int>> arr(n, vector<int>(n));

    // Fill ring by ring
    for (int i = 0; i < row; i++) {
        int start = i;
        int end = n - 1 - i;
        int value = row - i;

        for (int j = start; j <= end; j++) {
            arr[start][j] = value; // Top row of ring
            arr[end][j] = value;   // Bottom row of ring
            arr[j][start] = value; // Left col of ring
            arr[j][end] = value;   // Right col of ring
        }
    }

    // Printing
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

/*void pattern23(int row){
    vector<vector<int>>arr(2*row-1,vector<int>(2*row-1,0));
    for(int i=0;i<row;i++){
            for(int j=0;j<2*row-1;j++){
                arr[i][j]=row-i;
                arr[2*row-1-i-1][j]=row-i;
                arr[j][i]=row-i;
                arr[j][2*row-1-i-1]=row-i;
            }
    }
    for(int i=0;i<2*row-1;i++){
        for(int j=0;j<2*row-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}*/

int main() {
    int row;
    cout << "~Rows?\n:";
    cin >> row;
    // pattern1(row);
    // pattern2(row);
    // pattern3(row);
    // pattern4(row);
    // pattern5(row);
    // pattern6(row);
    // pattern7(row);
    // pattern8(row);
    // pattern9(row);
    // pattern10(row);
    // pattern11(row);
    // pattern12(row);
    // pattern13(row);
    // pattern14(row);
    // pattern15(row);
    // pattern16(row);
    // pattern17(row);
    // pattern18(row);
    // pattern19(row);
    // pattern20(row);
    // pattern21(row);
    // pattern22(row);

    return 0;
}

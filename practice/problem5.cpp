#include <iostream>
#include <vector>
using namespace std;

class Row {
    int* data;
public:
    Row(int* data) : data(data) {}

    int& operator[](int j) {    // second []
        return data[j];
    }
};

class Matrix {
    int** grid;
    int rows, cols;

    public:
        Matrix(int r = 4, int c = 4) : rows(r), cols(c) {
            grid = new int*[rows];
            for (int i = 0; i < rows; i++) {
                grid[i] = new int[cols];
                for(int j=0;j<cols;j++) {
                    grid[i][j] = 0;
                }
            }
        }

        Row operator[](int i) {      // first []
            return Row(grid[i]);
        }

        Matrix &operator+(Matrix &b) {
            for(int i=0;i<4;i++) {
                for(int j=0;j<4;j++) {
                    grid[i][j] += b[i][j];
                }
            }

            return *this;
        }

        void display() {
            for(int i=0;i<4;i++) {
                for(int j=0;j<4;j++) {
                    cout << grid[i][j] << " ";
                }
                cout << "\n";
            }
            cout << "\n";
        }

        ~Matrix() {
            for (int i = 0; i < rows; i++)
                delete[] grid[i];
            delete[] grid;
        }
};

int main() {
    Matrix mat1;
    Matrix mat2;

    mat1[0][1] = 5;
    mat1[2][2] = 8;

    mat2[2][3] = 100;
    mat2[3][2] = 100;

    mat1.display();
    mat2.display();

    mat1 = mat1 + mat2;

    mat1.display();
    return 0;
}

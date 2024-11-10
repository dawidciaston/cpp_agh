#include <iostream>
#include <vector>
#include <ctime>

int random(){
    return rand() % 10;
}

// counting without changing matrix
int countMatrix(const std::vector<std::vector<int>> matrix){
    int sum = 0;
    //even columns
    for (int col = 0; col < matrix[0].size(); col += 2) { 
        for (int row = 0; row < matrix.size(); ++row) {
            sum += matrix[row][col];
        }
    }

    // odd rows
    for (int row = 1; row < matrix.size(); row += 2) { 
        for (int col = 0; col < matrix[row].size(); ++col) {
            sum += matrix[row][col];
        }
    }
    return sum;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int rows {};
    int cols {};

    std::cout << "Enter rows: ";
    std::cin >> rows;
    std::cout << "Enter columns: ";
    std::cin >> cols;

    //creating a matrix
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

    //adding random numbers to matrix
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; ++j){
            matrix[i][j] = random();
        }
    }

    for (auto &row : matrix) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    int totalSum = countMatrix(matrix);
    std::cout << totalSum;

    return 0;
}
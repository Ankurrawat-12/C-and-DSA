#include<bits/stdc++.h>

using namespace std;

class matrics{
    public:
        int row;
        int col;
        int matrix[100][100];
        matrics(int row, int col){
            this->row = row;
            this->col = col;
        }
        void input(){
            cout<<"Enter the element of matrix"<<endl;
            for(int i = 0; i < row; i++){
                for(int j = 0; j < col; j++){
                    cin>>matrix[i][j];
                }
            }
        }
        void multiplication(matrics matrix1, matrics &answer){
            for(int i = 0; i < row; i++){
                for(int j = 0; j < col; j++){
                    for(int k = 0; k < col; k++){
                        answer.matrix[i][j] += this->matrix[i][k] * matrix1.matrix[k][j];
                    }
                }
            }
        }
        void printMatrix(){
            cout<<"Answer :-"<<endl;
            for(int i = 0; i < row; i++){
                for(int j = 0; j < col; j++){
                    cout<<this->matrix[i][j]<<" ";
                }
                cout<<endl;
            }
        }
};

int main(){
    int row, col;
    cout<<"Enter no of rows and columns :- ";
    cin>>row>>col;
    matrics matrix1(row,col), matrix2(row,col), answer(row,col);
    
    matrix1.input();
    matrix2.input();
    matrix1.multiplication(matrix2, answer);
    answer.printMatrix();
    return 0;
}
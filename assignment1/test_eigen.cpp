#include <iostream>
#include "Eigen/Dense"
#include <vector>

using namespace std;
using namespace Eigen;

int main()
{
    VectorXd my_vector(2);
    my_vector << 10,20;
    
    cout <<"vector:\n"<<my_vector<<endl;
    
    MatrixXd my_matrix(2,2);
    my_matrix<<1,2,3,4;
    cout <<"Matrix:\n"<<my_matrix<<endl;
    
    my_matrix(1,0) = 11;
    my_matrix(1,1) = 12;
    cout << "change:\n" << my_matrix<<endl;
    
    cout << "transposed:\n" << my_matrix.transpose() <<endl;
    
    cout << "multipy:\n" << my_matrix*my_vector <<endl;
}
#include <vector>
#include "math.h"
#include "stdlib.h"

using namespace std;

typedef vector<float> Vector;
typedef vector<Vector> Matrix;


void showVector(Vector b){
    cout << "[\t";
    for(int i=0;i<b.size();i++){
        cout << b.at(i) << "\t";
    }
    cout << "]\n";
}

void showMatrix(Matrix K){
    for(int i=0;i<K.size();i++){
        cout << "[\t";
        for(int j=0;j<K.at(0).size();j++){
            cout << K.at(i).at(j) << "\t";
        }
        cout << "]\n";
    }
}
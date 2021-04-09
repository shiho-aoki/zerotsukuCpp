# include <iostream>

using namespace std;

// easy perceptron (AND Gate) -> if we change the theta this is change to "NAND" gate or "OR" gate
int andgate(int x1, int x2){
    float tmp, w1=0.5, w2=0.5, theta=0.7;
    tmp = x1*w1 + x2*w2;
    cout << "and gate" << endl;
    cout << tmp << endl;
    if (tmp<= theta){
        return 0;
    }else if(tmp > theta){
        return 1;
    };
    return 0;
};

int nadngate(int x1, int x2){
    int x[2] = { x1,x2 };
    float w[2] = { -0.5, -0.5 };
    return 0;
}

int andgate_use_wAndbias(int x1, int x2){
    int x[2] = {x1,x2};
    float tmp, w[2] = {0.5, 0.5}, b =0.7;
    for(int i=1; i<3; i++){
        cout << "i"<< endl;
        cout << i << endl;
    }
    float data1, data2;
    data1 = x[1]*w[1];
    data2 = x[2]*w[2];
    tmp = data1 + data2;
    cout << "and w and b gate" << endl;
    cout << tmp << endl;
    if (tmp<=0){
        return 0;
    }else if(tmp>0){
        return 1;
    }
    return 0;
}

int main(){
    cout << andgate(0,0) << endl;
    cout << andgate(1,0) << endl;
    cout << andgate(0,1) << endl;
    cout << andgate(1,1) << endl;
    //use wight and biase version
    cout << andgate_use_wAndbias(0,0) << endl;
    cout << andgate_use_wAndbias(1,0) << endl;
    cout << andgate_use_wAndbias(0,1) << endl;
    cout << andgate_use_wAndbias(1,1) << endl;
    return 0;
};
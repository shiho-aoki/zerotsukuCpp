# include <iostream>

using namespace std;

int andgate(int x1, int x2){
    float tmp, w1=0.5, w2=0.5, theta=0.7;
    tmp = x1*w1 + x2*w2;
    if (tmp<= theta){
        return 0;
    }else if(tmp > theta){
        return 1;
    }
};

int main(){
    cout << andgate(0,0) << endl;
    cout << andgate(1,0) << endl;
    cout << andgate(0,1) << endl;
    cout << andgate(1,1) << endl;
};
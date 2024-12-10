#include <iostream>
using namespace std;

void mmult(double A[][4], double B[][2], double C[][2]){
    for(int i = 0; i < 3; ++i)
        for(int j = 0; j < 2; ++j)
            for(int o = 0; o < 4; ++o)
                C[i][j] += A[i][o]*B[o][j];
}
void moutput(double C[][2]){
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 2; ++j)
            cout<<C[i][j]<<" ";
        cout<<"\n";
    }
}

void ans_quest(double C[][2]){
    double mxmerchant = max(C[0][0], max(C[1][0], C[2][0]));
    double mnmerchant = min(C[0][0], min(C[1][0], C[2][0]));
    double mxc = max(C[0][1], max(C[1][1], C[2][1]));
    double mnc = min(C[0][1], min(C[1][1], C[2][1]));
    for(int i = 0; i < 3; ++i){
        if (mxmerchant == C[i][0])
            cout<<"Max merchant: "<<i+1<<"\n";
        if (mnmerchant == C[i][0])
            cout<<"Min merchant: "<<i+1;
    }
    cout<<"\n";
    for(int i = 0; i < 3; ++i){
        if (mxc == C[i][1])
            cout<<"Max commission: "<<i+1<<"\n";
        if (mnc == C[i][1])
            cout<<"Min commission: "<<i+1;
    }
    cout<<"\n";
    cout<<"Total revenue: "<<C[0][0]+C[1][0]+C[2][0]<<"\n";
    cout<<"Total commission: "<<C[0][1]+C[1][1]+C[2][1]<<"\n";
    cout<<"Total amount: "<<C[0][0]+C[1][0]+C[2][0]-(C[0][1]+C[1][1]+C[2][1]);

}
int main(){
    double A[3][4] = {5, 2, 0, 10,
                      3, 5, 2, 5,
                      20, 0, 0, 0};
    double B[4][2] = {1.20, 0.50,
                      2.80, 0.40,
                      5.00, 1.00,
                      2.00, 1.50};
    double C[3][2] = {};
    mmult(A, B, C);
    cout<<"Matrix C\n";
    moutput(C);
    ans_quest(C);
    return 0;
}
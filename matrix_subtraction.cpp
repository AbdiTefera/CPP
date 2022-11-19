#include<iostream>
#define MAX 400
using namespace std;
int main(){
    int raw1,column1,raw2,column2;
    int matrix1[MAX][MAX],matrix2[MAX][MAX],subt[MAX][MAX];
    cout <<"Enter the number of row of first matrix. "<<endl;
    cin>>raw1;
    cout<<"Enter the number of colunm of first matrix. "<<endl;
    cin>>column1;
    
    cout<<"Enter the first matrix."<<endl;
    for(int i=0;i<raw1;i++){
        for(int j=0;j<column1;j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<"The first matrix."<<endl;
    for(int i=0;i<raw1;i++){
        cout<<"\t";
        for(int j=0;j<column1;j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout <<"Enter the number of row of second matrix. "<<endl;
    cin>>raw2;
    cout<<"Enter the number of colunm of second matrix. "<<endl;
    cin>>column2;
    
    cout<<"Enter the second matrix."<<endl;
    for(int i=0;i<raw2;i++){
        for(int j=0;j<column2;j++){
            cin>>matrix2[i][j];
        }
    }
    cout<<"The second matrix."<<endl;
    for(int i=0;i<raw2;i++){
        cout<<"\t";
        for(int j=0;j<column2;j++){
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<raw1;i++){
        for(int j=0;j<column1;j++){
            subt[i][j]=(matrix1[i][j]-matrix2[i][j]);
        }
    }
    cout<<"The subtraction of two matrix."<<endl;
    for(int i=0;i<raw2;i++){
        cout<<"\t";
        for(int j=0;j<column2;j++){
            cout<<subt[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
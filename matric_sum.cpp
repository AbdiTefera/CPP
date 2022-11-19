#include<iostream>
#define MAX 400
using namespace std;
int main(){
    int raw1,column1,raw2,column2;
    int matric1[MAX][MAX],matric2[MAX][MAX],sum[MAX][MAX];
    cout <<"Enter the number of row of first matric. "<<endl;
    cin>>raw1;
    cout<<"Enter the number of colunm of first matric. "<<endl;
    cin>>column1;
    cout<<"Enter the first matric."<<endl;
    for(int i=0;i<raw1;i++){
        for(int j=0;j<column1;j++){
            cin>>matric1[i][j];
        }
    }
    cout<<"The first matric."<<endl;
    for(int i=0;i<raw1;i++){
        cout<<"\t";
        for(int j=0;j<column1;j++){
            cout<<matric1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout <<"Enter the number of row of second matric. "<<endl;
    cin>>raw2;
    cout<<"Enter the number of colunm of second matric. "<<endl;
    cin>>column2;
    
    cout<<"Enter the second matric."<<endl;
    for(int i=0;i<raw2;i++){
        for(int j=0;j<column2;j++){
            cin>>matric2[i][j];
        }
    }
    cout<<"The second matric."<<endl;
    for(int i=0;i<raw2;i++){
        cout<<"\t";
        for(int j=0;j<column2;j++){
            cout<<matric2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<raw1;i++){
        for(int j=0;j<column1;j++){
            sum[i][j]=(matric1[i][j]+matric2[i][j]);
        }
    }
    cout<<"The sum of two matric."<<endl;
    for(int i=0;i<raw2;i++){
        cout<<"\t";
        for(int j=0;j<column2;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
#define MAX 400
using namespace std;
 int main(){
         int raw1,column1,raw2,column2;
         int matric1[MAX][MAX],matric2[MAX][MAX],prod[MAX][MAX];
         int i,j,k;
         int sum=0;
    cout <<"Enter the number of raw of first matrix. "<<endl;
    cin>>raw1;
    cout<<"Enter the number of colunm of first matrix. "<<endl;
    cin>>column1;
    
    cout<<"Enter the first matrix."<<endl;
    for( i=0;i<raw1;i++){
        for( j=0;j<column1;j++){
            cin>>matric1[i][j];
        }
    }
    cout<<"The first matrix."<<endl;
    for( i=0;i<raw1;i++){
        cout<<"\t";
        for( j=0;j<column1;j++){
            cout<<matric1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout <<"Enter the number of raw of second matrix. "<<endl;
    cin>>raw2;
    cout<<"Enter the number of colunm of second matrix. "<<endl;
    cin>>column2;

    if(raw2!=column1){
        cout <<"Sorry, We can't multiply this matrix."<<endl;
    }else{

    cout<<"Enter the second matrix."<<endl;
    for( i=0;i<raw2;i++){
        for( j=0;j<column2;j++){
            cin>>matric2[i][j];
        }
    }
    cout<<"The second matrix."<<endl;
    for( i=0;i<raw2;i++){
        cout<<"\t";
        for( j=0;j<column2;j++){
            cout<<matric2[i][j]<<" ";
        }
        cout<<endl;
    }

    for( i=0;i<raw1;i++){
        for( j=0;j<column2;j++){
            for( k=0;k<column2;k++){
                sum+=(matric1[i][k]*matric2[k][j]);
            }
            prod[i][j]=sum;
            sum=0;
        }
    }
    cout<<"The product of two matrix."<<endl;
    for( i=0;i<raw2;i++){
        cout<<"\t";
        for( j=0;j<column2;j++){
            cout<<prod[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}
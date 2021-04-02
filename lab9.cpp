#include<iostream>
#include<cstdlib>
using namespace std;

int populateArray(int A[101][101],int N){
    for(int k=0;k<=N;k++){
        int i=rand()%100;
        int j=rand()%100;

        if(A[i][j]=0){
            A[i][j]+1;
        }else{
            A[i][j]++;
        }
        cout<<i<<" "<<j<<endl;
    }
    return 0;
}

int searchValidEntries(int xl,int xm,int ym,int yl){
    int p;
    while (p--){
        cin>>xl;
        cin>>yl;
        cin>>xm;
        cin>>ym;
        if(xm<xl||ym<yl){
            cout<<"Invalid box"<<endl;
            break;
            return 0;
        }
        cout<<xl<<" "<<xm<<" "<<yl<<" "<<ym<<endl;




    }
    return 0;

}

int main(){
    int A[101][101]={0};
    populateArray(A,2000);

    searchValidEntries(41,67,34,0);




    return 0;
}
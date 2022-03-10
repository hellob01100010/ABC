#include<bits/stdc++.h>
using namespace std;
int main(){
    int c[3],A,B,C;
    char X,Y,Z;
    for(int i=0; i<3; i++){
        cin >> c[i];
    }
    cin >> X >> Y >> Z;

    if(c[0]>=c[1]&&c[1]>=c[2]){
        C = c[0]; 
        B = c[1]; 
        A = c[2];
    }
    else if(c[0]>=c[2]&&c[2]>=c[1]){
        C = c[0]; 
        B = c[2]; 
        A = c[1];
    }
    else if(c[1]>=c[0]&&c[0]>=c[2]){
        C = c[1]; 
        B = c[0]; 
        A = c[2];
    }
    else if(c[1]>=c[2]&&c[2]>=c[0]){
        C = c[1]; 
        B = c[2]; 
        A = c[0];
    }
    else if(c[2]>=c[1]&&c[1]>=c[0]){
        C = c[2]; 
        B = c[1]; 
        A = c[0];
    }
    else if(c[2]>=c[0]&&c[0]>=c[1]){
        C = c[2]; 
        B = c[0]; 
        A = c[1];
    }
    
    if (X =='A' && Y=='B' && Z=='C' ){
        cout << A <<" "<<B<<" "<<C;
    }
    else if (X =='A' && Y=='C' && Z=='B' ){
        cout << A <<" "<<C<<" "<<B;
    }
    else if (X =='B' && Y=='A' && Z=='C' ){
        cout << B <<" "<<A<<" "<<C;
    }
    else if (X =='B' && Y=='C' && Z=='A' ){
        cout << B <<" "<<C<<" "<<A;
    }
    else if (X =='C' && Y=='A' && Z=='B' ){
        cout << C <<" "<<A<<" "<<B;
    }
    else if (X =='C' && Y=='B' && Z=='A' ){
        cout << C <<" "<<B<<" "<<A;
    }
}
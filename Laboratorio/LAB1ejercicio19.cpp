
#include <iostream>

using namespace std;


int main(void) {

    
    int x[5][5];
    
    
    for(int i=0; i<5; i++){
 
        for(int j=0; j<5; j++){
            x[i][j]=0;
            
        }    
    }
    
    
    cout<<"Ingrese el valor de a00: ";
    cin>>x[0][0];
    
    cout<<"Ingrese el valor de a10: ";
    cin>>x[1][0];
    cout<<"Ingrese el valor de a11: ";
    cin>>x[1][1];
    cout<<"Ingrese el valor de a20: ";
    cin>>x[2][0];
    cout<<"Ingrese el valor de a21: ";
    cin>>x[2][1];
    cout<<"Ingrese el valor de a22: ";
    cin>>x[2][2];
    cout<<"Ingrese el valor de a30: ";
    cin>>x[3][0];
    cout<<"Ingrese el valor de a31: ";
    cin>>x[3][1];
    cout<<"Ingrese el valor de a32: ";
    cin>>x[3][2];
    cout<<"Ingrese el valor de a33: ";
    cin>>x[3][3];
    cout<<"Ingrese el valor de a40: ";
    cin>>x[4][0];
    cout<<"Ingrese el valor de a41: ";
    cin>>x[4][1];
    cout<<"Ingrese el valor de a42: ";
    cin>>x[4][2];
    cout<<"Ingrese el valor de a43: ";
    cin>>x[4][3];
    cout<<"Ingrese el valor de a44: ";
    cin>>x[4][4];
  
    cout<<x[0][0]<<" "<<x[0][1]<<" "<<x[0][2]<<" "<<x[0][3]<<" "<<x[0][4]<<endl;
    cout<<x[1][0]<<" "<<x[1][1]<<" "<<x[1][2]<<" "<<x[1][3]<<" "<<x[1][4]<<endl;
    cout<<x[2][0]<<" "<<x[2][1]<<" "<<x[2][2]<<" "<<x[2][3]<<" "<<x[2][4]<<endl;
    cout<<x[3][0]<<" "<<x[3][1]<<" "<<x[3][2]<<" "<<x[3][3]<<" "<<x[3][4]<<endl;
    cout<<x[4][0]<<" "<<x[4][1]<<" "<<x[4][2]<<" "<<x[4][3]<<" "<<x[4][4]<<endl;

    return 0;
}


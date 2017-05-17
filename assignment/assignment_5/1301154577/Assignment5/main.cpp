#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    struct inputan{
        float l;
        float d;
    };
    struct trigono{
        float x;
        float y;
    };
    inputan input[100];
    trigono total[100];
    int sudut;
    int norm;
    float sumx;
    float sumy;
    cout<<"Masukkan banyak inputan : ";
    cin>>n;
    if ((n>0) && (n<101)) {
        for (int i=0;i<n;i++){
            cout<<"Masukkan nilai sudut-"<<i+1<<" : ";
            cin>>sudut;
            if ((sudut>-1)  && (sudut<361)) {
                input[i].l=sudut;
                cout<<"Masukan panjang norm-"<<i+1<<" : ";
                cin>>norm;
                if ((norm>0) && (norm<101)){
                    input[i].d=norm;
                }
            }
        }
        sumx=0;
        sumy=0;
        for (int j=0;j<n;j++){
            total[j].x= input[j].d*cos(input[j].l);
            total[j].y=input[j].d*sin(input[j].l);
        }
        for (int i=0;i<n;i++) {
            sumx=sumx+total[i].x;
            sumy=sumy+ total[i].y;
        }
        cout<<"panjang x = "<<sumx<<endl;
        cout<<"panjang y = "<<sumy;
    }
    else {
        cout<<"inputan tidak sesuai dengan range"<<endl;
    }
    return 0;
}

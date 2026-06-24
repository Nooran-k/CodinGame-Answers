#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int width,height;
    cin >> width; cin.ignore();//cells on x
    cin >> height; cin.ignore();//cells on y
    char cells[height][width];
    for (int i=0;i<height;i++){
        string row;
        cin>>row;
        for (int j=0;j<width;j++){
            cells[i][j]=row[j];
        }
    }


    for (int i=0;i<height;i++){
        for (int j=0;j<width;j++){
            if (cells[i][j]!='0') continue;
            int x,y,xR,yR,xB,yB;
            xR=yR=xB=yB= -1;
            x=j;
            y=i;

            for (int k=j+1;k<width;k++){
                if (cells[i][k] == '0' ){
                    xR=k;
                    yR=i;
                    break;
                }
            }

            for (int k=i+1;k<height;k++){
                if(cells[k][j] == '0'){
                    xB=j;
                    yB=k;
                    break;
                }
            }

            cout << x <<" "<< y <<" "<< xR <<" "<< yR <<" "<< xB <<" "<< yB << endl;
        }

    }

    // Three coordinates: a node, its right neighbor, its bottom neighbor

}
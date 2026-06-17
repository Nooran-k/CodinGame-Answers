#include <iostream>

#include <bits/stdc++.h>

using namespace std;

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main()
{
    int arr[8];

    for (int j=0;j<8;j++){
        int n=8;
        for (int i=0;i<8;i++){
            int mountainH;
            cin>>mountainH;
            arr[i]=mountainH;
        }
        int max_indx=0;
        for (int i=0;i<8;i++){
            if (arr[i]>arr[max_indx])
                max_indx=i;
        }
        cout<<max_indx<<endl;
    }
}
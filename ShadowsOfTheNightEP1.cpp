#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int w; // width of the building.
    int h; // height of the building.
    cin >> w >> h; cin.ignore();
    int n; // maximum number of jumps before game over.
    cin >> n; cin.ignore();
    int x;//start x
    int y;//start y
    cin >> x >> y; cin.ignore();
    int left =0,right =w-1 , top=0 , bottom = h-1;

    // game loop
    while (true) {
        string bomb_dir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> bomb_dir; cin.ignore();
        

        if (bomb_dir=="U"){
            bottom=y-1;
            y=(top+bottom)/2;
        }
        else if (bomb_dir=="D"){
            top=y+1;
            y=(top+bottom)/2;
            
        }
        else if (bomb_dir=="R"){
            left=x+1;
            x=(left+right)/2;
        }
        
        else if (bomb_dir=="L"){
            right=x-1;
            x=(left+right)/2;
        }
        ///
        else if (bomb_dir=="UL"){
            bottom=y-1;
            y=(top+bottom)/2;

            right=x-1;
            x=(left+right)/2;
        }
        else if (bomb_dir=="DL"){
            top=y+1;
            y=(top+bottom)/2;

            right=x-1;
            x=(left+right)/2;
        }
        else if (bomb_dir=="UR"){
            bottom=y-1;
            y=(top+bottom)/2;

            left=x+1;
            x=(left+right)/2;
        }
        else if (bomb_dir=="DR"){
            top=y+1;
            y=(top+bottom)/2;

            left=x+1;
            x=(left+right)/2;
        }
        
        // the location of the next window Batman should jump to.
        cout << x <<" "<<y << endl;
    }
}
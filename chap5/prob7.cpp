#include<iostream>
#include<vector>

using namespace std;

int solution(string dirs){
    bool plane[11][11][4] = {}; //초기화를 잘하자....
    int x = 5;
    int y =5;
    int dst = 0;
    for(int i=0;i<dirs.size();i++){
        cout<<dirs[i]<<endl;
        cout<<dst<<endl;
        if(dirs[i]=='U'){
            if(y==10){
                continue;
            }
            if(plane[x][y+1][0]==false){
                dst++;
                plane[x][y+1][0] = true;
                plane[x][y][1] = true;
            }
            y++;
        }else if(dirs[i]=='D'){
            if(y==0){
                continue;
            }
            if(plane[x][y-1][1]==false){
                dst++;
                plane[x][y-1][1] = true;
                plane[x][y][0] = true;
            }
            y--;
            
        }else if(dirs[i]=='R'){
            if(x==10){
                continue;
            }
            if(plane[x+1][y][2]==false){
                dst++;
                plane[x+1][y][2] = true;
                plane[x][y][3] = true;
            }
            x++;
        }else if(dirs[i]=='L'){
            if(x==0){
                continue;
            }
            if(plane[x-1][y][3]==false){
                dst++;
                plane[x-1][y][3] = true;
                plane[x][y][2] = true;
            }
            x--;
        }
    }
    return dst;
}
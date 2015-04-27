//
//  main.cpp
//  NumberOfIslands_DFS
//
//  Created by 黄美强 on 15/4/24.
//  Copyright (c) 2015年 黄 美强. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;


void DFStravel(int i,int j, vector<vector<char> > &grid){
    int rows = (int)grid.size();
    if(rows == 0)
        return;
    int cols = (int)grid[0].size();

    if(i<0 || i>=rows || j<0 || j>=cols)
        return;
    if (grid[i][j] != '1')
        return;
    grid[i][j] = '2';
    
    DFStravel(i+1,j,grid);
    DFStravel(i,j+1,grid);
    DFStravel(i-1,j,grid);
    DFStravel(i,j-1,grid);
    
}

int numIslands(vector<vector<char> > &grid) {
    int rows = (int)grid.size();
    if(rows == 0)
        return 0;
    int cols = (int)grid[0].size();
    int count = 0;
    char L = '1';
    for(int i = 0; i<rows; i++){
        for (int j = 0; j<cols; j++) {
            if(grid[i][j] == L){
                count++;
                DFStravel(i,j,grid);
            }
        }
    }
    return count;
}


int main(int argc, char *argv[]) {
    vector<vector<char> > source;
    vector<char> temp;
    temp.push_back('1');
    temp.push_back('1');
    temp.push_back('1');
    temp.push_back('1');
    temp.push_back('1');
    temp.push_back('1');
    source.push_back(temp);
    temp.clear();
    
    temp.push_back('0');
    temp.push_back('0');
    temp.push_back('0');
    temp.push_back('0');
    temp.push_back('0');
    temp.push_back('1');
    source.push_back(temp);
    temp.clear();
    
    temp.push_back('1');
    temp.push_back('1');
    temp.push_back('1');
    temp.push_back('1');
    temp.push_back('0');
    temp.push_back('1');
    source.push_back(temp);
    temp.clear();
    
    temp.push_back('1');
    temp.push_back('0');
    temp.push_back('0');
    temp.push_back('1');
    temp.push_back('0');
    temp.push_back('1');
    source.push_back(temp);
    temp.clear();
    
    temp.push_back('1');
    temp.push_back('0');
    temp.push_back('1');
    temp.push_back('0');
    temp.push_back('1');
    temp.push_back('0');
    source.push_back(temp);
    temp.clear();
    
    temp.push_back('1');
    temp.push_back('0');
    temp.push_back('1');
    temp.push_back('1');
    temp.push_back('0');
    temp.push_back('1');
    source.push_back(temp);
    temp.clear();
    
    temp.push_back('1');
    temp.push_back('1');
    temp.push_back('1');
    temp.push_back('1');
    temp.push_back('1');
    temp.push_back('1');
    source.push_back(temp);
    temp.clear();
    
    cout<<numIslands(source);
}

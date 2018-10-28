//
//  main.cpp
//  port_p250
//
//  Created by Zheng on 10/28/18.
//  Copyright © 2018 Monkey Coder Studio. All rights reserved.
//

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class ship
{
public:
    long time;
    int passenger;
    vector<int> nati;
    void in()
    {
        cin>>time>>passenger;
        for(int i=0;i<passenger;i++)
        {
            int tmp;
            cin>>tmp;
            nati.push_back(tmp);
        }
    }
};

int main(int argc, const char * argv[]) {
    vector<ship> shp;
    int nos;
    cin>>nos;
    vector<int> nation;
    for(int i=0;i<nos;i++)
    {
        ship tmp;
        tmp.in();
        shp.push_back(tmp);
    }
    for(int i=0;i<shp.size();i++)
    {
        set<int> s;
        for(int j=0;j<shp.size();j++)
        {
            if(shp[j].time>shp[i].time-86400&&shp[j].time<=shp[i].time)
            {
                for(int k=0;k<shp[j].nati.size();k++)
                {
                    int a=(shp[j].nati)[k];
                    s.insert(a);
                }
            }
        }
        cout<<s.size()<<endl;
    }
    return 0;
}

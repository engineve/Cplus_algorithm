// Reference : https://www.youtube.com/channel/UChflhu32f5EUHlY7_SetNWw

#include <iostream>
#include <queue>

using namespace std;

int main(void){
    queue<int> q;
    q.push(10);
    q.push(5);
    q.push(20);
    q.pop();
    q.push(100);
    q.pop();
    while(!q.empty()){
        cout <<q.front() <<' ';
        q.pop();
    }
    return 0;
}

// 20 100

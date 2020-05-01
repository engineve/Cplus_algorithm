// Reference : https://www.youtube.com/channel/UChflhu32f5EUHlY7_SetNWw

#include <iostream>
#include <stack>

using namespace std;

int main(void){
      stack<int> s;
      s.push(10);
      s.push(5);
      s.push(20);
      s.pop();
      s.push(100);
      s.pop();
      while(!s.empty()){
        cout << s.top() << ' ';
        s.pop();
      }
      return 0;
}

// 5 10

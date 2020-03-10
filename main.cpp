#include <iostream>
#include<string>
using namespace std;
void painter(const string &a){
    cout<<a<<endl;
}
void printRect(int width, int height){
    for (int i = 0; i < height;i++)
    {
        for (auto i = 0; i < width; i++)
        {
            cout<<"  *   ";

        }
        cout<<endl;
        
    }
    
}
int main(){
    painter("hello");
    printRect(20,15);
    return 0;
}
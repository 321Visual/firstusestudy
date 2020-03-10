#include <iostream>
#include <cmath>
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
void printcircle(int r){
    int pointx=r;
    int pointy=r;
    for (int i = 0; i < 2*r; i++)
    {
        for (int j = 0; j < 2*r; j++)
        {
            int tempa=pow(i-pointx,2);
            int tempb=pow(j-pointy,2);
            float distance=sqrt(tempa+tempb);
            if (distance<=r)
            {
                cout<<"&";
            }else 
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}
int main(){
    painter("hello");
    printRect(20,15);
    printcircle(20);
    return 0;
}
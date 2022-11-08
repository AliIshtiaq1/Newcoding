 #include<iostream>
using namespace std;
class table {
private:
int n;
public:
void input(){
cout<<"Enter a Number:";
 cin>>n;
    }
void show(){
    for(int i=1;i<=10;i++)
       cout<<n<<"*"<<i<<"="<<n*i<<endl;
}

};
int main(){
    table obj;
    obj.input();
    obj.show();
    
    
}
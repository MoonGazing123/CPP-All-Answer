#include<bits/stdc++.h>
using namespace std;
/*根据提意分析，让我们做一个建议的计算器，我们如果要做计算器，就要判断运算符，运算符是符号所以用char类型
判断有多种方式，最直观的是if else，但是太粗暴了，所以我们用switch，这里不过多讲解，看代码*/
int main(){
    int a,b;char c;
    cin>>a>>c>>b;
    switch(c){
        case '+':cout<<a+b;break;//判断加号
        case '-':cout<<a-b;break;//判断减号
        case '*':cout<<a*b;break;//判断乘号
        case '/':cout<<a/b;break;//判断除号
        default:cout<<"表达式错误";//没有就输出
    }
    return 0;
}
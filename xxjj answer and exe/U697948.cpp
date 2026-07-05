//题目解释：原题：https://www.luogu.com.cn/problem/U697948#ide
/*根据题目原义，输入一个数，输出同样的数
这是C++中的一个入门题目，帮助做题者理解输入与输出
C++中的输入输出有两种形式：cin,cout
                         scanf,prinf
由于是新手，我们使用cin cout来解答*/
//完整AC代码如下
#include<bits/stdc++.h>//万能头文件，几乎包含常用的所有头文件，但是代码过多会拖欠编译时间
using namespace std;//命名空间 如果不加就要在代码前加上std::

int main(){//主函数
    int a;//定义一个变量存储cin的数据 常用的变量类型：int(整数) double(浮点) char(字符) string(字符串)
    cin>>a;//输入 cin的格式：cin>><变量名>
    cout<<a;//输出
    return 0;//愉快地结束程序
}
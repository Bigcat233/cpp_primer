#include <iostream>
#include <vector>
using namespace std;

int main()
{

//    /*string word;
//    while(cin>>word){
//        cout<<word<<endl;
//    }*/ //经过实验通过ctrl+z然后enter可以结束，但在OJ如何处理不确定的输入？
//    答：OJ上并不是通过键盘输入实现的，而是通过读入数据文件实现的，
//    而且OJ平台默认再数据后加上EOF字符，所以这段代码再自己电脑上需要自己输入EOF结束，而OJ上却会自动结束，顺利通过。
//


    //getline读取一整行,特点是能在最后得到的字符串z中保留输入的空白符
    //getline(cin,line) 参数是是一个输入流和一个string对象，函数从指定的输入流中读入内容
//    string line;
//    while(getline(cin,line)){
//        cout<<line<<endl;
//    }


//  string compare
//  1.如果两个string对象在某些对应位置上不一致，则string对象比较的结果就是第一相异字符比较的结果
//  2.还有一个条件相同时短的更小


//
////    isalnum(1);
//    string str("some wrong");



    vector<int> v1;
    vector<int> v2(v1);
    //vector故名思义就是一个容器
    vector<int> v3;
    for(int i = 0;i!=100;++i){
        v3.push_back(i);
    }
    auto b = *v3.begin();
    auto e = v3.end();
    cout<<b<<endl;
    return 0;


}

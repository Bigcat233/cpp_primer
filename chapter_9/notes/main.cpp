#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

int main()
{
//    几种顺序容器的区分与总结
    //string vector都是连续存储空间
    //vector deque list forward_list array string
    //对于一般选择使用哪个容器使用vector是最好的选择，除非有很好的理由选择其他容器
//    vector<vector<string>> lines;

    //迭代器
    //迭代器范围由一对迭代器表示，两个迭代器分别指向同一个容器中的元素或者尾元素之后的位置

//标准数学描述为[begin,end)左闭右开
// 迭代示例：
    vector<int> t;
    for(int i=0;i<=100;i++){
        t.push_back(i);
    }
//    for(auto iter=t.cbegin();iter!=t.cend();iter++){
//        cout<<*iter<<endl;
//     //不需要写入时推荐使用cbegin


//    for(auto c:t){
//        cout<<c<<endl;
//    }


//    auto iter=t.begin();
//    while(iter!=t.end()){
//        cout<<*iter<<endl;
//        ++iter;
//    }
// 一种比较特殊的初始化方式，示例从list到vector
//    list<int> l(5,4);
//    vector<double> v(l.begin(),l.end());
//    for(auto c:v){
//        cout<<c<<endl;
//    }


    //vector supports insert but not push_front()
    //insert(iterator,"some thing")
    //insert(iterator,10,"some thing")


    //vector删除
    //c.pop_back() c.pop_front()
    //c.erase(iterator) //删除迭代器指定的元素

    //c.erase(iterator1,iterator2)//删除

//    t.erase(t.begin(),t.end()-1);
//    if(t.begin()!=t.end()){
//    for(auto c = t.begin();c!=t.end();c++){
//        cout<<*c<<endl;
//    }} //同样是左闭右开
    return 0;
}

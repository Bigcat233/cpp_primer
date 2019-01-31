#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <numeric>
using namespace std;

int main()
{
    //generic algorithm

    //一般情况下，泛型算法并不操作容器，而是遍历由两个迭代器z指定的一个元素范围来进行操作
//    vector<int> t;
//    for(int i=0;i!=100;i++){
//        t.push_back(i);
//    }
//    //比如find函数，需要注意的是find函数查找成功返回对应的迭代器，查找失败返回第二个参数
//    cout<<*find(t.begin(),t.end(),4);
//


    //常用的算法
//    int sum=accumulate(t.cbegin(),t.cend(),0);
//    cout<<"sum: "<<sum<<endl;



    //写算法
    //需要时刻注意的是 算法始终不会执行容器操作，不会改变容器大小
    //删除重复元素
    vector<string> t{"hello","the","fdsfds","fff","the","tyu","yui","yui","a"};
    sort(t.begin(),t.end());
    for(auto c:t){
        cout<<c<<endl;
    }
    auto end_unique = unique(t.begin(),t.end());
    t.erase(end_unique,t.end());
    for(auto c:t){
        cout<<c<<endl;
    }
    return 0;
}

#include <iostream>
#include <vector>
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
//    for(auto iter=t.begin();iter!=t.end();iter++){
//        cout<<*iter<<endl;
//    }


//    for(auto c:t){
//        cout<<c<<endl;
//    }


//    auto iter=t.begin();
//    while(iter!=t.end()){
//        cout<<*iter<<endl;
//        ++iter;
//    }

    return 0;
}

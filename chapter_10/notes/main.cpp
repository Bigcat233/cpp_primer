#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <numeric>
using namespace std;

bool is_div_five(int i){
        return i%5?0:1;
    }
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
    vector<string> str{"hello","the","fdsfds","fff","the","tyu","yui","yui","a"};
    vector<int> number;
    for(int i=0;i!=100;i++){
        number.push_back(i);
    }
//    sort(t.begin(),t.end());
//    for(auto c:t){
//        cout<<c<<endl;
//    }
//    auto end_unique = unique(t.begin(),t.end());
//    t.erase(end_unique,t.end());
//    for(auto c:t){
//        cout<<c<<endl;
//    }

    //标准库的一些常用算法
    //查找对象：find
    //find_if,find_if_not,count,count_if
    //find_if template <class InputIterator, class UnaryPredicate>
   //InputIterator find_if (InputIterator first, InputIterator last, UnaryPredicate pred);
    //Find element in range


//    vector<int>::const_iterator location;
//    location=find_if(number.cbegin(),number.cend(),is_div_five);
//    if(location!=number.cend()){
//        cout<<"the first number can divided by 5\n"<<*location<<endl;
//    }
    //find_if_not同理


    //count
//    int a =count(number.cbegin(),number.cend(),5);
//    cout<<"tongji"<<a;

    //count_if
//    a = count_if(number.cbegin(),number.cend(),is_div_five);
//    cout<<"tongji"<<a;
//
    //查找重复元素 函数第三个参数还可以自定义重复的含义，
//    auto location = adjacent_find(str.cbegin(),str.cend());
//    cout<<*location<<endl;

//初始化可以考虑使用fill或者fill_n
    fill(number.cbegin(),number.cend(),100);
    fill_n(number.cbegin(),10,200);
//stl排序详解













































    return 0;
}









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

    //һ������£������㷨�����������������Ǳ���������������zָ����һ��Ԫ�ط�Χ�����в���
//    vector<int> t;
//    for(int i=0;i!=100;i++){
//        t.push_back(i);
//    }
//    //����find��������Ҫע�����find�������ҳɹ����ض�Ӧ�ĵ�����������ʧ�ܷ��صڶ�������
//    cout<<*find(t.begin(),t.end(),4);
//


    //���õ��㷨
//    int sum=accumulate(t.cbegin(),t.cend(),0);
//    cout<<"sum: "<<sum<<endl;



    //д�㷨
    //��Ҫʱ��ע����� �㷨ʼ�ղ���ִ����������������ı�������С
    //ɾ���ظ�Ԫ��
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

    //��׼���һЩ�����㷨
    //���Ҷ���find
    //find_if,find_if_not,count,count_if
    //find_if template <class InputIterator, class UnaryPredicate>
   //InputIterator find_if (InputIterator first, InputIterator last, UnaryPredicate pred);
    //Find element in range


//    vector<int>::const_iterator location;
//    location=find_if(number.cbegin(),number.cend(),is_div_five);
//    if(location!=number.cend()){
//        cout<<"the first number can divided by 5\n"<<*location<<endl;
//    }
    //find_if_notͬ��


    //count
//    int a =count(number.cbegin(),number.cend(),5);
//    cout<<"tongji"<<a;

    //count_if
//    a = count_if(number.cbegin(),number.cend(),is_div_five);
//    cout<<"tongji"<<a;
//
    //�����ظ�Ԫ�� ���������������������Զ����ظ��ĺ��壬
//    auto location = adjacent_find(str.cbegin(),str.cend());
//    cout<<*location<<endl;

//��ʼ�����Կ���ʹ��fill����fill_n
    fill(number.cbegin(),number.cend(),100);
    fill_n(number.cbegin(),10,200);
//stl�������













































    return 0;
}









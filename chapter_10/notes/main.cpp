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

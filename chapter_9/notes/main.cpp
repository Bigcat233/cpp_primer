#include <iostream>
#include <vector>
using namespace std;

int main()
{
//    ����˳���������������ܽ�
    //string vector���������洢�ռ�
    //vector deque list forward_list array string
    //����һ��ѡ��ʹ���ĸ�����ʹ��vector����õ�ѡ�񣬳����кܺõ�����ѡ����������
//    vector<vector<string>> lines;

    //������
    //��������Χ��һ�Ե�������ʾ�������������ֱ�ָ��ͬһ�������е�Ԫ�ػ���βԪ��֮���λ��

//��׼��ѧ����Ϊ[begin,end)����ҿ�
// ����ʾ����
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

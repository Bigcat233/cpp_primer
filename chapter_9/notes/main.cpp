#include <iostream>
#include <vector>
#include <list>
#include <string>
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
//    for(auto iter=t.cbegin();iter!=t.cend();iter++){
//        cout<<*iter<<endl;
//     //����Ҫд��ʱ�Ƽ�ʹ��cbegin


//    for(auto c:t){
//        cout<<c<<endl;
//    }


//    auto iter=t.begin();
//    while(iter!=t.end()){
//        cout<<*iter<<endl;
//        ++iter;
//    }
// һ�ֱȽ�����ĳ�ʼ����ʽ��ʾ����list��vector
//    list<int> l(5,4);
//    vector<double> v(l.begin(),l.end());
//    for(auto c:v){
//        cout<<c<<endl;
//    }


    //vector supports insert but not push_front()
    //insert(iterator,"some thing")
    //insert(iterator,10,"some thing")


    //vectorɾ��
    //c.pop_back() c.pop_front()
    //c.erase(iterator) //ɾ��������ָ����Ԫ��

    //c.erase(iterator1,iterator2)//ɾ��

//    t.erase(t.begin(),t.end()-1);
//    if(t.begin()!=t.end()){
//    for(auto c = t.begin();c!=t.end();c++){
//        cout<<*c<<endl;
//    }} //ͬ��������ҿ�
    return 0;
}

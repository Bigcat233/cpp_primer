#include <iostream>
#include <vector>
using namespace std;

int main()
{

//    /*string word;
//    while(cin>>word){
//        cout<<word<<endl;
//    }*/ //����ʵ��ͨ��ctrl+zȻ��enter���Խ���������OJ��δ���ȷ�������룿
//    ��OJ�ϲ�����ͨ����������ʵ�ֵģ�����ͨ�����������ļ�ʵ�ֵģ�
//    ����OJƽ̨Ĭ�������ݺ����EOF�ַ���������δ������Լ���������Ҫ�Լ�����EOF��������OJ��ȴ���Զ�������˳��ͨ����
//


    //getline��ȡһ����,�ص����������õ����ַ���z�б�������Ŀհ׷�
    //getline(cin,line) ��������һ����������һ��string���󣬺�����ָ�����������ж�������
//    string line;
//    while(getline(cin,line)){
//        cout<<line<<endl;
//    }


//  string compare
//  1.�������string������ĳЩ��Ӧλ���ϲ�һ�£���string����ȽϵĽ�����ǵ�һ�����ַ��ȽϵĽ��
//  2.����һ��������ͬʱ�̵ĸ�С


//
////    isalnum(1);
//    string str("some wrong");



    vector<int> v1;
    vector<int> v2(v1);
    //vector����˼�����һ������
    vector<int> v3;
    for(int i = 0;i!=100;++i){
        v3.push_back(i);
    }
    auto b = *v3.begin();
    auto e = v3.end();
    cout<<b<<endl;
    return 0;


}

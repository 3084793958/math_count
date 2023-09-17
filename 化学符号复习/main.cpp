#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<math.h>
#include<list>
#include<tuple>
#include<ctype.h>
#include<map>
#include<bits/stdc++.h>
#define Insert(name,t1,v1,t2,v2) name.insert(map<t1,t2>::value_type(v1,v2))
using namespace std;
int getRand(int min,int max);
int getRand(int min,int max)
{
    return (rand()%(max-min+1))+min;
}
int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    new_start:
    int point=0;
    int time=0;
    list<string> Type_main,Chinese_main;
    map<int,string> name_map;
    Type_main.push_back("H");
    Chinese_main.push_back("氢");
    Type_main.push_back("He");
    Chinese_main.push_back("氦");
    Type_main.push_back("Li");
    Chinese_main.push_back("锂");
    Type_main.push_back("Be");
    Chinese_main.push_back("铍");
    Type_main.push_back("B");
    Chinese_main.push_back("硼");
    Type_main.push_back("C");
    Chinese_main.push_back("碳");
    Type_main.push_back("N");
    Chinese_main.push_back("氮");
    Type_main.push_back("O");
    Chinese_main.push_back("氧");
    Type_main.push_back("F");
    Chinese_main.push_back("氟");
    Type_main.push_back("Ne");
    Chinese_main.push_back("氖");
    Type_main.push_back("Na");
    Chinese_main.push_back("钠");
    Type_main.push_back("Mg");
    Chinese_main.push_back("镁");
    Type_main.push_back("Al");
    Chinese_main.push_back("铝");
    Type_main.push_back("Si");
    Chinese_main.push_back("硅");
    Type_main.push_back("P");
    Chinese_main.push_back("磷");
    Type_main.push_back("S");
    Chinese_main.push_back("硫");
    Type_main.push_back("Cl");
    Chinese_main.push_back("氯");
    Type_main.push_back("Ar");
    Chinese_main.push_back("氩");
    Type_main.push_back("K");
    Chinese_main.push_back("钾");
    Type_main.push_back("Ca");
    Chinese_main.push_back("钙");
    Type_main.push_back("Sc");
    Chinese_main.push_back("钪");
    Type_main.push_back("Ti");
    Chinese_main.push_back("钛");
    Type_main.push_back("V");
    Chinese_main.push_back("钒");
    Type_main.push_back("Cr");
    Chinese_main.push_back("铬");
    Type_main.push_back("Mn");
    Chinese_main.push_back("锰");
    Type_main.push_back("Fe");
    Chinese_main.push_back("铁");
    Type_main.push_back("Co");
    Chinese_main.push_back("钴");
    Type_main.push_back("Ni");
    Chinese_main.push_back("镍");
    Type_main.push_back("Cu");
    Chinese_main.push_back("铜");
    Type_main.push_back("Zn");
    Chinese_main.push_back("锌");
    Type_main.push_back("Ga");
    Chinese_main.push_back("镓");
    Type_main.push_back("Ge");
    Chinese_main.push_back("锗");
    Type_main.push_back("As");
    Chinese_main.push_back("砷");
    Type_main.push_back("Se");
    Chinese_main.push_back("硒");
    Type_main.push_back("Br");
    Chinese_main.push_back("溴");
    Type_main.push_back("Kr");
    Chinese_main.push_back("氪");
    Type_main.push_back("Rb");
    Chinese_main.push_back("铷");
    Type_main.push_back("Sr");
    Chinese_main.push_back("锶");
    Type_main.push_back("Y");
    Chinese_main.push_back("钇");
    Type_main.push_back("Zr");
    Chinese_main.push_back("锆");
    Type_main.push_back("Nb");
    Chinese_main.push_back("铌");
    Type_main.push_back("Mo");
    Chinese_main.push_back("钼");
    Type_main.push_back("Tc");
    Chinese_main.push_back("锝");
    Type_main.push_back("Ru");
    Chinese_main.push_back("钌");
    Type_main.push_back("Rh");
    Chinese_main.push_back("铑");
    Type_main.push_back("Pd");
    Chinese_main.push_back("钯");
    Type_main.push_back("Ag");
    Chinese_main.push_back("银");
    Type_main.push_back("Cd");
    Chinese_main.push_back("镉");
    Type_main.push_back("In");
    Chinese_main.push_back("铟");
    Type_main.push_back("Sn");
    Chinese_main.push_back("锡");
    Type_main.push_back("Sb");
    Chinese_main.push_back("锑");
    Type_main.push_back("Te");
    Chinese_main.push_back("碲");
    Type_main.push_back("I");
    Chinese_main.push_back("碘");
    Type_main.push_back("Xe");
    Chinese_main.push_back("氙");
    Type_main.push_back("Cs");
    Chinese_main.push_back("铯");
    Type_main.push_back("Ba");
    Chinese_main.push_back("钡");
    Type_main.push_back("La");
    Chinese_main.push_back("镧");
    Type_main.push_back("Ce");
    Chinese_main.push_back("铈");
    Type_main.push_back("Pr");
    Chinese_main.push_back("镨");
    Type_main.push_back("Nd");
    Chinese_main.push_back("钕");
    Type_main.push_back("Pm");
    Chinese_main.push_back("钷");
    Type_main.push_back("Sm");
    Chinese_main.push_back("钐");
    Type_main.push_back("Eu");
    Chinese_main.push_back("铕");
    Type_main.push_back("Gd");
    Chinese_main.push_back("钆");
    Type_main.push_back("Tb");
    Chinese_main.push_back("铽");
    Type_main.push_back("Dy");
    Chinese_main.push_back("镝");
    Type_main.push_back("Ho");
    Chinese_main.push_back("钬");
    Type_main.push_back("Er");
    Chinese_main.push_back("铒");
    Type_main.push_back("Tm");
    Chinese_main.push_back("铥");
    Type_main.push_back("Yb");
    Chinese_main.push_back("镱");
    Type_main.push_back("Lu");
    Chinese_main.push_back("镥");
    Type_main.push_back("Hf");
    Chinese_main.push_back("铪");
    Type_main.push_back("Ta");
    Chinese_main.push_back("钽");
    Type_main.push_back("W");
    Chinese_main.push_back("钨");
    Type_main.push_back("Re");
    Chinese_main.push_back("铼");
    Type_main.push_back("Os");
    Chinese_main.push_back("锇");
    Type_main.push_back("Ir");
    Chinese_main.push_back("铱");
    Type_main.push_back("Pt");
    Chinese_main.push_back("铂");
    Type_main.push_back("Au");
    Chinese_main.push_back("金");
    Type_main.push_back("Hg");
    Chinese_main.push_back("汞");
    Type_main.push_back("Tl");
    Chinese_main.push_back("铊");
    Type_main.push_back("Pb");
    Chinese_main.push_back("铅");
    Type_main.push_back("Bi");
    Chinese_main.push_back("铋");
    Type_main.push_back("Po");
    Chinese_main.push_back("钋");
    Type_main.push_back("At");
    Chinese_main.push_back("砹");
    Type_main.push_back("Rn");
    Chinese_main.push_back("氡");
    Type_main.push_back("Fr");
    Chinese_main.push_back("钫");
    Type_main.push_back("Ra");
    Chinese_main.push_back("镭");
    Type_main.push_back("Ac");
    Chinese_main.push_back("锕");
    Type_main.push_back("Th");
    Chinese_main.push_back("钍");
    Type_main.push_back("Pa");
    Chinese_main.push_back("镤");
    Type_main.push_back("U");
    Chinese_main.push_back("铀");
    Type_main.push_back("Np");
    Chinese_main.push_back("镎");
    Type_main.push_back("Pu");
    Chinese_main.push_back("钚");
    Type_main.push_back("Am");
    Chinese_main.push_back("镅");
    Type_main.push_back("Cm");
    Chinese_main.push_back("锔");
    Type_main.push_back("Bk");
    Chinese_main.push_back("锫");
    Type_main.push_back("Cf");
    Chinese_main.push_back("锎");
    Type_main.push_back("Es");
    Chinese_main.push_back("锿");
    Type_main.push_back("Fm");
    Chinese_main.push_back("镄");
    Insert(name_map,int,1,string,"蔡伊灵");
    Insert(name_map,int,2,string,"曾力康");
    Insert(name_map,int,3,string,"曾斯锜");
    Insert(name_map,int,4,string,"曾钰莹");
    Insert(name_map,int,5,string,"曾子康");
    Insert(name_map,int,6,string,"陈万权");
    Insert(name_map,int,7,string,"仇子晴");
    Insert(name_map,int,8,string,"崔峻然");
    Insert(name_map,int,9,string,"戴敏君");
    Insert(name_map,int,10,string,"郭瀚匀");
    Insert(name_map,int,11,string,"郭浩男");
    Insert(name_map,int,12,string,"何旻慧");
    Insert(name_map,int,13,string,"贺天佑");
    Insert(name_map,int,14,string,"侯文帝");
    Insert(name_map,int,15,string,"胡芷菲");
    Insert(name_map,int,16,string,"黄婉晴");
    Insert(name_map,int,17,string,"黄漪桐");
    Insert(name_map,int,18,string,"黄语祺");
    Insert(name_map,int,19,string,"江坤潮");
    Insert(name_map,int,20,string,"江晓晴");
    Insert(name_map,int,21,string,"邝诗儿");
    Insert(name_map,int,23,string,"李雅雯");
    Insert(name_map,int,24,string,"廖子雄");
    Insert(name_map,int,25,string,"林秋艺");
    Insert(name_map,int,27,string,"凌海铭");
    Insert(name_map,int,28,string,"刘佳琪");
    Insert(name_map,int,29,string,"罗雅琳");
    Insert(name_map,int,30,string,"马峻辉");
    Insert(name_map,int,31,string,"邵子敬");
    Insert(name_map,int,32,string,"沈飞杨");
    Insert(name_map,int,33,string,"沈佩洁");
    Insert(name_map,int,35,string,"孙武京");
    Insert(name_map,int,36,string,"汤毅岚");
    Insert(name_map,int,37,string,"陶梓文");
    Insert(name_map,int,38,string,"吴明慧");
    Insert(name_map,int,39,string,"吴钟原");
    Insert(name_map,int,40,string,"吴梓锋");
    Insert(name_map,int,41,string,"徐嘉颖");
    Insert(name_map,int,42,string,"尹信逾");
    Insert(name_map,int,43,string,"张伊玮");
    Insert(name_map,int,44,string,"张紫瑶");
    Insert(name_map,int,45,string,"周辉");
    Insert(name_map,int,46,string,"周金宝");
    Insert(name_map,int,47,string,"朱颖旗");
    Insert(name_map,int,48,string,"黄雅英");
    Insert(name_map,int,49,string,"刘润鑫");
    cout<<"输入模式1:字母2:文字3:混合"<<endl;
    string choose_type;
    cin>>choose_type;
    cout<<"输入方式1:练习2:考试30题"<<endl;
    string choose_type_2;
    cin>>choose_type_2;
    cout<<"输入-20回到初始"<<endl;
    if (choose_type=="1")
    {
        while (time<30)
        {
            int this_choose_number=getRand(0,99);
            string send_string;
            string other_string;
            list<string>::iterator chinese_type=Chinese_main.begin();
            list<string>::iterator type_type=Type_main.begin();
            advance(type_type,this_choose_number);
            advance(chinese_type,this_choose_number);
            send_string=*chinese_type;
            other_string=*type_type;
            cout<<send_string<<endl;
            string result_string;
            cin>>result_string;
            if (result_string=="-20")
            {
                goto new_start;
            }
            else if (result_string==other_string)
            {
                cout<<"正确"<<endl<<"=========="<<endl;
                if (choose_type_2=="2")
                {
                    point++;
                    time++;
                }
            }
            else
            {
                cout<<"错误"<<endl;
                cout<<this_choose_number+1<<"号元素"<<endl<<send_string<<endl<<other_string<<endl<<"=========="<<endl;
                if (choose_type_2=="2")
                {
                    point--;
                    time++;
                }
                int name_number=0;
                while (!(name_number<=49&&name_number>=1&&name_number!=22&&name_number!=26&&name_number!=34))
                {
                    name_number=getRand(0,99);
                }
                cout<<"搞什么,"<<name_map[name_number]<<"都默写到"<<getRand(100,118)<<"号元素了!快点!"<<endl<<"=========="<<endl;
            }
            if (choose_type_2=="2")
            {
                cout<<"次数:"<<time<<endl<<"分数:"<<point<<endl<<"=========="<<endl;
            }
        }
    }
    else if (choose_type=="2")
    {
        while (time<30)
        {
            int this_choose_number=getRand(0,99);
            string send_string;
            string other_string;
            list<string>::iterator chinese_type=Chinese_main.begin();
            list<string>::iterator type_type=Type_main.begin();
            advance(type_type,this_choose_number);
            advance(chinese_type,this_choose_number);
            send_string=*type_type;
            other_string=*chinese_type;
            cout<<send_string<<endl;
            string result_string;
            cin>>result_string;
            if (result_string=="-20")
            {
                goto new_start;
            }
            else if (result_string==other_string)
            {
                cout<<"正确"<<endl<<"=========="<<endl;
                if (choose_type_2=="2")
                {
                    point++;
                    time++;
                }
            }
            else
            {
                cout<<"错误"<<endl;
                cout<<this_choose_number+1<<"号元素"<<endl<<other_string<<endl<<send_string<<endl<<"=========="<<endl;
                if (choose_type_2=="2")
                {
                    point--;
                    time++;
                }
                int name_number=0;
                while (!(name_number<=49&&name_number>=1&&name_number!=22&&name_number!=26&&name_number!=34))
                {
                    name_number=getRand(0,99);
                }
                cout<<"搞什么,"<<name_map[name_number]<<"都默写到"<<getRand(100,118)<<"号元素了!快点!"<<endl<<"=========="<<endl;
            }
            if (choose_type_2=="2")
            {
                cout<<"次数:"<<time<<endl<<"分数:"<<point<<endl<<"=========="<<endl;
            }
        }
    }
    else if (choose_type=="3")
    {
        while (time<30)
        {
            int choose_way_to_do=getRand(1,2)-1;
            int this_choose_number=getRand(0,99);
            string send_string;
            string other_string;
            list<string>::iterator chinese_type=Chinese_main.begin();
            list<string>::iterator type_type=Type_main.begin();
            advance(type_type,this_choose_number);
            advance(chinese_type,this_choose_number);
            if (choose_way_to_do==0)
            {
                send_string=*chinese_type;
                other_string=*type_type;
            }
            else if (choose_way_to_do==1)
            {
                send_string=*type_type;
                other_string=*chinese_type;
            }
            cout<<send_string<<endl;
            string result_string;
            cin>>result_string;
            if (result_string=="-20")
            {
                goto new_start;
            }
            else if (result_string==other_string)
            {
                cout<<"正确"<<endl<<"=========="<<endl;
                if (choose_type_2=="2")
                {
                    point++;
                    time++;
                }
            }
            else
            {
                cout<<"错误"<<endl;
                if (choose_way_to_do==0)
                {
                    cout<<this_choose_number+1<<"号元素"<<endl<<send_string<<endl<<other_string<<endl<<"=========="<<endl;
                }
                else if (choose_way_to_do==1)
                {
                    cout<<this_choose_number+1<<"号元素"<<endl<<other_string<<endl<<send_string<<endl<<"=========="<<endl;
                }
                if (choose_type_2=="2")
                {
                    point--;
                    time++;
                }
                int name_number=0;
                while (!(name_number<=49&&name_number>=1&&name_number!=22&&name_number!=26&&name_number!=34))
                {
                    name_number=getRand(0,99);
                }
                cout<<"搞什么,"<<name_map[name_number]<<"都默写到"<<getRand(100,118)<<"号元素了!快点!"<<endl<<"=========="<<endl;
            }
            if (choose_type_2=="2")
            {
                cout<<"次数:"<<time<<endl<<"分数:"<<point<<endl<<"=========="<<endl;
            }
        }
    }
    return 0;
}
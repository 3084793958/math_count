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
bool sort_data(pair<int,int> pair1,pair<int,int> pair2)
{
    return (pair1.second>pair2.second);
}
int main()
{
    cout<<"加扣分操作平台"<<endl;
    map<int,string> name_map;
    map<int,int> add_1_map;//2
    map<int,int> add_2_map;//3
    map<int,int> add_3_map;//1
    map<int,int> back_1_map;//-2
    map<int,int> back_2_map;//-2
    map<int,int> back_3_map;//-2
    map<int,int> back_4_map;//-2
    map<int,int> back_5_map;//-2
    map<int,int> back_6_map;//-2
    map<int,int> back_7_map;//-2
    map<int,int> back_8_map;//-2
    map<int,int> back_9_map;//-2
    map<int,int> all_point_map;
    map<int,int> all_point_group_map;
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
    for (int i=0;i<49;i++)
    {
        Insert(add_1_map,int,i+1,int,0);
        Insert(add_2_map,int,i+1,int,0);
        Insert(add_3_map,int,i+1,int,0);
        Insert(back_1_map,int,i+1,int,0);
        Insert(back_2_map,int,i+1,int,0);
        Insert(back_3_map,int,i+1,int,0);
        Insert(back_4_map,int,i+1,int,0);
        Insert(back_5_map,int,i+1,int,0);
        Insert(back_6_map,int,i+1,int,0);
        Insert(back_7_map,int,i+1,int,0);
        Insert(back_8_map,int,i+1,int,0);
        Insert(back_9_map,int,i+1,int,0);
        Insert(all_point_map,int,i+1,int,0);
    }
    for (int i=0;i<12;i++)
    {
        Insert(all_point_group_map,int,i+1,int,0);
    }
    while (true)
    {
        cout<<"操作学号(a读取)"<<endl;
        string add_type;
        cin>>add_type;
        int add_type_int=0;
        bool pass=true;
        for (auto const &i:add_type)
        {
            if (!(i<='9'&&i>='0'))
            {
                pass=false;
            }
        }
        if (pass)
        {
            istringstream iss(add_type);
            iss>>add_type_int;
        }
        if (add_type_int<=49&&add_type_int>=1&&add_type_int!=22&&add_type_int!=26&&add_type_int!=34)
        {
            cout<<name_map.at(add_type_int)<<endl;
            cout<<"是否确信(1true,2false)"<<endl;
            string find_true;
            cin>>find_true;
            if (find_true=="1")
            {
                cout<<"处理选择"<<endl;
                cout<<"加分:1,扣分:2,遍历:3"<<endl;
                string find_add_or_back;
                cin>>find_add_or_back;
                if (find_add_or_back=="1")
                {
                    cout<<"举手:1"<<endl;
                    cout<<"优秀作业:2"<<endl;
                    cout<<"其他加分:3"<<endl;
                    string choose_add_way;
                    cin>>choose_add_way;
                    if (choose_add_way=="1")
                    {
                        cout<<"次数"<<endl;
                        string add_time;
                        cin>>add_time;
                        int add_time_int=0;
                        bool pass_time=true;
                        for (auto const &i:add_time)
                        {
                            if (!(i<='9'&&i>='0'))
                            {
                                pass_time=false;
                            }
                        }
                        if (pass_time)
                        {
                            istringstream iss(add_time);
                            iss>>add_time_int;
                        }
                        add_1_map[add_type_int]=add_1_map[add_type_int]+add_time_int;
                    }
                    else if (choose_add_way=="2")
                    {
                        cout<<"次数"<<endl;
                        string add_time;
                        cin>>add_time;
                        int add_time_int=0;
                        bool pass_time=true;
                        for (auto const &i:add_time)
                        {
                            if (!(i<='9'&&i>='0'))
                            {
                                pass_time=false;
                            }
                        }
                        if (pass_time)
                        {
                            istringstream iss(add_time);
                            iss>>add_time_int;
                        }
                        add_2_map[add_type_int]=add_2_map[add_type_int]+add_time_int;
                    }
                    else if (choose_add_way=="3")
                    {
                        cout<<"分数"<<endl;
                        string add_time;
                        cin>>add_time;
                        int add_time_int=0;
                        bool pass_time=true;
                        for (auto const &i:add_time)
                        {
                            if (!(i<='9'&&i>='0'))
                            {
                                pass_time=false;
                            }
                        }
                        if (pass_time)
                        {
                            istringstream iss(add_time);
                            iss>>add_time_int;
                        }
                        add_3_map[add_type_int]=add_3_map[add_type_int]+add_time_int;
                    }
                }
                else if (find_add_or_back=="2")
                {
                    cout<<"仪容仪表:1"<<endl;
                    cout<<"考勤:2"<<endl;
                    cout<<"单车:3"<<endl;
                    cout<<"卫生:4"<<endl;
                    cout<<"欠背书:5"<<endl;
                    cout<<"课堂纪律:6"<<endl;
                    cout<<"午休自习纪律:7"<<endl;
                    cout<<"作业欠交:8"<<endl;
                    cout<<"其他扣分:9"<<endl;
                    string choose_add_way;
                    cin>>choose_add_way;
                    if (choose_add_way=="1")
                    {
                        cout<<"次数"<<endl;
                        string add_time;
                        cin>>add_time;
                        int add_time_int=0;
                        bool pass_time=true;
                        for (auto const &i:add_time)
                        {
                            if (!(i<='9'&&i>='0'))
                            {
                                pass_time=false;
                            }
                        }
                        if (pass_time)
                        {
                            istringstream iss(add_time);
                            iss>>add_time_int;
                        }
                        back_1_map[add_type_int]=back_1_map[add_type_int]+add_time_int;
                    }
                    else if (choose_add_way=="2")
                    {
                        cout<<"次数"<<endl;
                        string add_time;
                        cin>>add_time;
                        int add_time_int=0;
                        bool pass_time=true;
                        for (auto const &i:add_time)
                        {
                            if (!(i<='9'&&i>='0'))
                            {
                                pass_time=false;
                            }
                        }
                        if (pass_time)
                        {
                            istringstream iss(add_time);
                            iss>>add_time_int;
                        }
                        back_2_map[add_type_int]=back_2_map[add_type_int]+add_time_int;
                    }
                    else if (choose_add_way=="3")
                    {
                        cout<<"次数"<<endl;
                        string add_time;
                        cin>>add_time;
                        int add_time_int=0;
                        bool pass_time=true;
                        for (auto const &i:add_time)
                        {
                            if (!(i<='9'&&i>='0'))
                            {
                                pass_time=false;
                            }
                        }
                        if (pass_time)
                        {
                            istringstream iss(add_time);
                            iss>>add_time_int;
                        }
                        back_3_map[add_type_int]=back_3_map[add_type_int]+add_time_int;
                    }
                    else if (choose_add_way=="4")
                    {
                        cout<<"次数"<<endl;
                        string add_time;
                        cin>>add_time;
                        int add_time_int=0;
                        bool pass_time=true;
                        for (auto const &i:add_time)
                        {
                            if (!(i<='9'&&i>='0'))
                            {
                                pass_time=false;
                            }
                        }
                        if (pass_time)
                        {
                            istringstream iss(add_time);
                            iss>>add_time_int;
                        }
                        back_4_map[add_type_int]=back_4_map[add_type_int]+add_time_int;
                    }
                    else if (choose_add_way=="5")
                    {
                        cout<<"次数"<<endl;
                        string add_time;
                        cin>>add_time;
                        int add_time_int=0;
                        bool pass_time=true;
                        for (auto const &i:add_time)
                        {
                            if (!(i<='9'&&i>='0'))
                            {
                                pass_time=false;
                            }
                        }
                        if (pass_time)
                        {
                            istringstream iss(add_time);
                            iss>>add_time_int;
                        }
                        back_5_map[add_type_int]=back_5_map[add_type_int]+add_time_int;
                    }
                    else if (choose_add_way=="6")
                    {
                        cout<<"次数"<<endl;
                        string add_time;
                        cin>>add_time;
                        int add_time_int=0;
                        bool pass_time=true;
                        for (auto const &i:add_time)
                        {
                            if (!(i<='9'&&i>='0'))
                            {
                                pass_time=false;
                            }
                        }
                        if (pass_time)
                        {
                            istringstream iss(add_time);
                            iss>>add_time_int;
                        }
                        back_6_map[add_type_int]=back_6_map[add_type_int]+add_time_int;
                    }
                    else if (choose_add_way=="7")
                    {
                        cout<<"次数"<<endl;
                        string add_time;
                        cin>>add_time;
                        int add_time_int=0;
                        bool pass_time=true;
                        for (auto const &i:add_time)
                        {
                            if (!(i<='9'&&i>='0'))
                            {
                                pass_time=false;
                            }
                        }
                        if (pass_time)
                        {
                            istringstream iss(add_time);
                            iss>>add_time_int;
                        }
                        back_7_map[add_type_int]=back_7_map[add_type_int]+add_time_int;
                    }
                    else if (choose_add_way=="8")
                    {
                        cout<<"次数"<<endl;
                        string add_time;
                        cin>>add_time;
                        int add_time_int=0;
                        bool pass_time=true;
                        for (auto const &i:add_time)
                        {
                            if (!(i<='9'&&i>='0'))
                            {
                                pass_time=false;
                            }
                        }
                        if (pass_time)
                        {
                            istringstream iss(add_time);
                            iss>>add_time_int;
                        }
                        back_8_map[add_type_int]=back_8_map[add_type_int]+add_time_int;
                    }
                    else if (choose_add_way=="9")
                    {
                        cout<<"分数"<<endl;
                        string add_time;
                        cin>>add_time;
                        int add_time_int=0;
                        bool pass_time=true;
                        for (auto const &i:add_time)
                        {
                            if (!(i<='9'&&i>='0'))
                            {
                                pass_time=false;
                            }
                        }
                        if (pass_time)
                        {
                            istringstream iss(add_time);
                            iss>>add_time_int;
                        }
                        back_9_map[add_type_int]=back_9_map[add_type_int]+add_time_int;
                    }
                }
                else if (find_add_or_back=="3")
                {
                    cout<<"停止遍历:-20,跳转对应项:"<<endl;
                    cout<<"举手:-1"<<endl;
                    cout<<"优秀作业:-2"<<endl;
                    cout<<"其他加分:-3"<<endl;
                    cout<<"仪容仪表:-4"<<endl;
                    cout<<"考勤:-5"<<endl;
                    cout<<"单车:-6"<<endl;
                    cout<<"卫生:-7"<<endl;
                    cout<<"欠背书:-8"<<endl;
                    cout<<"课堂纪律:-9"<<endl;
                    cout<<"午休自习纪律:-10"<<endl;
                    cout<<"作业欠交:-11"<<endl;
                    cout<<"其他扣分:-12"<<endl;
                    int type_point=0;
                    code1:
                        cout<<"举手(次数)"<<endl;
                        type_point=0;
                        cin>>type_point;
                        if (type_point==-20)
                        {
                            continue;
                        }
                        else if (type_point==-1)
                        {
                            goto code1;
                        }
                        else if (type_point==-2)
                        {
                            goto code2;
                        }
                        else if (type_point==-3)
                        {
                            goto code3;
                        }
                        else if (type_point==-4)
                        {
                            goto code4;
                        }
                        else if (type_point==-5)
                        {
                            goto code5;
                        }
                        else if (type_point==-6)
                        {
                            goto code6;
                        }
                        else if (type_point==-7)
                        {
                            goto code7;
                        }
                        else if (type_point==-8)
                        {
                            goto code8;
                        }
                        else if (type_point==-9)
                        {
                            goto code9;
                        }
                        else if (type_point==-10)
                        {
                            goto code10;
                        }
                        else if (type_point==-11)
                        {
                            goto code11;
                        }
                        else if (type_point==-12)
                        {
                            goto code12;
                        }
                        add_1_map[add_type_int]=add_1_map[add_type_int]+type_point;
                    code2:
                        cout<<"优秀作业(次数)"<<endl;
                        type_point=0;
                        cin>>type_point;
                        if (type_point==-20)
                        {
                            continue;
                        }
                        else if (type_point==-1)
                        {
                            goto code1;
                        }
                        else if (type_point==-2)
                        {
                            goto code2;
                        }
                        else if (type_point==-3)
                        {
                            goto code3;
                        }
                        else if (type_point==-4)
                        {
                            goto code4;
                        }
                        else if (type_point==-5)
                        {
                            goto code5;
                        }
                        else if (type_point==-6)
                        {
                            goto code6;
                        }
                        else if (type_point==-7)
                        {
                            goto code7;
                        }
                        else if (type_point==-8)
                        {
                            goto code8;
                        }
                        else if (type_point==-9)
                        {
                            goto code9;
                        }
                        else if (type_point==-10)
                        {
                            goto code10;
                        }
                        else if (type_point==-11)
                        {
                            goto code11;
                        }
                        else if (type_point==-12)
                        {
                            goto code12;
                        }
                        add_2_map[add_type_int]=add_2_map[add_type_int]+type_point;
                    code3:
                        cout<<"其他加分(分数)"<<endl;
                        type_point=0;
                        cin>>type_point;
                        if (type_point==-20)
                        {
                            continue;
                        }
                        else if (type_point==-1)
                        {
                            goto code1;
                        }
                        else if (type_point==-2)
                        {
                            goto code2;
                        }
                        else if (type_point==-3)
                        {
                            goto code3;
                        }
                        else if (type_point==-4)
                        {
                            goto code4;
                        }
                        else if (type_point==-5)
                        {
                            goto code5;
                        }
                        else if (type_point==-6)
                        {
                            goto code6;
                        }
                        else if (type_point==-7)
                        {
                            goto code7;
                        }
                        else if (type_point==-8)
                        {
                            goto code8;
                        }
                        else if (type_point==-9)
                        {
                            goto code9;
                        }
                        else if (type_point==-10)
                        {
                            goto code10;
                        }
                        else if (type_point==-11)
                        {
                            goto code11;
                        }
                        else if (type_point==-12)
                        {
                            goto code12;
                        }
                        add_3_map[add_type_int]=add_3_map[add_type_int]+type_point;
                    code4:
                        cout<<"仪容仪表(次数)"<<endl;
                        type_point=0;
                        cin>>type_point;
                        if (type_point==-20)
                        {
                            continue;
                        }
                        else if (type_point==-1)
                        {
                            goto code1;
                        }
                        else if (type_point==-2)
                        {
                            goto code2;
                        }
                        else if (type_point==-3)
                        {
                            goto code3;
                        }
                        else if (type_point==-4)
                        {
                            goto code4;
                        }
                        else if (type_point==-5)
                        {
                            goto code5;
                        }
                        else if (type_point==-6)
                        {
                            goto code6;
                        }
                        else if (type_point==-7)
                        {
                            goto code7;
                        }
                        else if (type_point==-8)
                        {
                            goto code8;
                        }
                        else if (type_point==-9)
                        {
                            goto code9;
                        }
                        else if (type_point==-10)
                        {
                            goto code10;
                        }
                        else if (type_point==-11)
                        {
                            goto code11;
                        }
                        else if (type_point==-12)
                        {
                            goto code12;
                        }
                        back_1_map[add_type_int]=back_1_map[add_type_int]+type_point;
                    code5:
                        cout<<"考勤(次数)"<<endl;
                        type_point=0;
                        cin>>type_point;
                        if (type_point==-20)
                        {
                            continue;
                        }
                        else if (type_point==-1)
                        {
                            goto code1;
                        }
                        else if (type_point==-2)
                        {
                            goto code2;
                        }
                        else if (type_point==-3)
                        {
                            goto code3;
                        }
                        else if (type_point==-4)
                        {
                            goto code4;
                        }
                        else if (type_point==-5)
                        {
                            goto code5;
                        }
                        else if (type_point==-6)
                        {
                            goto code6;
                        }
                        else if (type_point==-7)
                        {
                            goto code7;
                        }
                        else if (type_point==-8)
                        {
                            goto code8;
                        }
                        else if (type_point==-9)
                        {
                            goto code9;
                        }
                        else if (type_point==-10)
                        {
                            goto code10;
                        }
                        else if (type_point==-11)
                        {
                            goto code11;
                        }
                        else if (type_point==-12)
                        {
                            goto code12;
                        }
                        back_2_map[add_type_int]=back_2_map[add_type_int]+type_point;
                    code6:
                        cout<<"单车(次数)"<<endl;
                        type_point=0;
                        cin>>type_point;
                        if (type_point==-20)
                        {
                            continue;
                        }
                        else if (type_point==-1)
                        {
                            goto code1;
                        }
                        else if (type_point==-2)
                        {
                            goto code2;
                        }
                        else if (type_point==-3)
                        {
                            goto code3;
                        }
                        else if (type_point==-4)
                        {
                            goto code4;
                        }
                        else if (type_point==-5)
                        {
                            goto code5;
                        }
                        else if (type_point==-6)
                        {
                            goto code6;
                        }
                        else if (type_point==-7)
                        {
                            goto code7;
                        }
                        else if (type_point==-8)
                        {
                            goto code8;
                        }
                        else if (type_point==-9)
                        {
                            goto code9;
                        }
                        else if (type_point==-10)
                        {
                            goto code10;
                        }
                        else if (type_point==-11)
                        {
                            goto code11;
                        }
                        else if (type_point==-12)
                        {
                            goto code12;
                        }
                        back_3_map[add_type_int]=back_3_map[add_type_int]+type_point;
                    code7:
                        cout<<"卫生(次数)"<<endl;
                        type_point=0;
                        cin>>type_point;
                        if (type_point==-20)
                        {
                            continue;
                        }
                        else if (type_point==-1)
                        {
                            goto code1;
                        }
                        else if (type_point==-2)
                        {
                            goto code2;
                        }
                        else if (type_point==-3)
                        {
                            goto code3;
                        }
                        else if (type_point==-4)
                        {
                            goto code4;
                        }
                        else if (type_point==-5)
                        {
                            goto code5;
                        }
                        else if (type_point==-6)
                        {
                            goto code6;
                        }
                        else if (type_point==-7)
                        {
                            goto code7;
                        }
                        else if (type_point==-8)
                        {
                            goto code8;
                        }
                        else if (type_point==-9)
                        {
                            goto code9;
                        }
                        else if (type_point==-10)
                        {
                            goto code10;
                        }
                        else if (type_point==-11)
                        {
                            goto code11;
                        }
                        else if (type_point==-12)
                        {
                            goto code12;
                        }
                        back_4_map[add_type_int]=back_4_map[add_type_int]+type_point;
                    code8:
                        cout<<"欠背书(次数)"<<endl;
                        type_point=0;
                        cin>>type_point;
                        if (type_point==-20)
                        {
                            continue;
                        }
                        else if (type_point==-1)
                        {
                            goto code1;
                        }
                        else if (type_point==-2)
                        {
                            goto code2;
                        }
                        else if (type_point==-3)
                        {
                            goto code3;
                        }
                        else if (type_point==-4)
                        {
                            goto code4;
                        }
                        else if (type_point==-5)
                        {
                            goto code5;
                        }
                        else if (type_point==-6)
                        {
                            goto code6;
                        }
                        else if (type_point==-7)
                        {
                            goto code7;
                        }
                        else if (type_point==-8)
                        {
                            goto code8;
                        }
                        else if (type_point==-9)
                        {
                            goto code9;
                        }
                        else if (type_point==-10)
                        {
                            goto code10;
                        }
                        else if (type_point==-11)
                        {
                            goto code11;
                        }
                        else if (type_point==-12)
                        {
                            goto code12;
                        }
                        back_5_map[add_type_int]=back_5_map[add_type_int]+type_point;
                    code9:
                        cout<<"课堂纪律(次数)"<<endl;
                        type_point=0;
                        cin>>type_point;
                        if (type_point==-20)
                        {
                            continue;
                        }
                        else if (type_point==-1)
                        {
                            goto code1;
                        }
                        else if (type_point==-2)
                        {
                            goto code2;
                        }
                        else if (type_point==-3)
                        {
                            goto code3;
                        }
                        else if (type_point==-4)
                        {
                            goto code4;
                        }
                        else if (type_point==-5)
                        {
                            goto code5;
                        }
                        else if (type_point==-6)
                        {
                            goto code6;
                        }
                        else if (type_point==-7)
                        {
                            goto code7;
                        }
                        else if (type_point==-8)
                        {
                            goto code8;
                        }
                        else if (type_point==-9)
                        {
                            goto code9;
                        }
                        else if (type_point==-10)
                        {
                            goto code10;
                        }
                        else if (type_point==-11)
                        {
                            goto code11;
                        }
                        else if (type_point==-12)
                        {
                            goto code12;
                        }
                        back_6_map[add_type_int]=back_6_map[add_type_int]+type_point;
                    code10:
                        cout<<"午休自习纪律(次数)"<<endl;
                        type_point=0;
                        cin>>type_point;
                        if (type_point==-20)
                        {
                            continue;
                        }
                        else if (type_point==-1)
                        {
                            goto code1;
                        }
                        else if (type_point==-2)
                        {
                            goto code2;
                        }
                        else if (type_point==-3)
                        {
                            goto code3;
                        }
                        else if (type_point==-4)
                        {
                            goto code4;
                        }
                        else if (type_point==-5)
                        {
                            goto code5;
                        }
                        else if (type_point==-6)
                        {
                            goto code6;
                        }
                        else if (type_point==-7)
                        {
                            goto code7;
                        }
                        else if (type_point==-8)
                        {
                            goto code8;
                        }
                        else if (type_point==-9)
                        {
                            goto code9;
                        }
                        else if (type_point==-10)
                        {
                            goto code10;
                        }
                        else if (type_point==-11)
                        {
                            goto code11;
                        }
                        else if (type_point==-12)
                        {
                            goto code12;
                        }
                        back_7_map[add_type_int]=back_7_map[add_type_int]+type_point;
                    code11:
                        cout<<"作业欠交(次数)"<<endl;
                        type_point=0;
                        cin>>type_point;
                        if (type_point==-20)
                        {
                            continue;
                        }
                        else if (type_point==-1)
                        {
                            goto code1;
                        }
                        else if (type_point==-2)
                        {
                            goto code2;
                        }
                        else if (type_point==-3)
                        {
                            goto code3;
                        }
                        else if (type_point==-4)
                        {
                            goto code4;
                        }
                        else if (type_point==-5)
                        {
                            goto code5;
                        }
                        else if (type_point==-6)
                        {
                            goto code6;
                        }
                        else if (type_point==-7)
                        {
                            goto code7;
                        }
                        else if (type_point==-8)
                        {
                            goto code8;
                        }
                        else if (type_point==-9)
                        {
                            goto code9;
                        }
                        else if (type_point==-10)
                        {
                            goto code10;
                        }
                        else if (type_point==-11)
                        {
                            goto code11;
                        }
                        else if (type_point==-12)
                        {
                            goto code12;
                        }
                        back_8_map[add_type_int]=back_8_map[add_type_int]+type_point;
                    code12:
                        cout<<"其他扣分(分数)"<<endl;
                        type_point=0;
                        cin>>type_point;
                        if (type_point==-20)
                        {
                            continue;
                        }
                        else if (type_point==-1)
                        {
                            goto code1;
                        }
                        else if (type_point==-2)
                        {
                            goto code2;
                        }
                        else if (type_point==-3)
                        {
                            goto code3;
                        }
                        else if (type_point==-4)
                        {
                            goto code4;
                        }
                        else if (type_point==-5)
                        {
                            goto code5;
                        }
                        else if (type_point==-6)
                        {
                            goto code6;
                        }
                        else if (type_point==-7)
                        {
                            goto code7;
                        }
                        else if (type_point==-8)
                        {
                            goto code8;
                        }
                        else if (type_point==-9)
                        {
                            goto code9;
                        }
                        else if (type_point==-10)
                        {
                            goto code10;
                        }
                        else if (type_point==-11)
                        {
                            goto code11;
                        }
                        else if (type_point==-12)
                        {
                            goto code12;
                        }
                        back_9_map[add_type_int]=back_9_map[add_type_int]+type_point;
                }
            }
        }
        else if (add_type=="a")
        {
            cout<<"个人分数"<<endl;
            for (int i=1;i<=49;i++)
            {
                if (i<=49&&i>=1&&i!=22&&i!=26&&i!=34)
                {
                    all_point_map[i]=add_1_map[i]*2+add_2_map[i]*3+add_3_map[i]-back_1_map[i]-back_2_map[i]*2-back_3_map[i]-back_4_map[i]*3-back_5_map[i]*2-back_6_map[i]*2-back_7_map[i]*2-back_8_map[i]*2-back_9_map[i];
                }
            }
            all_point_group_map[1]=all_point_map[7]+all_point_map[5]+all_point_map[4]+all_point_map[30];
            all_point_group_map[2]=all_point_map[9]+all_point_map[1]+all_point_map[19]+all_point_map[46];
            all_point_group_map[3]=all_point_map[8]+all_point_map[33]+all_point_map[42]+all_point_map[11];
            all_point_group_map[4]=all_point_map[21]+all_point_map[36]+all_point_map[48]+all_point_map[43];
            all_point_group_map[5]=all_point_map[20]+all_point_map[16]+all_point_map[37]+all_point_map[32];
            all_point_group_map[6]=all_point_map[44]+all_point_map[31]+all_point_map[2]+all_point_map[27];
            all_point_group_map[7]=all_point_map[39]+all_point_map[18]+all_point_map[35]+all_point_map[10];
            all_point_group_map[8]=all_point_map[3]+all_point_map[40]+all_point_map[41]+all_point_map[6];
            all_point_group_map[9]=all_point_map[13]+all_point_map[23]+all_point_map[45]+all_point_map[25];
            all_point_group_map[10]=all_point_map[29]+all_point_map[15]+all_point_map[14]+all_point_map[49];
            all_point_group_map[11]=all_point_map[24]+all_point_map[28]+all_point_map[12];
            all_point_group_map[12]=all_point_map[47]+all_point_map[38]+all_point_map[17];
            vector<pair<int,int>> help_one_map(all_point_map.begin(),all_point_map.end());
            sort(help_one_map.begin(),help_one_map.end(),sort_data);
            for (int i=1;i<=49;i++)
            {
                if (i<=49&&i>=1&&i!=22&&i!=26&&i!=34)
                {
                    int com_number=0;
                    for (int k=0;k<49;k++)
                    {
                        if (i==help_one_map[k].first)
                        {
                            com_number=k+1;
                            k=49;
                        }
                    }
                    cout<<i<<name_map[i]<<":举手,"<<add_1_map[i]<<"|优秀作业,"<<add_2_map[i]<<"|其他加分,"<<add_3_map[i]<<"|仪容仪表,"<<back_1_map[i]<<"|考勤,"<<back_2_map[i]<<"|单车,"<<back_3_map[i]<<"|卫生,"<<back_4_map[i]<<"|欠背书,"<<back_5_map[i]<<"|课堂纪律,"<<back_6_map[i]<<"|午休自习纪律,"<<back_7_map[i]<<"|作业欠交,"<<back_8_map[i]<<"|其他扣分,"<<back_9_map[i]<<"|总分,"<<all_point_map[i]<<"|排名,"<<com_number<<endl;
                }
            }
            cout<<endl<<"小组分数"<<endl;
            vector<pair<int,int>> help_group_map(all_point_group_map.begin(),all_point_group_map.end());
            sort(help_group_map.begin(),help_group_map.end(),sort_data);
            for (int i=0;i<12;i++)
            {
                int com_number=0;
                for (int k=0;k<12;k++)
                {
                    if (i+1==help_group_map[k].first)
                    {
                        com_number=k+1;
                        k=12;
                    }
                }
                cout<<i+1<<"小组:分数,"<<all_point_group_map[i+1]<<"|排名,"<<com_number<<endl;
            }
        }
        else
        {
            cout<<"对象错误"<<endl;
        }
    }
}
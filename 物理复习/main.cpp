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
    begin:
    string choose_type;
    string choose_type2;
    list<list<string>> choose_ABCD;
    list<list<string>> choose_TK;
    list<list<string>> choose_Math;
    choose_ABCD.push_back({"学习了内能及能量的转化和守恒后,同学们在一起梳理知识时交流了一下想法,你认为其中不正确的是","做功改变物体的内能是不同形式的能的相互转化","热传递改变物体的内能是不同形式的能的互相转化","各种形式的能在一定条件下都可以互相转化","各种形式的能在一定条件下都可以相互转化","能量在转化和转移的过程中总会有损耗,但能量的总量保持不变","2","学习了内能及能量的转化和守恒后,同学们在一起梳理知识时交流了一下想法,你认为其中不正确的是\n热传递改变物体的内能是不同形式的能的互相转化(内能的转移)"});
    choose_TK.push_back({"能量既不会凭空消失,也不会凭空产生,它只会从[1]转化为[2],或者从[3]转移到[4],而在转化和转移的过程中,一种能量增加了,另一种能量一定[5],能量的总量[6],这就是[7]定律","一种形式","其他形式","一个物体","其他物体","减少","不变","能量守恒","能量既不会凭空消失,也不会凭空产生,它只会从[一种形式]转化为[其他形式],或者从[一个物体]转移到[其他物体],而在转化和转移的过程中,一种能量增加了,另一种能量一定[减少],能量的总量[不变],这就是[能量守恒]定律"});
    int point=0,time=0;
    cout<<"物理复习"<<endl<<"1:选择题"<<endl<<"2:填空题"<<endl<<"3:计算题"<<endl<<"4:组合"<<endl<<"-20:退出"<<endl;
    cin>>choose_type;
    if (choose_type!="-20")
    {
        cout<<"1:练习"<<endl<<"2:考试"<<endl;
        cin>>choose_type2;
        if (choose_type2=="1"||choose_type2=="2")
        {
            while (time<30)
            {
                bool is_true=false;
                if (choose_type=="1")
                {
                    int choose_T=getRand(0,choose_ABCD.size()-1);
                    int first_choose_time=0;
                    string need_a,need_b,need_c,need_d,need_all,true_time;
                    int a_pos=getRand(1,4),b_pos=getRand(1,4),c_pos=getRand(1,4),d_pos=getRand(1,4);
                    while (a_pos==b_pos)
                    {
                        b_pos=getRand(1,4);
                    }
                    while (a_pos==c_pos||b_pos==c_pos)
                    {
                        c_pos=getRand(1,4);
                    }
                    while (a_pos==d_pos||b_pos==d_pos||c_pos==d_pos)
                    {
                        d_pos=getRand(1,4);
                    }
                    for (const auto i:choose_ABCD)
                    {
                        if (choose_T==first_choose_time)
                        {
                            int second_choose_time=0;
                            for (const auto k:i)
                            {
                                if (second_choose_time==0)
                                {
                                    cout<<k<<endl;
                                }
                                else if (second_choose_time==a_pos)
                                {
                                    need_a=k;
                                }
                                else if (second_choose_time==b_pos)
                                {
                                    need_b=k;
                                }
                                else if (second_choose_time==c_pos)
                                {
                                    need_c=k;
                                }
                                else if (second_choose_time==d_pos)
                                {
                                    need_d=k;
                                }
                                else if (second_choose_time==i.size()-2)
                                {
                                    true_time=k;
                                }
                                else if (second_choose_time==i.size()-1)
                                {
                                    need_all=k;
                                }
                                second_choose_time++;
                            }
                        }
                        first_choose_time++;
                    }
                    string true_string;
                    if (atoi(true_time.c_str())==a_pos)
                    {
                        true_string="A";
                    }
                    else if (atoi(true_time.c_str())==b_pos)
                    {
                        true_string="B";
                    }
                    else if (atoi(true_time.c_str())==c_pos)
                    {
                        true_string="C";
                    }
                    else if (atoi(true_time.c_str())==d_pos)
                    {
                        true_string="D";
                    }
                    cout<<"A."<<need_a<<endl;
                    cout<<"B."<<need_b<<endl;
                    cout<<"C."<<need_c<<endl;
                    cout<<"D."<<need_d<<endl;
                    cout<<"输入ABCD"<<endl;
                    string choose_result;
                    cin>>choose_result;
                    if (choose_result==true_string)
                    {
                        cout<<"正确"<<endl;
                        is_true=true;
                    }
                    else if (choose_result=="-20")
                    {
                        goto end;
                    }
                    else
                    {
                        cout<<"错误"<<endl;
                    }
                    cout<<"=========="<<endl;
                    cout<<"正确答案:"<<true_string<<endl<<need_all<<endl;
                    cout<<"=========="<<endl;
                }
                else if (choose_type=="2")
                {
                    is_true=true;
                    int choose_T=getRand(0,choose_TK.size()-1);
                    int first_choose_time=0;
                    for (const auto i:choose_TK)
                    {
                        if (first_choose_time==choose_T)
                        {}
                        first_choose_time++;
                    }
                }
                else if (choose_type=="3")
                {}
                else
                {
                    goto end;
                }
            }
        }
    }
    end:
    return 0;
}
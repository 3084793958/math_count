#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<math.h>
#include<list>
#include<tuple>
#include<ctype.h>
#define DEBUG_Cout(a) cout<<#a<<":"<<a<<endl
//#define Insert(name,t1,v1,t2,v2) name.insert(map<t1,t2>::value_type(v1,v2))
using namespace std;
static struct Function
{
    string O(string x,float a1,float b1,float c1,float a2,float b2,float c2)
    {
        string way;
        if (a1!=.0f)
        {
            ostringstream a1_char;
            a1_char<<a1;
            way.append(a1_char.str()+x+"^2");
        }
        if (b1!=.0f)
        {
            ostringstream b1_char;
            b1_char<<b1;
            if (a1!=.0f)
            {
                way.append("+");
            }
            way.append(b1_char.str()+x);
        }
        ostringstream c1_char;
        c1_char<<c1;
        if (a1!=.0f||b1!=.0f)
        {
            way.append("+");
        }
        way.append(c1_char.str()+"=");
        if (a2!=.0f)
        {
            ostringstream a2_char;
            a2_char<<a2;
            way.append(a2_char.str()+x+"^2");
        }
        if (b2!=.0f)
        {
            ostringstream b2_char;
            b2_char<<b2;
            if (a2!=.0f)
            {
                way.append("+");
            }
            way.append(b2_char.str()+x);
        }
        ostringstream c2_char;
        c2_char<<c2;
        if (a2!=.0f||b2!=.0f)
        {
            way.append("+");
        }
        way.append(c2_char.str());
        way.append("\n");
        float new_a=a1-a2;
        float new_b=b1-b2;
        float new_c=c1-c2;
        if (new_a!=.0f)
        {
            ostringstream new_a_char;
            new_a_char<<new_a;
            way.append(new_a_char.str()+x+"^2");
        }
        if (new_b!=.0f)
        {
            ostringstream new_b_char;
            new_b_char<<new_b;
            if (new_a!=.0f)
            {
                way.append("+");
            }
            way.append(new_b_char.str()+x);
        }
        ostringstream new_c_char;
        new_c_char<<new_c;
        if (new_a!=.0f||new_b!=.0f)
        {
            way.append("+");
        }
        way.append(new_c_char.str());
        way.append("=0\n");
        if (new_a==.0f&&new_b==.0f&&new_c==.0f)
        {
            way.append("无解");
        }
        else
        {
            float b_3,c_3;
            if (new_a!=.0f&&new_b!=.0f)
            {
            if (new_a!=1.0f)
            {
                b_3=new_b/new_a;
                c_3=new_c/new_a;
            }
            else
            {
                b_3=new_b;
                c_3=new_c;
            }
            ostringstream b_3_char;
            ostringstream c_3_char;
            ostringstream other_c_3_char;
            ostringstream pf_2_char;
            ostringstream pf_3_char;
            b_3_char<<b_3;
            c_3_char<<pow(b_3/2,2);
            pf_2_char<<b_3/2;
            float end_c_3=-c_3+float(pow(b_3/2,2));
            other_c_3_char<<end_c_3;
            way.append(x+"^2+"+b_3_char.str()+"+"+c_3_char.str()+"="+other_c_3_char.str()+"\n");
            way.append("("+x+"+"+pf_2_char.str()+")^2="+other_c_3_char.str()+"\n");
            if (end_c_3<0)
            {
                way.append("无解");
            }
            else
            {
                float end_c_3_pow=float(pow(end_c_3,0.5));
                pf_3_char<<end_c_3_pow;
                float result_fc=end_c_3_pow-b_3/2;
                ostringstream end_result;
                end_result<<result_fc;
                way.append(x+"+"+pf_2_char.str()+"=±"+pf_3_char.str()+"\n");
                way.append(x+"1="+end_result.str()+"\n");
                ostringstream end_result_2;
                end_result_2<<(-end_c_3_pow)-b_3/2;
                way.append(x+"2="+end_result_2.str());
            }
            }
            else if (new_a==.0f&&new_b!=.0f)
            {
                ostringstream b_3_char;
                b_3_char<<new_b;
                ostringstream c_3_char;
                c_3_char<<-new_c;
                way.append(b_3_char.str()+x+"="+c_3_char.str()+"\n");
                ostringstream result_3_char;
                result_3_char<<-new_c/new_b;
                way.append(x+"="+result_3_char.str());
            }
            else if (new_a!=.0f&&new_b==.0f)
            {
                ostringstream a_3_char;
                a_3_char<<new_a;
                ostringstream c_3_char;
                c_3_char<<-new_c;
                way.append(a_3_char.str()+x+"^2="+c_3_char.str()+"\n");
                ostringstream result_c_3_char;
                result_c_3_char<<-new_c/new_a;
                way.append(x+"^2="+result_c_3_char.str()+"\n");
                if (new_c>0)
                {
                    way.append("无解");
                }
                else
                {
                ostringstream result_3_char;
                result_3_char<<pow(-new_c/new_a,0.5);
                ostringstream result_2_3_char;
                result_2_3_char<<-pow(-new_c/new_a,0.5);
                way.append(x+"1="+result_3_char.str()+"\n");
                way.append(x+"2="+result_2_3_char.str());
                }
            }
            else
            {
                way.append("无解");
            }
        }
        return way;
    }
}o;
static struct Re_Build
{
    tuple<bool,string,float,float,float> o(string fc)
    {
        tuple<bool,string,float,float,float> main_map;
        float a=0,b=0,c=0;
        list<string> fc_list;
        int number_of_E=0;
        string x;
        for (int i=0;i<int(fc.size());i++)
        {
            string result=&fc[static_cast<unsigned>(i)];
            if (result.size()!=1)
            {
                if (result.size()>=3)
                {
                    if (result[1]=='^'&&result[2]=='2')
                    {
                        result=result[0];
                        result.append("^2");
                        i+=2;
                    }
                    else
                    {
                        result=result[0];
                    }
                }
                else
                {
                    result=result[0];
                }
                string result_next;
                code:
                    if (i+1<int(fc.size()))
                    {
                    result_next=&fc[static_cast<unsigned>(i+1)];
                    if (result_next.size()!=1)
                    {
                        if (result_next.size()>=3)
                        {
                            if (result_next[1]=='^'&&result_next[2]=='2')
                            {
                                result_next=result_next[0];
                                result_next.append("^2");
                                i+=2;
                            }
                            else
                            {
                                result_next=result_next[0];
                            }
                        }
                        else
                        {
                            result_next=result_next[0];
                        }
                    }
                    }
                if (result_next!="+"&&result_next!="-"&&result_next!="="&&result!="="&&!result_next.empty())
                {
                    result+=result_next;
                    i++;
                    result_next="";
                    goto code;
                }
            }
            fc_list.push_back(result);
            if (result!="=")
            {
                if (x.empty())
                {
                    x=result;
                    bool found_x=false;
                    for (int i=0;i<int(x.size());i++)
                    {
                        string result_of_x_doing;
                        result_of_x_doing=x[static_cast<unsigned>(i)];
                        if (isdigit(x[static_cast<unsigned>(i)]))
                        {}
                        else
                        {
                            if (result_of_x_doing!="^"&&result_of_x_doing!="."&&result_of_x_doing!="+"&&result_of_x_doing!="-")
                            {
                                x=result_of_x_doing;
                                found_x=true;
                            }
                        }
                    }
                    if (!found_x)
                    {
                        x="";
                    }
                }
            }
            else
            {
                number_of_E+=1;
            }
        }
        if (number_of_E==1)
        {
            bool pass_E=false;
            for (auto const &i:fc_list)
            {
                int x_number=0;
                bool main_type=false;
                if (i=="=")
                {
                    pass_E=true;
                }
                for (int j=0;j<int(i.size());j++)
                {
                    string k;
                    string bl_name;
                    k=i[static_cast<unsigned>(j)];
                    if (k==x)
                    {
                        main_type=true;
                        x_number+=1;
                        if (int(i.size())>j+2)
                        {
                            if (i[static_cast<unsigned>(j+1)]=='^'&&i[static_cast<unsigned>(j+2)]=='2')
                            {
                                bl_name=x+"^2";
                                string a_string=i;
                                a_string.erase(static_cast<unsigned>(j));
                                int new_a;
                                if (a_string=="+")
                                {
                                    new_a=1;
                                }
                                else if (a_string=="-")
                                {
                                    new_a=-1;
                                }
                                else if (a_string.empty())
                                {
                                    new_a=1;
                                }
                                else
                                {
                                    istringstream iss(a_string);
                                    iss>>new_a;
                                }
                                if (pass_E)
                                {
                                    a-=new_a;
                                }
                                else
                                {
                                    a+=new_a;
                                }
                            }
                        }
                        else
                        {
                            bl_name=x;
                            string b_string=i;
                            b_string.erase(static_cast<unsigned>(j));
                            int new_b;
                            if (b_string=="+")
                            {
                                new_b=1;
                            }
                            else if (b_string=="-")
                            {
                                new_b=-1;
                            }
                            else if (b_string.empty())
                            {
                                new_b=1;
                            }
                            else
                            {
                                istringstream iss(b_string);
                                iss>>new_b;
                            }
                            if (pass_E)
                            {
                                b-=new_b;
                            }
                            else
                            {
                                b+=new_b;
                            }
                        }
                    }
                }
                if (!main_type&&i!="=")
                {
                    string c_string=i;
                    int new_c;
                    istringstream iss(c_string);
                    iss>>new_c;
                    if (pass_E)
                    {
                        c-=new_c;
                    }
                    else
                    {
                        c+=new_c;
                    }
                }
                if (x_number>1)
                {
                    cout<<"end"<<endl;
                    main_map=make_tuple(false,"None",0,0,0);
                }
            }
            main_map=make_tuple(true,x,a,b,c);
        }
        else
        {
            cout<<"end"<<endl;
            main_map=make_tuple(false,"None",0,0,0);
        }
        return main_map;
    }
}O;
int main()
{
    string fc;
    cout<<"方程:";
    cin>>fc;
    tuple<bool,string,float,float,float> map_main=O.o(fc);
    bool Can_Use;
    float a,b,c;
    string x;
    tie(Can_Use,x,a,b,c)=map_main;
    if(Can_Use)
    {
        cout<<o.O(x,a,b,c,0,0,0)<<endl;
    }
}

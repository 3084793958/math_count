#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<math.h>
using namespace std;
struct Function
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
int main()
{
    cout<<"a1*x^2 + b1*x+ c1 = a2*x^2 + b2*x + c2"<<endl;
    string x;
    float a1,b1,c1,a2,b2,c2;
    cout<<"x(string)";
    cin>>x;
    cout<<"a1(float)";
    cin>>a1;
    cout<<"b1(float)";
    cin>>b1;
    cout<<"c1(float)";
    cin>>c1;
    cout<<"a2(float)";
    cin>>a2;
    cout<<"b2(float)";
    cin>>b2;
    cout<<"c2(float)";
    cin>>c2;
    cout<<"===================="<<endl;
    cout<<o.O(x,a1,b1,c1,a2,b2,c2)<<endl;
    cout<<"===================="<<endl;
}

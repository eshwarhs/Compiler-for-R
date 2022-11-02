// ARM instruction set architechture
// <OP DST,S1,S2>
// Operations are:
// ADD
// SUB
// MUL
// UDIV
// AND
// ORR

// Loading and moving operations:
 
// MOV DST,SRC
// LDR DST,SRC
// STR DST,SRC

// Unconditional branch:
// B <target label>

// Conditional branch:
// B<cond> <target label>

// Conditions are:
// GE >=
// GT >
// LE <=
// LT <
// EQ ==
// NE !=

// No of registers:16

#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<fstream>
#include<iterator>
#include<map> 
#include<algorithm>
using namespace std; 

map<string,vector<int>> parameter;
map<string,vector<int>> resultparam;
vector<int> available_reg;

int total_reg=16;
map<string,string> addr_desc;
map<string,string> reg_desc;
map<string,int> garr;

bool is_digits(string str)
{
    return all_of(str.begin(), str.end(), ::isdigit);
}


void param_insert(string variable, int lineno)
{
	// add variable with lineno into both dict 
	if(variable!="NULL")
	{
		if(parameter.find(variable) == parameter.end())
		{
			vector<int> temp;
			parameter.insert({variable,temp});
		}
		parameter[variable].push_back(lineno);
		if(resultparam.find(variable) == resultparam.end())
		{
			vector<int> temp;
			resultparam.insert({variable,temp});
		}
		resultparam[variable].push_back(lineno);
	}
}

void result_insert(string variable, int lineno)
{
	// add variable with lineno into resultparam only.put empty list in param 
	if(variable!="NULL")
	{
		if(resultparam.find(variable) == resultparam.end())
		{
			vector<int> temp;
			resultparam.insert({variable,temp});
		}
		resultparam[variable].push_back(lineno);
		if(parameter.find(variable) == parameter.end())
		{
			vector<int> temp;
			parameter.insert({variable,temp});
		}
	}
}

void remove_param(string p, int lineno)
{
	// remove p in both dict
	parameter[p].erase(remove(parameter[p].begin(), parameter[p].end(), lineno), parameter[p].end());
	resultparam[p].erase(remove(resultparam[p].begin(), resultparam[p].end(), lineno), resultparam[p].end());

	// if after removing size is 0 then store 
	if(resultparam[p].size()==0 && !(is_digits(p)))
	{
		string temp=addr_desc[p];
		char ch=p[0];
		if(ch!='T')
		{
			if(garr[p]==1)
				cout<<"\tSTR "<<p<<" "<<temp<<endl;
		}
		string tempreg=addr_desc[p];
		addr_desc.erase(p);
		reg_desc.erase(tempreg);
		available_reg.insert(available_reg.begin(),stoi(tempreg.substr(1)));
		sort(available_reg.begin(),available_reg.end());
	}
}

void remove_result(string p, int lineno)
{
// remove only in result param
	resultparam[p].erase(remove(resultparam[p].begin(), resultparam[p].end(), lineno), resultparam[p].end());
// if size=0 after removing then store
	if(resultparam[p].size()==0 && !(is_digits(p)))
	{
		string temp=addr_desc[p];
		char ch=p[0];
		if(ch!='T')
		{
			cout<<"\tSTR "<<p<<" "<<temp<<endl;
		}
		string tempreg=addr_desc[p];
		addr_desc.erase(p);
		reg_desc.erase(tempreg);
		available_reg.insert(available_reg.begin(),stoi(tempreg.substr(1)));
		sort(available_reg.begin(),available_reg.end());
	}
}

void free_reg()
{
	vector<string> y;
	for (auto itr = addr_desc.begin(); itr != addr_desc.end(); ++itr)
	{
		if(!is_digits(itr->first))
		{
			y.push_back(itr->first);
		}
	}
	for(int i=0;i<y.size();i++)
	{
		string temp = addr_desc[y[i]];
		int x = garr[y[i]];
		if(x==1)
			cout<<"\tSTR "<<y[i]<<" "<<temp<<endl;
	}
	addr_desc.clear();
	reg_desc.clear();
	available_reg.clear();
	int i=1;
	while(i<=16)
	{
		available_reg.push_back(i);
		i++;
	}
}

string getreg(string val, int flag_to_load, int flag_to_imm)
{
// flagtoimm=if its true you can return immediate value or register
//	if false rerturn only register
// flagtoload=if true you have to load	
	if(flag_to_imm==1)
	{
		if(is_digits(val))
			return ("#"+val);
		else
		{
			if(addr_desc.find(val) == addr_desc.end())
			{
				if(available_reg.size()==0)
				{
					string b=addr_desc.begin()->first;
					string c=addr_desc[b];
					cout<<"\tSTR "<<b<<" "<<c<<endl;
					addr_desc.erase(b);
					reg_desc.erase(c);
					available_reg.insert(available_reg.begin(),stoi(c.substr(1)));
				}
				int a_reg=available_reg.at(0);
				string assgn_reg = "R"+to_string(a_reg);
				available_reg.erase(available_reg.begin());
				addr_desc[val]=assgn_reg;
				reg_desc[assgn_reg]=val;
				if(flag_to_load)
				{
					cout<<"\tLDR "<<assgn_reg<<" "<<val<<endl;
				}
				return assgn_reg;
			}
			else
				return addr_desc[val];
		}
	}
	else
	{
		if(is_digits(val))
		{
			if(addr_desc.find(val) == addr_desc.end())
			{
				if(available_reg.size()==0)
				{
					string b=addr_desc.begin()->first;
					string c=addr_desc[b];
					cout<<"\tSTR "<<b<<" "<<c<<endl;
					addr_desc.erase(b);
					reg_desc.erase(c);
					available_reg.insert(available_reg.begin(),stoi(c.substr(1)));
				}
				int a_reg=available_reg.at(0);
				string assgn_reg = "R"+to_string(a_reg);
				available_reg.erase(available_reg.begin());
				addr_desc[val]=assgn_reg;
				reg_desc[assgn_reg]=val;
				cout<<"\tMOV "<<assgn_reg<<" #"<<val<<endl;
				return assgn_reg;
			}
			else
				return addr_desc[val];
		}
		else
		{
			if(addr_desc.find(val) == addr_desc.end())
			{
				if(available_reg.size()==0)
				{
					string b=addr_desc.begin()->first;
					string c=addr_desc[b];
					cout<<"\tSTR "<<b<<" "<<c<<endl;
					addr_desc.erase(b);
					reg_desc.erase(c);
					available_reg.insert(available_reg.begin(),stoi(c.substr(1)));
				}
				int a_reg=available_reg.at(0);
				string assgn_reg = "R"+to_string(a_reg);
				available_reg.erase(available_reg.begin());
				addr_desc[val]=assgn_reg;
				reg_desc[assgn_reg]=val;
				if(flag_to_load)
				{
					cout<<"\tLDR "<<assgn_reg<<" "<<val<<endl;
				}
				return assgn_reg;
			}
			else
				return addr_desc[val];
		}
	}
}

int main()
{
	// cout<<"Hello"<<endl;
	vector<vector<string>> q;
	ifstream fin;
	fin.open("quad.txt");
	string line;
	while(getline(fin, line))
	{
		istringstream iss(line);
		vector<string> result(istream_iterator<string>{iss},istream_iterator<string>());
	    q.push_back(result);
	}
	fin.close();
	int h=stoi(q[0][0]);
	int p=h;
	q.erase(q.begin());
	int i=1;
	while(i<=16)
	{
		available_reg.push_back(i);
		i++;
	}
	for(int i=0;i<p;i++)
	{
		char ch=q[i][2][0];
		if(q[i][1]=="not" && ch=='T')
			q[i-1][0]=q[i+1][0];
		else if(q[i][1]=="not")
			q[i+1][2]=q[i][2];
	}
	vector<int> lines_to_remove;
	for(int i=0;i<p;i++)
	{
		char ch=q[i][2][0];
		if(q[i][1]=="not" && ch=='T')
		{	
			lines_to_remove.push_back(i);
			lines_to_remove.push_back(i+1);
		}
		else if(q[i][1]=="not")
			lines_to_remove.push_back(i);
	}
	p=p-lines_to_remove.size();
    int w=0;
    for(int i=0;i<lines_to_remove.size();i++)
    {
    	lines_to_remove[i]=lines_to_remove[i]-w;
    	w=w+1;
    }
    for(int i=0;i<lines_to_remove.size();i++)
    {
    	q.erase(q.begin()+lines_to_remove[i]);
    }

    for(int i=0;i<p;i++)
    {
    	if(q[i][1]=="Label")
    		continue;
    	else if(q[i][1]=="if")
    		param_insert(q[i][2],i);
    	else if(q[i][1]=="goto")
    		continue;
    	else if(q[i][1]=="<")
    	{
    		param_insert(q[i][2],i);
			param_insert(q[i][3],i);
    	}
    	else if(q[i][1]=="<=")
    	{
    		param_insert(q[i][2],i);
			param_insert(q[i][3],i);
    	}
    	else if(q[i][1]==">")
    	{
    		param_insert(q[i][2],i);
			param_insert(q[i][3],i);
    	}
    	else if(q[i][1]==">=")
    	{
    		param_insert(q[i][2],i);
			param_insert(q[i][3],i);
    	}
    	else if(q[i][1]=="!=")
    	{
    		param_insert(q[i][2],i);
			param_insert(q[i][3],i);
    	}
    	else if(q[i][1]=="==")
    	{
    		param_insert(q[i][2],i);
			param_insert(q[i][3],i);
    	}
    	else if(q[i][1]=="=")
    	{
    		param_insert(q[i][2],i);
			result_insert(q[i][0],i);
    	}
    	else
    	{
    		param_insert(q[i][2],i);
			param_insert(q[i][3],i);
			result_insert(q[i][0],i);
    	}
    }
    /*map<string, vector <int>>::iterator itr;
    for (itr = parameter.begin(); itr != parameter.end(); ++itr)
     { 
        cout << itr->first << endl;
        vector <int> xx=itr->second;
        for (auto i = xx.begin(); i != xx.end(); ++i) 
        	cout << *i << " "; 
        cout<<endl;
    }
    cout<<"\n\n"<<endl;

    map<string, vector <int>>::iterator itr1;
    for (itr1 = resultparam.begin(); itr1 != resultparam.end(); ++itr1)
     { 
        cout << itr1->first << endl;
        vector <int> xx1=itr1->second;
        for (auto i = xx1.begin(); i != xx1.end(); ++i) 
        	cout << *i << " "; 
        cout<<endl;
    }*/
    for(auto itr=parameter.begin(); itr!=parameter.end();++itr)
    {
    	//garr holds if variable is part of lhs(1) or rhs(0)
    	string t=itr->first;
    	if(resultparam[t].size()>parameter[t].size())
    		garr[t]=1;
    	else
    		garr[t]=0;
    }

    cout<<"The Assembly Code generated is---\n\nstart:"<<endl;
    for(int i=0;i<p;i++)
    {
    	if(q[i][1]=="Label")
    	{
    		free_reg();
    		cout<<q[i][0]<<":"<<endl;
    	}
    	else if(q[i][1]=="goto")
    	{
    		free_reg();
    		cout<<"\tB "<<q[i][0]<<endl;
    	}
    	else if(q[i][1]=="if")
    	{
//(val,load the variable,send immediate or register)
    		string p1=getreg(q[i][2],1,1);
    		free_reg();
    		cout<<"\tCMP "<<p1<<" #0"<<endl;
    		cout<<"\tBEQ "<<q[i][0]<<endl;
    		parameter[q[i][2]].erase(remove(parameter[q[i][2]].begin(), parameter[q[i][2]].end(), i), parameter[q[i][2]].end());
    		resultparam[q[i][2]].erase(remove(resultparam[q[i][2]].begin(), resultparam[q[i][2]].end(), i), resultparam[q[i][2]].end());
    	}
    	else if(q[i][1]=="<")
    	{
//(val,load the variable,send only register)
			string p1=getreg(q[i][2],1,0);
//(val,load the variable,send imm or register)
			string p2=getreg(q[i][3],1,1);
			free_reg();
			cout<<"\tCMP "<<p1<<" "<<p2<<endl;
			cout<<"\tBGE "<<q[i][0]<<endl;
			parameter[q[i][2]].erase(remove(parameter[q[i][2]].begin(), parameter[q[i][2]].end(), i), parameter[q[i][2]].end());
			parameter[q[i][3]].erase(remove(parameter[q[i][3]].begin(), parameter[q[i][3]].end(), i), parameter[q[i][3]].end());
			resultparam[q[i][2]].erase(remove(resultparam[q[i][2]].begin(), resultparam[q[i][2]].end(), i), resultparam[q[i][2]].end());
			resultparam[q[i][3]].erase(remove(resultparam[q[i][3]].begin(), resultparam[q[i][3]].end(), i), resultparam[q[i][3]].end());
    	}
    	else if(q[i][1]==">")
    	{
			string p1=getreg(q[i][2],1,0);
			string p2=getreg(q[i][3],1,1);
			free_reg();
			cout<<"\tCMP "<<p1<<" "<<p2<<endl;
			cout<<"\tBLE "<<q[i][0]<<endl;
			parameter[q[i][2]].erase(remove(parameter[q[i][2]].begin(), parameter[q[i][2]].end(), i), parameter[q[i][2]].end());
			parameter[q[i][3]].erase(remove(parameter[q[i][3]].begin(), parameter[q[i][3]].end(), i), parameter[q[i][3]].end());
			resultparam[q[i][2]].erase(remove(resultparam[q[i][2]].begin(), resultparam[q[i][2]].end(), i), resultparam[q[i][2]].end());
			resultparam[q[i][3]].erase(remove(resultparam[q[i][3]].begin(), resultparam[q[i][3]].end(), i), resultparam[q[i][3]].end());
    	}
    	else if(q[i][1]=="<=")
    	{
			string p1=getreg(q[i][2],1,0);
			string p2=getreg(q[i][3],1,1);
			free_reg();
			cout<<"\tCMP "<<p1<<" "<<p2<<endl;
			cout<<"\tBGT "<<q[i][0]<<endl;
			parameter[q[i][2]].erase(remove(parameter[q[i][2]].begin(), parameter[q[i][2]].end(), i), parameter[q[i][2]].end());
			parameter[q[i][3]].erase(remove(parameter[q[i][3]].begin(), parameter[q[i][3]].end(), i), parameter[q[i][3]].end());
			resultparam[q[i][2]].erase(remove(resultparam[q[i][2]].begin(), resultparam[q[i][2]].end(), i), resultparam[q[i][2]].end());
			resultparam[q[i][3]].erase(remove(resultparam[q[i][3]].begin(), resultparam[q[i][3]].end(), i), resultparam[q[i][3]].end());
    	}
    	else if(q[i][1]==">=")
    	{
			string p1=getreg(q[i][2],1,0);
			string p2=getreg(q[i][3],1,1);
			free_reg();
			cout<<"\tCMP "<<p1<<" "<<p2<<endl;
			cout<<"\tBLT "<<q[i][0]<<endl;
			parameter[q[i][2]].erase(remove(parameter[q[i][2]].begin(), parameter[q[i][2]].end(), i), parameter[q[i][2]].end());
			parameter[q[i][3]].erase(remove(parameter[q[i][3]].begin(), parameter[q[i][3]].end(), i), parameter[q[i][3]].end());
			resultparam[q[i][2]].erase(remove(resultparam[q[i][2]].begin(), resultparam[q[i][2]].end(), i), resultparam[q[i][2]].end());
			resultparam[q[i][3]].erase(remove(resultparam[q[i][3]].begin(), resultparam[q[i][3]].end(), i), resultparam[q[i][3]].end());
    	}
    	else if(q[i][1]=="==")
    	{
			string p1=getreg(q[i][2],1,0);
			string p2=getreg(q[i][3],1,1);
			free_reg();
			cout<<"\tCMP "<<p1<<" "<<p2<<endl;
			cout<<"\tBNE "<<q[i][0]<<endl;
			parameter[q[i][2]].erase(remove(parameter[q[i][2]].begin(), parameter[q[i][2]].end(), i), parameter[q[i][2]].end());
			parameter[q[i][3]].erase(remove(parameter[q[i][3]].begin(), parameter[q[i][3]].end(), i), parameter[q[i][3]].end());
			resultparam[q[i][2]].erase(remove(resultparam[q[i][2]].begin(), resultparam[q[i][2]].end(), i), resultparam[q[i][2]].end());
			resultparam[q[i][3]].erase(remove(resultparam[q[i][3]].begin(), resultparam[q[i][3]].end(), i), resultparam[q[i][3]].end());
    	}
    	else if(q[i][1]=="!=")
    	{
			string p1=getreg(q[i][2],1,0);
			string p2=getreg(q[i][3],1,1);
			free_reg();
			cout<<"\tCMP "<<p1<<" "<<p2<<endl;
			cout<<"\tBEQ "<<q[i][0]<<endl;
			parameter[q[i][2]].erase(remove(parameter[q[i][2]].begin(), parameter[q[i][2]].end(), i), parameter[q[i][2]].end());
			parameter[q[i][3]].erase(remove(parameter[q[i][3]].begin(), parameter[q[i][3]].end(), i), parameter[q[i][3]].end());
			resultparam[q[i][2]].erase(remove(resultparam[q[i][2]].begin(), resultparam[q[i][2]].end(), i), resultparam[q[i][2]].end());
			resultparam[q[i][3]].erase(remove(resultparam[q[i][3]].begin(), resultparam[q[i][3]].end(), i), resultparam[q[i][3]].end());
    	}
    	else if(q[i][1]=="+")
    	{
//(val,load the variable,send only register)
    		string p1=getreg(q[i][2],1,0);
//(val,load the variable,send imm or reg)
			string p2=getreg(q[i][3],1,1);
			remove_param(q[i][2],i);
			remove_param(q[i][3],i);
//(val,DON'T load the variable,send only register)
			string res=getreg(q[i][0],0,0);
			cout<<"\tADD "<<res<<" "<<p1<<" "<<p2<<endl;
			remove_result(q[i][0],i);
    	}
    	else if(q[i][1]=="-")
    	{
    		string p1=getreg(q[i][2],1,0);
			string p2=getreg(q[i][3],1,1);
			remove_param(q[i][2],i);
			remove_param(q[i][3],i);
			string res=getreg(q[i][0],0,0);
			cout<<"\tSUB "<<res<<" "<<p1<<" "<<p2<<endl;
			remove_result(q[i][0],i);
    	}
    	else if(q[i][1]=="*")
    	{
    		string p1=getreg(q[i][2],1,0);
			string p2=getreg(q[i][3],1,0);
			remove_param(q[i][2],i);
			remove_param(q[i][3],i);
			string res=getreg(q[i][0],0,0);
			cout<<"\tMUL "<<res<<" "<<p1<<" "<<p2<<endl;
			remove_result(q[i][0],i);
    	}
    	else if(q[i][1]=="/")
    	{
    		string p1=getreg(q[i][2],1,0);
			string p2=getreg(q[i][3],1,0);
			remove_param(q[i][2],i);
			remove_param(q[i][3],i);
			string res=getreg(q[i][0],0,0);
			cout<<"\tUDIV "<<res<<" "<<p1<<" "<<p2<<endl;
			remove_result(q[i][0],i);
    	}
    	else if(q[i][1]=="&&")
    	{
    		string p1=getreg(q[i][2],1,0);
			string p2=getreg(q[i][3],1,1);
			remove_param(q[i][2],i);
			remove_param(q[i][3],i);
			string res=getreg(q[i][0],0,0);
			cout<<"\tAND "<<res<<" "<<p1<<" "<<p2<<endl;
			remove_result(q[i][0],i);
    	}
    	else if(q[i][1]=="||")
    	{
    		string p1=getreg(q[i][2],1,0);
			string p2=getreg(q[i][3],1,1);
			remove_param(q[i][2],i);
			remove_param(q[i][3],i);
			string res=getreg(q[i][0],0,0);
			cout<<"\tORR "<<res<<" "<<p1<<" "<<p2<<endl;
			remove_result(q[i][0],i);
    	}
    	else if(q[i][1]=="=")
    	{

			string p1=getreg(q[i][2],1,1);
			remove_param(q[i][2],i);
			string res=getreg(q[i][0],0,0);
			if(res!=p1)
				cout<<"\tMOV "<<res<<" "<<p1<<endl;
			remove_result(q[i][0],i);
    	}

    }
	return 0;
}

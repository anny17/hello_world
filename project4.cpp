#include<iostream>
using namespace std;
	int a,b,d,f,l=0,r;
class welcome
{
	public:
	void welcome1(void)
	{
		cout<<"\t\t\t\tWELCOME TO LOVELY PROFESSIONAL UNIVERSITY(scholarship calculator...)\n\n\n";
	}
	void mode(void)
{
	cout<<"\t\t\t\tEnter the percentage marks of LPUNEST & Passing Board\n";
	cin>>d>>f;
	if(d>f)
	{
		l=1;
	}else if(f>d)
	{
		l=2;
	}else
	{
		l=3;
	}
}
void sch(int z)
		
		{
			switch(z)
			{
			
				case 1:
						cout<<"\nYou are eligible for greater scholarship with LPUNEST marks\n\n\n";
						if(d>90)
						{
							cout<<"\t\t\t\tYou are elligible for scholarship of INR 75000/- per semester";
						}else if(d>80&&d<=90)
						{
							cout<<"\t\t\t\tYou are elligible for scholarship of INR 50000/- per semester";
						}else if(d>65&&d<80)
						{
							cout<<"\t\t\t\tYou are elligible for scholarship of INR 30000/- per semester";
						}else if(d>45&&d<65)
						{
							cout<<"\t\t\t\tYou are elligible for admission without scholarship";
						}else
						{
							cout<<"\t\t\t\tYou are not elligible for admission";
						}
					break;
					
				case 2:
					cout<<"\nYou are eligible for greater scholarship with Pssing Board marks\n\n\n";
						
						if(f>98)
						{
							cout<<"\t\t\t\tYou are elligible for scholarship of INR 75000/- per semester";
						}else if(f>=90&&d<=98)
						{
							cout<<"\t\t\t\tYou are elligible for scholership of INR 50000/- per semester";
						}else if(f>=80&&d<90)
						{
							cout<<"\t\t\t\tYou are elligible for scholership of INR 40000/- per semester";
						}else if(f>70&&d<80)
						{
							cout<<"\t\t\t\tYou are elligible for scholership of INR 30000/- per semester";
						}else
						{
							cout<<"\t\t\t\tYou are not elligible for any scholership";
						}
					break;
				case 3:
						cout<<"\t\t\t\tYou are getting the same ammount of scholership from both the marks";
							if(d>98)
						{
							cout<<"\t\t\t\tYou are elligible for scholarship of INR 75000/- per semester";
						}else if(d>=90&&d<=98)
						{
							cout<<"\t\t\t\tYou are elligible for scholership of INR 50000/- per semester";
						}else if(d>=80&&d<90)
						{
							cout<<"\t\t\t\tYou are elligible for scholership of INR 40000/- per semester";
						}else if(d>70&&d<80)
						{
							cout<<"\t\t\t\tYou are elligible for scholership of INR 30000/- per semester";
						}else
						{
							cout<<"\t\t\t\tYou are not elligible for any scholership";
						}
					break;
				default:
				cout<<"Enter a valid one...!!!";
			}
			
		}
};
class stream
{
	public:

	stream()
	{
			cout<<"\t\t\tFIND YOUR INTERESTED STEAM(chose by their s.n.)\n\n\n";
			cout<<"1.ENGINEERING\n2.FASHION DESIGN\n3.MANAGEMENT\n4.ECONOMICS\n5.LAW\n\n";
			cin>>a;
	}
	
	
};
class engineering:public welcome
{
	public:
		
	void eng(void)
	{
		cout<<"\t\t\tWelcome to the world of Engineering\n\n\n";
		cout<<"\t\t\tCHOSE YOUR BRANCH OF ENGINEERING(by s.n.).....\n\n\n1.     Electronics and Communications Engineering (ECE) \n2.     Computer Science and Engineering (CSE)\n3.     Mechanical Engineering (ME)\n4.     Civil Engineering (CE)\n5.     Aerospace Engineering\n";
		cin>>b;
		eng1(b);
	}
	void eng1(int y)
	{
		switch(y)
		{
			case 1:
				mode();
				sch(l);
				break;
			case 2:
				mode();
				sch(l);
				break;
			case 3:
				mode();
				sch(l);
				break;
			case 4:
				mode();
				sch(l);
				break;
			case 5:
				mode();
				sch(l);
				break;
			default:
				cout<<"Enter a valid one...!!!";
		}
	}
};
class fashion:public welcome
{
	public:
	void fas(void)
	{
		cout<<"\t\t\tWelcome to the world of Fashion \n\n\n\t\t\t\tChose the branch (by sr.no.)\n";
		cout<<"1.     B.SC.(design fashion)\n2.     B.DESIGN(fashion)\n";
		cin>>b;
		fas1(b);
	}
	void fas1(int y)
	{
		switch(y)
		{
			case 1:
				mode();
				sch(l);
				break;
			case 2:
				mode();
				sch(l);
				break;
			default:
				cout<<"Enter a valid one...!!!";
		}
	}
};
class management:public welcome
{
	public:
		
	void man(void)
	{
		cout<<"\t\t\tWelcome to world of Management\n\n\n\t\t\t\tChose the branch (by sr.no.)\n";
		cout<<"1.     DUAL DEGREE(BBA+MBA)\n2.     BBA\n3.     BBA(HONS.)\n4.     BBA(INFORMATION TECHNOLOGY)\n";
		cin>>b;
		man1(b);
	}
	void man1(int y)
	{
		switch(y)
		{
			case 1:
				mode();
				sch(l);
				break;
			case 2:
				mode();
				sch(l);
				break;
			case 3:
				mode();
				sch(l);
				break;
			case 4:
				mode();
				sch(l);
				break;
			default:
				cout<<"Enter a valid one...!!!";
		}
	}
};
class economics:public welcome
{
	public:
	void eco(void)
	{
		cout<<"\t\t\tWelcome to world of Economics \n\n\n\t\t\t\tChose the branch (by sr.no.)\n";
		cout<<"1.     B.SC.(hons.)ECONOMICS\n2.     B.integrated BSC-MSC(economics)\n";
		cin>>b;
		eco1(b);
	}
	void eco1(int y)
	{
		switch(y)
		{
			case 1:
				mode();
				sch(l);
				break;
			case 2:
				mode();
				sch(l);
				break;
			default:
				cout<<"Enter a valid one...!!!";
		}
	}
};
class law:public welcome
{
	public:
	void laa(void)
	{
		cout<<"\t\t\tWelcome to the world of LAW\n\n\n\t\t\t\tChose the branch (by sr.no.)\n";
		cout<<"1.     B.A,LL.B.(Hons.)\n2.     B.COM.,LL.B.(Hons.)\n3.     BBA,LL.B. (Hons.)\n";
		cin>>b;
		laa1(b);
	}
	void laa1(int y)
	{
		switch(y)
		{
			case 1:
				mode();
				sch(l);
				break;
			case 2:
				mode();
				sch(l);
				break;
			case 3:
				mode();
				sch(l);
				break;
			default:
				cout<<"Enter a valid one...!!!";
		}
	}
};
class cource:public engineering,public fashion,public management,public economics,public law
{
	public:
	void cource1(int x)
	{
		switch(x)
		{
			case 1:
				eng();
				break;
			case 2:
				fas();
				break;
			case 3:
				man();
				break;
			case 4:
				eco();
				break;
			case 5:
				laa();
				break;
			default:
				cout<<"Enter a valid one...!!!";
				
		}
		
	}
	
};
int main()
{
	welcome W;
lable:	W.welcome1();
		stream S;
		cource C;
		C.cource1(a);
				cout<<"\n\t>>If you are having any extra achivement in sports or in any other department you will be awarded by scholarship for that after their varification";
				cout<<"\n\Eenter 1 to reuse the program and 0 to exit";
				cin>>r;
				if(r==1)
				{
					goto lable;
				}
	return 0;
}

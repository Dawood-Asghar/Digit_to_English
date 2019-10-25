//convert the input number into the letters
#include<iostream>
#include<string>
using namespace std;


//Add a string
string AddString(string str, string add)
{
	
	string s="";
/*	s+=add;
	s+=" ";
	s+=str;*/
	for(int i=0;add[i]!='\0';i++)
	{
		s+=add[i];
	}
		s+=" ";
	for(int i=0;str[i]!='\0';i++)
	{
		s+=str[i];
	}
	return s;
	
}

//Convert the hundredth terms into the corresponding letters
string HunderedDigitToLetter(string str, int num)
{
	int r;
	r=num%10;
	if(r!=0)
	{
		str = addString( str,  "Hundred");
		
				if (r == 1)
					str= AddString(str , "One");
		
				else if (r == 2)
					str= AddString(str , "Two");
				
				else if (r == 3)
					str= AddString(str , "Three");
				
				else if (r == 4)
					str= AddString(str , "Four");
					
				else if (r == 5)
					str= AddString(str , "Five");
					
				else if (r == 6)
					str= AddString(str , "Six");
					
				else if (r == 6)
					str= AddString(str , "Seven");
					
				else if (r == 7)
					str= AddString(str , "Eight");
					
				else if (r == 8)
					str= AddString(str , "Nine");
	
			}
		}
		return str;
}

//Convert the ones term into corresponding letters
string onesDigToLetter(string str, int num)
{
	int r;
		r=num%10;
		if((num/10)%10==1)
		{
				switch (r)
			{
				case 0:
					str= AddString(str , "Ten");
					break;
					
				case 1:
					str= AddString(str , "Eleven");
					break;
				case 2:
					str= AddString(str , "Twelve");
					break;
				case 3:
					str= AddString(str , "Thirteen");
					break;
				case 4:
					str= AddString(str , "Fourteen");
					break;
				case 5:
					str= AddString(str , "Fifteen");
					break;
				case 6:
					str= AddString(str , "Sixteen");
					break;
				case 7:
					str= AddString(str , "Seventeen");
					break;
				case 8:
					str= AddString(str , "Eighteen");
					break;
				case 9:
					str= AddString(str , "Nineteen");
					break;
				default:
					break;
			}
		}
		else
		{
		
			switch (r)
			{	
				case 1:
					str= AddString(str , "One");
					break;
				case 2:
					str= AddString(str , "Two");
					break;
				case 3:
					str= AddString(str , "Three");
					break;
				case 4:
					str= AddString(str , "Four");
					break;
				case 5:
					str= AddString(str , "Five");
					break;
				case 6:
					str= AddString(str , "Six");
					break;
				case 7:
					str= AddString(str , "Seven");
					break;
				case 8:
					str= AddString(str , "Eight");
					break;
				case 9:
					str= AddString(str , "Nine");
					break;
				default:
					break;
			}
		}
			return str;
				
}

//Convert the tens term into corresponding letters
string tensDigToLetter(string str, int num)
{
	int r;
			r=num%10;
				switch (r)
				{
				case 2:
					str= AddString(str , "Twenty");
					break;
				case 3:
					str= AddString(str , "Thirty");
					break;
				case 4:
					str= AddString(str , "Forty");
					break;
				case 5:
					str= AddString(str , "Fifty");
					break;
				case 6:
					str= AddString(str , "Sixty");
					break;
				case 7:
					str= AddString(str , "Seventy");
					break;
				case 8:
					str= AddString(str , "Eighty");
					break;
				case 9:
					str= AddString(str , "Ninety");
					break;
				default:
					break;
				}
			return str;
}

int main ()
{
	long long num ;
	string str="";
	cout<<"Enter the number to convert it into English but the number must be less than 1 billion:\n";
	cin>>num;
	if(num<1000000000)  //convert numbers less than 1 billion
	{
	
	//	cout<<num;
	for(int i=0;num!=0;i++)
	{			

		if(i==0)
		{
			str = onesDigToLetter( str, num);
		}
	
			if(i==1)
			{
				str = tensDigToLetter( str, num);
			}
			
				if(i==2)
				{	
					if(num%10!=0)	
					{
							
						str = HunderedDigitToLetter( str, num);
					}
				}
			
					if(i==3)
					{
						if(num%1000!=0)
						{						
							str = addString( str,  "Thousand");
							for(i;num!=0 && i<=5;i++)
							{		

								if(i==3)
								{
									str = onesDigToLetter( str, num);
								}
								if(i==4)
								{
									str = tensDigToLetter( str, num);
								}
								if(i==5)
								{
									str = HunderedDigitToLetter( str, num);						
								}
								num=num/10;
							}
						}
					}
					
						if(i==6)
						{
							if(num%1000!=0)
							{
							
							str = addString( str,  "Million");
							for(i;num!=0 && i<=8;i++)
							{			

								if(i==6)
								{
									str = onesDigToLetter( str, num);
								}
								if(i==7)
								{
									str = tensDigToLetter( str, num);
								}
								if(i==8)
								{
									str = HunderedDigitToLetter( str, num);								
								}
								num=num/10;
							}
							
							}
						}
						
							if(i==9)
							{
								if(num%1000!=0)
								{
								
								str = addString( str,  "Billion");
								for(i;num!=0 && i<=11;i++)
								{			

									if(i==9)
									{
										str = onesDigToLetter( str, num);
									}
									if(i==10)
									{
										str = tensDigToLetter( str, num);
									}
									if(i==11)
									{
										str = HunderedDigitToLetter( str, num);								
									}
									num=num/10;
								}
								
								}
							}
								
									if(i==12)
									{
										
										str = addString( str,  "Trillion");
										for(i;num!=0 && i<=14;i++)
										{		

											if(i==12)
											{
												str = onesDigToLetter( str, num);
											}
											if(i==13)
											{
												str = tensDigToLetter( str, num);
											}
											if(i==14)
											{
												str = HunderedDigitToLetter( str, num);											
											}
											num=num/10;
										}
										
									}
								
							
						
					
				
			
		
		num=num/10;
	}
	cout<<endl<<str;
	}
	else
		cout<<"Your number is greater than 1 billion.\n";
	return 0;
}

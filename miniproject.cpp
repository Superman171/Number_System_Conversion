#include<iostream>
#include<cstring>
#include<algorithm>
#include<math.h>
#include<windows.h>
using namespace std;

//Decimal to Binary
string dectobin(int decno)
{
    int num=decno;
	string bino="";
	
	while(decno>0){
		bino += char('0' + decno % 2);
		decno /=2;
	}
	reverse(bino.begin(),bino.end());
	
	return bino;
}

//Decimal to Octal
string dectooc(int decno)
{
    int num=decno;
	string octa="";
	
	while(decno>0){
		octa += char('0' + decno % 8);
		decno /=8;
	}
	reverse(octa.begin(),octa.end());
	
	return octa;
}
//DEcimal to Hexadecimal
string dectohex(int decno)
{
    string hexa="";
    while(decno>0)
    {
        int rem = decno % 16;
        if(rem < 10)
            hexa = char('0' + rem) + hexa;
        else
            hexa = char('A' + rem - 10) + hexa;
        decno /= 16;
    }
    return hexa;
}

//Binary to Decimal 
int binotodec(int bino)
{
   int num=bino;
   if(bino==0){
       return 0;
   }
   else{
       return binotodec(bino/10)*2 + (bino%10);
       }
}

//Octal to Decimal
int octotodec(int octo){
    int num=octo;
    if(octo==0)
    {
        return 0;
    }
    else{
        return octotodec(octo/10)*8 + (octo%10);
    }
}

//hexadecimal to decimal
int hextodec(string hexa)
{
    int num=hexa.length();
    int decno = 0;
    for(int i=0; i<num; i++)
    {
        if(hexa[i]>='0' && hexa[i]<='9')
            decno = decno * 16 + hexa[i] - '0';
        else if(hexa[i]>='A' && hexa[i]<='F')
            decno = decno * 16 + hexa[i] - 'A' + 10;
        else if(hexa[i]>='a' && hexa[i]<='f')
            decno = decno * 16 + hexa[i] - 'a' + 10;
    }
    return decno;
}

//driver
int main()
{
	system("color 03");
    while(1)
    {
    
	int num, choice;
	float converted_value;
	    cout<<"\n*********************************************************\n";
		cout<<"\n****************** CONVERSION SYSTEM ********************\n";
		cout<<"\n*********************************************************\n";
		cout<<"\n**************** 1.Number Conversion ********************\n";
		cout<<"\n**************** 2.Length Conversion ********************\n";
		cout<<"\n********************** 3.EXIT ***************************\n";
		cout<<"\n*********************************************************\n";
		cout<<"\nEnter your choice:";
		cin>>choice;
		if(choice>=3)
		break;
		
		   
		switch(choice)
		{
		    
			case 1:
			char o; 
			cout<<"\n---------------------------------------------------------";
			cout<<"\n****************** NUMBER CONVERSION ********************";
			cout<<"\n---------------------------------------------------------";
			cout<<"\nA.Decimal to binary";
			cout<<"\nB.Decimal to Octal";
			cout<<"\nC.Decimal to Hexadecimal";
			cout<<"\nD.Binary to Decimal";
			cout<<"\nE.Octal to Decimal";
			cout<<"\nF.Hexadecimal to Decimal";
			cout<<"\n---------------------------------------------------------";
			cout<<"\nEnter the Option (choose lowercase):";
			cin>>o;
			cout<<"\nEnter the number for conversion:";
			cin>>num;
			
			
			switch(o)
			{
				case 'a':
				cout<<"\nThe decimal of "<<num<<" in binary is "<<dectobin(num);break;
				
				case 'b':
				cout<<"\nThe Decimal of "<<num<<" in octal is "<<dectooc(num);break;
				
				case 'c':
				cout<<"\nThe decimal of "<<num<<" in hexadecimal is "<<dectohex(num);break;
				
				case 'd':
				cout<<"\nThe decimal of "<<num<<" in binary is "<<binotodec(num);break;
				
				case 'e':
				cout<<"\nThe Octal of "<<num<<" in decimal is "<<octotodec(num);break;
				
				case 'f':
				{
					string hexa;
					cout<<"\nEnter the Hexadecimal number for conversion: ";
					cin>>hexa;
					cout<<"\nThe hexadecimal of "<<hexa<<" in decimal is "<<hextodec(hexa);break;
				}
				
				default:cout<<"Invalid";
			}
			break;
			
			case 2:
				char s;
				cout<<"\n---------------------------------------------------------";
				cout<<"\n******************* LENGTH CONVERSION *******************";
				cout<<"\n---------------------------------------------------------";
				cout<<"\nA.Centimeter to Millimeter";
				cout<<"\nB.Meter to Feet";
				cout<<"\nC.Foot to Meter";
				cout<<"\nD.Kilometer to Yard";
				cout<<"\nE.Kilometer to Mile";
				cout<<"\nF.Inch to Foot";
				cout<<"\n---------------------------------------------------------";
				cout<<"\nEnter the Option:";
				cin>>s;
				cout<<"\nEnter the number for conversion:";
				cin>>num;
				
				switch(s)
				{
					case 'a': 
					converted_value=num*10;
					cout<<num<<" Centimeter is "<<converted_value<<" Millimeter";break;
					
					case 'b': 
					converted_value=num*3.28084;
					cout<<num<<" Meter is "<<converted_value<<" Feet";break;
					
					case 'c': 
					converted_value=num/3.28084;
					cout<<num<<" Feet is "<<converted_value<<" Meter";break;
					
					case 'd':
					converted_value=num*1093.61;
					cout<<num<<" Kilometer is "<<converted_value<<" Yard";break;
					
					case 'e':
					converted_value=num*0.62137;
					cout<<num<<" Kilometer is "<<converted_value<<" Mile";
					break;
					
					case 'f':
					converted_value=num*0.0833;
					cout<<num<<" inch is "<<converted_value<<" Foot ";
					break;
					
					default:cout<<"Invalid choise\n";

				}break;
		
			
		default: cout<<"Invalid";break;
		
	}
    }
}


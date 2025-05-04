#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<fstream>
using namespace std;
void inventory();
void history();
void stock();
void data();
void datar();
fstream fs;
int te=0,gt=0,lt=0,co=0,ca=0,fco=0,cco=0,san=0,vbg=0,nvbg=0,ff=0,ice=0,bro=0,cw=0,cm=0;
float amount=0,samt=0,itetotal=0;
long id;
string op,da;
int size=0;
struct items
{
 int id;
 char item[70];
 int qty;
 float rate;
 float amt;
}I[20];
	void datar()
	{
	string s;
	 try{
		fs.open("myfile.txt",ios::in);
		if(!fs)
		{
		 throw "error";
		}
		while(!fs.eof())
		{
		
		getline(fs,s);
		cout<<s<<endl;
		}
		
	    }
	    catch(...)
		{
		 cout<<"eror while reading data"<<endl;
		}
	}
		void data()	
		{
			try
			{
			fs.open("myfile.txt",ios::app);
			if(!fs)
			{
			throw "error";
			}
			fs<<"----------------------------------------"<<endl;
			fs<<"Date:"<<da<<endl;
 			fs<<"User:"<<op<<endl;
 			fs<<"ID:"<<id<<endl;
                        fs<<"----------------------------------------"<<endl;
 			fs<<"TOTAL ITEMS SUPPLIES="<<itetotal<<endl;
			fs<<"TOTAL AMOUNT COLLECTED="<<samt<<endl;
			fs<<"----------------------------------------"<<endl;
			fs<<"\t\t\t\tSTOCK"<<endl;
			fs<<"----------------------------------------"<<endl;
			fs<<"Item\t\t\t"<<"\tQTY"<<endl;
			fs<<"TEA\t\t\t\t"<<te<<endl;
			fs<<"GREEN TEA\t\t\t"<<gt<<endl;
			fs<<"LEMON TEA\t\t\t"<<lt<<endl;
			fs<<"COFFEE\t\t\t\t"<<co<<endl;
			fs<<"CAPPUCCINO\t\t\t"<<ca<<endl;
			fs<<"FLTR COFFEE\t\t\t"<<fco<<endl;
			fs<<"CLD COFFEE\t\t\t"<<cco<<endl;	 
			fs<<"SANDWICH\t\t\t"<<san<<endl; 
			fs<<"VG BURGER\t\t\t"<<vbg<<endl;
			fs<<"NONVG BURG\t\t\t"<<nvbg<<endl;
			fs<<"FRCH FRIES\t\t\t"<<ff<<endl;
			fs<<"ICE-CREAM\t\t\t"<<ice<<endl;
			fs<<"BROWNIES\t\t\t"<<bro<<endl;
			fs<<"CHCO WFFLE\t\t\t"<<cw<<endl;
			fs<<"CHCO MFFIN\t\t\t"<<cm<<endl;
			fs<<"TOTAL ITEMS="<<itetotal<<endl;
			fs.close();
			cout<<"Data inserted"<<endl;
			}
			catch(...)
			{
			 cout<<"error while opening file"<<endl;
			}
			
		}

		void stock()
 		{       
			
			
			
			cout<<"----------------------------------------"<<endl;
                        cout<<"----------------------------------------"<<endl;
			cout<<"Date:"<<da<<endl;
 			cout<<"User:"<<op<<endl;
 			cout<<"ID:"<<id<<endl;
                        cout<<"----------------------------------------"<<endl;
			cout<<"TOTAL ITEMS SUPPLIES="<<itetotal<<endl;
                        cout<<"TOTAL AMOUNT COLLECTED="<<samt<<endl;
                        cout<<"----------------------------------------"<<endl;
			cout<<"----------------------------------------"<<endl;
			cout<<"\t\t\t\tSTOCK"<<endl;
			cout<<"----------------------------------------"<<endl;
  			cout<<"Item\t\t\t"<<"\tQTY"<<endl;
			cout<<"TEA\t\t\t\t"<<te<<endl;
			cout<<"GREEN TEA\t\t\t"<<gt<<endl;
			cout<<"LEMON TEA\t\t\t"<<lt<<endl;
			cout<<"COFFEE\t\t\t\t"<<co<<endl;
			cout<<"CAPPUCCINO\t\t\t"<<ca<<endl;
			cout<<"FLTR COFFEE\t\t\t"<<fco<<endl;
			cout<<"CLD COFFEE\t\t\t"<<cco<<endl;	 
			cout<<"SANDWICH\t\t\t"<<san<<endl; 
			cout<<"VG BURGER\t\t\t"<<vbg<<endl;
			cout<<"NONVG BURG\t\t\t"<<nvbg<<endl;
			cout<<"FRCH FRIES\t\t\t"<<ff<<endl;
			cout<<"ICE-CREAM\t\t\t"<<ice<<endl;
			cout<<"BROWNIES\t\t\t"<<bro<<endl;
			cout<<"CHCO WFFLE\t\t\t"<<cw<<endl;
			cout<<"CHCO MFFIN\t\t\t"<<cm<<endl;
			itetotal=te+gt+lt+co+ca+fco+cco+san+vbg+nvbg+ff+ice+bro+cw+cm;	
                        cout<<"TOTAL ITEMS="<<itetotal<<endl;
			
		}
	void inventory()
      	{//inventory start
         int am;
	 char ch; 
     start:	
     do
     {
     cout<<"****************************************"<<endl;
     cout<<"\t\tMENU"<<endl;
     cout<<"****************************************"<<endl;
cout<<"----------------------------------------"<<endl;
     cout<<"\tTEA"<<endl;//tea
     cout<<"----------------------------------------"<<endl;
     cout<<"1).Tea";
     cout<<"\t\t\t\t20/-"<<endl;
     cout<<"2).Green tea";
     cout<<"\t\t\t25/-"<<endl;
     cout<<"3).Lemon tea";
     cout<<"\t\t\t25/-"<<endl;
cout<<"----------------------------------------"<<endl;
     cout<<"\tCOFFEE"<<endl;//coffee
cout<<"----------------------------------------"<<endl;
     cout<<"4).Coffee";
     cout<<"\t\t\t\t130/-"<<endl; 
     cout<<"5).Cappuccino";
     cout<<"\t\t\t140/-"<<endl; 
     cout<<"6).Cold Coffee";
     cout<<"\t\t\t250/-"<<endl; 
     cout<<"7).Filter Coffee";
     cout<<"\t\t\t400/-"<<endl; 
cout<<"----------------------------------------"<<endl;
     cout<<"\tSNACKS"<<endl;//snacks
cout<<"----------------------------------------"<<endl;
     cout<<"8).Sandwich";
     cout<<"\t\t\t140/-"<<endl; 
     cout<<"9).Veg Burger";
     cout<<"\t\t\t250/-"<<endl; 
     cout<<"10).Non Veg Burger";
     cout<<"\t\t\t499/-"<<endl; 
     cout<<"11).French Fries";
     cout<<"\t\t\t499/-"<<endl; 
cout<<"----------------------------------------"<<endl;
     cout<<"\tDESSERTS"<<endl;//deserts
cout<<"----------------------------------------"<<endl;
     cout<<"12).Ice Cream";
     cout<<"\t\t\t199/-"<<endl; 
     cout<<"13).Brownies";
     cout<<"\t\t\t499/-"<<endl; 
     cout<<"14).Chocolate Waffle";
     cout<<"\t\t599/-"<<endl; 
     cout<<"15).Chocolate Muffins";
     cout<<"\t\t599/-"<<endl; 
     cout<<"****************************************"<<endl;
      cout<<"Choose an item to update inventory acc to serial no:";
         cin>>am;
     
       switch(am)
       {
         	case 1:
              		{
                          	cout<<"no of Tea:";
 			  	cin>>te;
               		break;
              		}
		case 2:
              		{
                          	cout<<"no of greenTea:";
 			  	cin>>gt;
               		break;
              		}
		case 3:
              		{
                          	cout<<"no of lemonTea:";
 			  	cin>>lt;
               		break;
              		}
		case 4:
              		{
                          	cout<<"no of coffees:";
 			  	cin>>co;
               		break;
              		}
		case 5:
              		{
                          	cout<<"no of Cappuccino:";
 			  	cin>>ca;int te,gt,lt,co,ca;
               		break;
              		}
		case 6:
              		{
                          	cout<<"no of Filter Coffees:";
 			  	cin>>fco;
               		break;
              		}
		case 7:
              		{
                          	cout<<"no of Cold Coffees:";
 			  	cin>>cco;
               		break;
              		}
		case 8:
              		{
                          	cout<<"no of Sandwich:";
 			  	cin>>san;
               		break;
              		}
		case 9:
              		{
                          	cout<<"no of Veg Burger:";
 			  	cin>>vbg;
               		break;
              		}
		case 10:
              		{
                          	cout<<"no of Non-Veg Burger:";
 			  	cin>>nvbg;
               		break;
              		}
		case 11:
              		{
                          	cout<<"no of French Fries:";
 			  	cin>>ff;
               		break;
              		}
		case 12:
              		{
                          	cout<<"no of Ice Cream:";
 			  	cin>>ice;int te,gt,lt,co,ca,fco,cco,san,vbg,nvbg,ff,ice;
               		break;
              		}
		case 13:
              		{
                          	cout<<"no of Brownies:";
 			  	cin>>bro;
               		break;
              		}
         	case 14:
              		{
                          	cout<<"no of Chocolate Waffle:";
 			  	cin>>cw;
               		break;
              		}
		case 15:
              		{
                          	cout<<"no of Chocolate Muffins:";
 			  	cin>>cm;
               		break;
              		}
                default:break;
 		
	       }//switch
		cout<<"ADD MORE?(Y/N)";
		cin>>ch;
		if(ch=='Y'||ch=='y')
     		{
 		  goto start;
		}
                else 
                {
		 ch=0;
		}
     }while(ch!=0);
     
	}//inventory end
////////////////////////////////////////////////////actual////
int main()
{
int o,se=0,ca,sca,am,i=0;
char co,ch;
cout<<"----------------------------------------"<<endl;
cout<<"\t\tCAFE PORTAL"<<endl;
cout<<"----------------------------------------"<<endl;
cout<<"ENTER THE DATE:(dd/mm/yyyy)";
cin>>da;
cout<<"ENTER YOUR NAME:";
cin>>op;
cout<<"Welcome\t"<<op<<endl;
cout<<"Enter your 7-digit ID:"<<endl;
cin>>id;
do
{
 
 cout<<"----------------------------------------"<<endl;
 cout<<"Date:"<<da<<endl;
 cout<<"User:"<<op<<endl;
 cout<<"ID:"<<id<<endl;
 cout<<"----------------------------------------"<<endl;
 cout<<"1.INVENTORY"<<endl;
 cout<<"2.MENU AND BILL"<<endl;
 cout<<"3.STATISTICS"<<endl;
 cout<<"4.SAVE DATA"<<endl;
 cout<<"5.READ SAVED DATA"<<endl;
 cout<<"6.USER LOGOUT"<<endl;
 cout<<"Enter your choice by serial no:"<<endl;
 cin>>o;
 switch(o)
  {
   case 1:
   	{
           inventory();
          break;
         }
   case 2:
    {
     start:
     do
     {
     cout<<"----------------------------------------"<<endl;
     cout<<"\t\tMENU"<<endl;
     cout<<"----------------------------------------"<<endl;
     cout<<"Username:"<<op<<endl;
     cout<<"UserID:"<<id<<endl;
cout<<"----------------------------------------"<<endl;
     cout<<"\tTEA"<<endl;//tea
     cout<<"----------------------------------------"<<endl;
     cout<<"1).Tea";
     cout<<"\t\t\t\t20/-"<<endl;
     cout<<"2).Green tea";
     cout<<"\t\t\t25/-"<<endl;
     cout<<"3).Lemon tea";
     cout<<"\t\t\t25/-"<<endl;
cout<<"----------------------------------------"<<endl;
     cout<<"\tCOFFEE"<<endl;//coffee
cout<<"----------------------------------------"<<endl;
     cout<<"4).Coffee";
     cout<<"\t\t\t\t130/-"<<endl; 
     cout<<"5).Cappuccino";
     cout<<"\t\t\t140/-"<<endl; 
     cout<<"6).Cold Coffee";
     cout<<"\t\t\t250/-"<<endl; 
     cout<<"7).Filter Coffee";
     cout<<"\t\t\t400/-"<<endl; 
cout<<"----------------------------------------"<<endl;
     cout<<"\tSNACKS"<<endl;//snacks
cout<<"----------------------------------------"<<endl;
     cout<<"8).Sandwich";
     cout<<"\t\t\t140/-"<<endl; 
     cout<<"9).Veg Burger";
     cout<<"\t\t\t250/-"<<endl; 
     cout<<"10).Non Veg Burger";
     cout<<"\t\t\t499/-"<<endl; 
     cout<<"11).French Fries";
     cout<<"\t\t\t499/-"<<endl; 
cout<<"----------------------------------------"<<endl;
     cout<<"\tDESSERTS"<<endl;//deserts
cout<<"----------------------------------------"<<endl;
     cout<<"12).Ice Cream";
     cout<<"\t\t\t199/-"<<endl; 
     cout<<"13).Brownies";
     cout<<"\t\t\t499/-"<<endl; 
     cout<<"14).Chocolate Waffle";
     cout<<"\t\t599/-"<<endl; 
     cout<<"15).Chocolate Muffins";
     cout<<"\t\t599/-"<<endl; 
     cout<<"****************************************"<<endl;
     se++;
     cout<<"bill no:"<<se<<endl;
     
     cout<<"enter your choice according to serial no:";
     cin>>am;
       switch(am)
       {
         	case 1:
              		{
				if(te>0)
				{
                          	cout<<"no of Tea:";
 			  	cin>>I[i].qty;
 				 if(I[i].qty<=te)
				 {
				I[i].id=i+1;
				strcpy(I[i].item,"Tea");
				I[i].rate=20;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
				te--;
				 }
				 else{
				cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;	}
				}
				else{
				cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;
				}
               		break;
              		}
		case 2:
              		{       
				if(gt>0)
				{
                          	cout<<"no of greenTea:";
 			  	cin>>I[i].qty;
				if(I[i].qty<=gt)
				 {
				I[i].id=i+1;
				strcpy(I[i].item,"grntea");
				I[i].rate=25;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
				gt--;
				}
				 else{
				cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;	}
				}
				else
				{
				 cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;
				}
               		break;
              		}
		case 3:
              		{
				if(lt>0)
				{
                          	cout<<"no of lemonTea:";
 			  	cin>>I[i].qty;
				if(I[i].qty<=lt)
				 {
				I[i].id=i+1;
				strcpy(I[i].item,"lmntea");
				I[i].rate=25;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
				lt--;}
				 else{
				cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;	}
				}
				else
				{
				 cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;
				}
               		break;
              		}
		case 4:
              		{
 				if(co>0)
				{
                          	cout<<"no of coffees:";
 			  	cin>>I[i].qty;
				if(I[i].qty<=co)
				 {
				I[i].id=i+1;
				strcpy(I[i].item,"Coffee");
				I[i].rate=130;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
				co--;}
				 else{
				cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;	}
				}
				else
				{
				 cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;
				}
               		break;
              		}
		case 5:
              		{
				if(ca>0)
				{
                          	cout<<"no of Cappuccino:";
 			  	cin>>I[i].qty;
				if(I[i].qty<=ca)
				 {
				I[i].id=i+1;
				strcpy(I[i].item,"Capucino");
				I[i].rate=140;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
				ca--;}
				 else{
				cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;	}
				}
				else
				{
				cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;
				}
               		break;
              		}
		case 6:
              		{  
				if(fco>0)
				{
                          	cout<<"no of Filter Coffees:";
 			  	cin>>I[i].qty;
				if(I[i].qty<=fco)
				 {
				I[i].id=i+1;
				strcpy(I[i].item,"Fltr-Cofe");
				I[i].rate=250;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
				fco--;}
				 else{
				cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;	}
				}
				else
                                {
				 cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;
				}
               		break;
              		}
		case 7:
              		{   
				if(cco>0)
				{
                          	cout<<"no of Cold Coffees:";
 			  	cin>>I[i].qty;
				if(I[i].qty<=cco)
				 {
				I[i].id=i+1;
				strcpy(I[i].item,"Cld-Cofe");
				I[i].rate=400;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
				fco--;}
				 else{
				cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;	}
				}
				else
				{
			 	cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;
				}
               		break;
              		}
		case 8:
              		{       if(san>0)
				{
                          	cout<<"no of Sandwich:";
 			  	cin>>I[i].qty;
				if(I[i].qty<=san)
				 {
				I[i].id=i+1;
				strcpy(I[i].item,"Sawich");
				I[i].rate=140;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
				san--;}
				 else{
				cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;	}
				}
				else
				{
			 	cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;
				}
               		break;
              		}
		case 9:
              		{      
				 if(vbg>0)
				{
                          	cout<<"no of Veg Burger:";
 			  	cin>>I[i].qty;
				if(I[i].qty<=vbg)
				 {
				I[i].id=i+1;
				strcpy(I[i].item,"vg-burgr");
				I[i].rate=250;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
				vbg--;}
				 else{
				cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;	}
				}
				else
				{
			 	cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;
				}
               		break;
              		}
		case 10:
              		{       if(nvbg>0)
				{
                          	cout<<"no of Non-Veg Burger:";
 			  	cin>>I[i].qty;
				if(I[i].qty<=nvbg)
				 {
				I[i].id=i+1;
				strcpy(I[i].item,"ncg-burgr");
				I[i].rate=499;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
				nvbg--;}
				 else{
				cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;	}
				}
				else
				{
			 	cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;
				}
               		break;
              		}
		case 11:
              		{	if(ff>0){
                          	cout<<"no of French Fries:";
 			  	cin>>I[i].qty;
				if(I[i].qty<=ff)
				 {
				I[i].id=i+1;
				strcpy(I[i].item,"Frchfries");
				I[i].rate=499;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
				ff--;}
				 else{
				cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;	}
				}
				else
				{
			 	cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;
				}
               		break;
              		}
		case 12:
              		{	if(ice>0){
                          	cout<<"no of Ice Cream:";
 			  	cin>>I[i].qty;
				if(I[i].qty<=ice)
				 {
				I[i].id=i+1;
				strcpy(I[i].item,"ic-crm");
				I[i].rate=199;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
				ice--;}
				 else{
				cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;	}
				}
				else
				{
			 	cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;
				}
               		break;
              		}
		case 13:
              		{	if(bro>0)
				{
                          	cout<<"no of Brownies:";
 			  	cin>>I[i].qty;
				if(I[i].qty<=bro)
				 {
				I[i].id=i+1;
				strcpy(I[i].item,"brwnes");
				I[i].rate=499;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
				bro--;}
				 else{
				cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;	}
				}
				else
				{
			 	cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;
				}
               		break;
              		}
         	case 14:
              		{	if(cw>0){
                          	cout<<"no of Chocolate Waffle:";
 			  	cin>>I[i].qty;
				if(I[i].qty<=cw)
				 {
				I[i].id=i+1;
				strcpy(I[i].item,"chco-wffl");
				I[i].rate=599;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
				cw--;}
				 else{
				cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;	}
				}
				else
				{
			 	cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;
				}
               		break;
              		}
		case 15:
              		{	if(cm>0)
				{
                          	cout<<"no of Chocolate Muffins:";
 			  	cin>>I[i].qty;
				if(I[i].qty<=cm)
				 {
				I[i].id=i+1;
				strcpy(I[i].item,"chco-mfins");
				I[i].rate=599;
				I[i].amt=I[i].qty*I[i].rate;
				amount+=I[i].amt;
				i++;
				size++;
				cm--;}
				 else{
				cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;	}
				}
				else
				{
			 	cout<<"----------------------------------------OUT OF STOCK----------------------------------------"<<endl;
				}
               		break;
              		}
                default:break;
 		
	       }//switch
		cout<<"ADD MORE?(Y/N)";
		cin>>ch;
		if(ch=='Y'||ch=='y')
     		{
 		  goto start;
		}
                else 
                {
		 ch=0;
		}
     }while(ch!=0);
     if((ch!='Y'||ch!='y')&&amount>0)
      {
       	
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\tINVOICE"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"\tUser:"<<op<<endl;
        cout<<"\tID:"<<id<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;	
	cout<<setw(10)<<"I.D."<<setw(20)<<"Item Name"<<setw(10)<<"Qty."<<setw(10)<<"Rate"<<setw(10)<<"Amount"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
		for(int j=0;j<size;j++)
       		{
        	cout<<setw(10)<<I[j].id<<setw(20)<<I[j].item<<setw(10)<<I[j].qty<<setw(10)<<I[j].rate<<setw(10)<<I[j].amt<<endl;
 		}
     	cout<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<setw(50)<<"Total amount:"<<setw(10)<<amount<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	samt=amount;
	amount=0;
      }
     else
      {
       cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%--NO ORDER PLACED--%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
      }
     break;  
    }//main switch
   case 3:
     {
      stock();
      break;
     }
   case 4:
	{
	 data();
         break;
	}
   
 case 5:
	{
	 datar();
         break;
	}
   case 6:{cout<<"LOGGED OUT"<<endl;cout<<"No Of Bills Done Today:"<<se<<endl;}break;
   default:cout<<"wrong choice"<<endl;break;
  }
}
while(o==1||o==2||o==3||o==4||o==5);
return 0;
}

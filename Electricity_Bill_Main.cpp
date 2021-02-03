#include<iostream>
#include<stdio.h>
#include <string.h>
#include<conio.h>
#include <ctime>
#include<fstream>
using namespace std;


void start(void);




string Today_time(){
        		time_t tt; // Declaring argument for time()
	              struct tm * ti; // Declaring argument for localtime() 
                 time (&tt); // Applying time()
                 ti = localtime(&tt);  // Using localtime() 
				 return (asctime(ti));   	
		}
	void process(int j){
		
		for(int i=0;i<j;i++)
		{
			int k=i;
		}
		
	}

class electricity_Bill{
	public:
		void control_menu();
	    void add_New_bill();
	    void show_bill();
	    void check_bill();
	    void update_bill();
	    void delete_bill();
	    void customer_bill();
	    void exit();
      
};


void electricity_Bill::exit(void){
	system("cls");
	system("color 07");
	//cout<<"Made By : Rishabh Saini (Enjoy The Code) ";
    char arr[32]={'M','a','d','e',' ','B','y',' ','R','i','s','h','a','b','h',' ','S','a','i','n','i','\n','T','h','a','n','k',' ','Y','o','u'};
     for(int i=0;i<32;i++){
     	process(100000000);
     	cout<<arr[i];
     	 }
     	 cout<<"\n";
     	 for(int j=0;j<=6;j++)
        {
            process(100000000);
            cout<<".";
        }
}

void electricity_Bill::control_menu(){
	
       system("color 0A");
  	system("cls");
	cout<<"\n\n\t\t\t\tELECTRTICITY BOARD DEPARMENT BILL SYSTEM\n\n";	
	cout<<"\n\n\t\t\t\t\t\xB2\xB1\xB1\xB1\xB2\xB2\xB2 WELCOME  \xB2\xB2\xB1\xB1\xB1\xB2";
	cout<<"\n\n\t\t\t\t\t 1. Add New Bill";
	cout<<"\n\n\t\t\t\t\t 2. Display Total Bills";
	cout<<"\n\n\t\t\t\t\t 3. Check  Bill";
	cout<<"\n\n\t\t\t\t\t 4. Update Bill";
	cout<<"\n\n\t\t\t\t\t 5. Delete Bill";
	cout<<"\n\n\t\t\t\t\t 6. Customer Bill";
	cout<<"\n\n\t\t\t\t\t 7. Exit";
			
}


void electricity_Bill::add_New_bill(){
	system("cls");
	system("color 8F");
	fstream file;
	long long int c_addar, c_phone;
	float amount=0.0;
	string c_name,c_address,c_father,c_pan; 
	cout<<"\n\n\t\t\t ADD NEW BILL RECORD \n\n \n\n";
	cout<<"Today Date : "<<Today_time();
	cout<<"\nEnter Addar Number :";
	cin>>c_addar;
	cin.ignore();
	cout<<"\nEnter Name(Without_space) :";
     //getline(cin, c_name);
	cin>>c_name;
    cout<<"\nEnter Father(Without_space) :";
    //getline(cin,c_father);
	cin>>c_father;
    cout<<"\nEnter Address(Without_space) :";
	//getline(cin,c_address);
	cin>>c_address;
	cout<<"\nEnter Phone number :";
	cin>>c_phone;
	cout<<"\nEnter Pan Number :";
	cin>>c_pan;
	cout<<"\nCurrent Amount :"<<amount;
	file.open("D://Bill.txt",ios::out | ios::app);
	file<<c_addar<<" "<<c_name <<" "<<c_father<<" "<<c_address<<" "<<amount<<" "<<c_phone<<" "<<c_pan<< "\n";
	file.close();	
}

void electricity_Bill::show_bill(){
	system("cls");
	system("color E0");
	cout<<"\n\n\t\t\t TOTOL BILLs\n\n";
     long long	int  c_addar,c_phone;
	float amount;
	string c_name,c_address,c_father,c_pan;
	fstream file;
	file.open("D://Bill.txt",ios::in);
	   if(!file)
	   cout<<"File Not Found . .";
	   else
	   {
	   	cout<<"ADDAR_NO           NAME            Phone         AMOUNT \n\n";
	    file>>c_addar>>c_name>>c_father>>c_address>>amount>>c_phone>>c_pan;
	    while(!file.eof())
		{
	    cout<<c_addar<<" \t  "<<c_name <<" \t  "<<c_phone<<" \t  "<<amount<< "\n";
	    file>>c_addar>>c_name>>c_father>>c_address>>amount>>c_phone>>c_pan;
		}
  
    file.close();	
  }
}

void electricity_Bill::check_bill(){
   	system("cls");
	system("color C0");
	cout<<"\n\n\t\t\t CHECK BILL\n\n";
	cout<<"Date : "<<Today_time()<<"\n\n";
	 long long	int  c_addar,aadar_id,c_phone;
	float amount;
	int count=0;
	string c_name,c_address,c_father,c_pan;
	fstream file;
	file.open("D://Bill.txt",ios::in);
	if(!file){
		
		cout<<"File Not Found . . Try Again\nPress Any Key To Home !";
	}
   	
   	else{
   		cout<<"Enter AADAR ID :";
   		cin>>aadar_id;
   		 file>>c_addar>>c_name>>c_father>>c_address>>amount>>c_phone>>c_pan;
   	    while(!file.eof())
		   {
	   	if(aadar_id==c_addar)
   		   {
   		   	 system("cls");
   		   	 system("color C0");
	       	    cout<<"\n\n\n \t\t\tBILL FOUND! ";
	       	cout<<"\n\n AADDAR ID: "<<c_addar;
			cout<<"\n\n NAME : "<<c_name;
			cout<<"\n\n Father Name: "<<c_father; 
			cout<<"\n\n ADDRESS: "<<c_address;
			cout<<"\n\n Phone :" <<c_phone;
			cout<<"\n\n Pancard :" <<c_pan;
			cout<<"\n\n AMOUNT:   "<<amount;
			count++;
	    	 }
   			file>>c_addar>>c_name>>c_father>>c_address>>amount>>c_phone>>c_pan;
	   }
   	file.close();
   	if(count==0)
   	cout<<"\n\n NO DATA  FOUND . . ";
   } 	
}

void electricity_Bill::update_bill(){
	system("cls");
	system("color A0");
	cout<<"\n\n\t\t\t UPDATE BILL\n\n";
	fstream  file,file1;
	long long int c_addar, u_addar,u_phone, c_phone;
	float amount;
	int count=0;
	string c_name,c_address,c_father,c_pan,u_name,u_address,u_father,u_pan;
   	file1.open("D://Bill1.txt",ios::out | ios::app);
	file.open("D://Bill.txt",ios::in);
	  if(!file)
	   cout<<"File Does Not Exit ";
	   
    else
	     {
			 	
	       cout<<"Enter USER  ADDAR NUMBER ";
	       cin>>u_addar;
	       file>>c_addar>>c_name>>c_father>>c_address>>amount>>c_phone>>c_pan;
	       while(!file.eof())
                 {
			         if(c_addar==u_addar)
			              {			        
						  system("cls");      	
	                cout<<"\nEnter Updated Name(Without_space) :";
                     cin>>u_name;
                    cout<<"\nEnter Updated Father(Without_space) :";
                  	cin>>u_father;
                    cout<<"\nEnter Updated Address(Without_space) :";
                 	cin>>u_address;
	                cout<<"\nEnter Updated Phone number :";
                   	cin>>u_phone;
                 	cout<<"\nEnter Updated Pan Number :";
                	cin>>u_pan;
                  	cout<<"\n Current Amount (Can't Update by Customer)"; 
			              file1<<u_addar<<" "<<u_name <<" "<<u_father<<" "<<u_address<<" "<<amount<<" "<<u_phone<<" "<<u_pan<< "\n";
			              	count++;
						  }
						  else
						  
						  	file1<<c_addar<<" "<<c_name <<" "<<c_father<<" "<<c_address<<" "<<amount<<" "<<c_phone<<" "<<c_pan<< "\n";
						  	file>>c_addar>>c_name>>c_father>>c_address>>amount>>c_phone>>c_pan;		  
				
				 }
				 if(count==0)
				 cout<<"No Data Found \n Try Again";	  
				 file.close();
	  file1.close();
	  remove("D://Bill.txt");
	  rename("D://Bill1.txt","D://Bill.txt");   
		}
	  
	
}


void electricity_Bill::delete_bill(){
    system("cls");
	system("color 06");
	long long	int  c_addar,d_addar,c_phone;
	float amount;
	int count=0;
	string c_name,c_address,c_father,c_pan;
	cout<<"\n\n\t\t\tDelete Customer Record ";
	fstream file,file1;
	file1.open("D://Bill1.txt",ios::app|ios::out);
	file.open("D://Bill.txt",ios::in);
	if(!file){
		cout<<"File NotFound";
	}	
	   else
	   {
	       system("cls");
		   cout<<"Enter Aadar Number ";
		   cin>>d_addar;
		   file>>c_addar>>c_name>>c_father>>c_address>>amount>>c_phone>>c_pan;
		   while(!file.eof())
             {
								   if(d_addar==c_addar){
		   	      cout<<" Record Deleted \n\n Customer Bill Has Been Removed \n";
				count++;}
	     else
	   	file1<<c_addar<<" "<<c_name <<" "<<c_father<<" "<<c_address<<" "<<amount<<" "<<c_phone<<" "<<c_pan<< "\n";
		file>>c_addar>>c_name>>c_father>>c_address>>amount>>c_phone>>c_pan;
         }
	   
	   if(count==0)
	   cout<<"Bill Not Found ";
    }
    
    file.close();
    file1.close();
    remove("D://Bill.txt");
    rename("D://Bill1.txt","D://Bill.txt");
}

void electricity_Bill::customer_bill(){
	system("cls");
	system("color 06");
	
	long long int c_addar, u_addar, c_phone;
	float amount,B_amount,from,to,total_reading;
	int count=0;
	string c_name,c_address,c_father,c_pan;
	cout<<"\n\n\n\t\t\t CUSTOMER BILL\n\n\n";
    	fstream file,file1;
    	file.open("D://Bill.txt", ios::in);
    	file1.open("D://Bill1.txt",ios::out|ios::app);
    	if(!file){
    		cout<<"File Not Exit .. ";
		}
    	else {
		    cout<<"Today Date :"<<Today_time();
	    	 cout<<"\n\nUSER  ADDAR NUMBER : ";
	        cin>>u_addar;
	        file>>c_addar>>c_name>>c_father>>c_address>>amount>>c_phone>>c_pan;
	        while(!file.eof())
                 {
			         if(u_addar==c_addar)
    		       
    		          {
					         
    		                cout<<"\nUser  NAME : "<<c_name;
    		            	cout<<"\n\nEnter Reading \n\n";
    		            	cout<<"From(Last Reading) :        ";
    		            	cin>>from;
     		            	cout<<"To(Today Reading)   :         ";
     		            	cin>>to;
     		            	total_reading=to-from;
    		            	cout<<"\n\nTotal Reading :   \t"<<total_reading;
    		            	cout<<"\n\nLast Balance:  \t"<<amount; 
    		            	B_amount=total_reading*4.5;
    		            	cout<<"\n\nThis Month Balance :  \t"<<B_amount;
    		            	B_amount+=amount;
    		            	cout<<"\n\nTotal Amount :  \t"<<B_amount;	
    		            	cout<<"\n\n(NOTE: 1 Unit = 4.5 Rupess)";
    		            	file1<<c_addar<<" "<<c_name <<" "<<c_father<<" "<<c_address<<" "<<B_amount<<" "<<c_phone<<" "<<c_pan<< "\n";
    		             	count++;
						}
						   
						   else
						   file1<<c_addar<<" "<<c_name <<" "<<c_father<<" "<<c_address<<" "<<amount<<" "<<c_phone<<" "<<c_pan<< "\n";
						   file>>c_addar>>c_name>>c_father>>c_address>>amount>>c_phone>>c_pan;
						   
    		
    		
	    	}

	    	if(count==0)
	    	 	cout<<"Data Not Found ";
			 
	file.close();
	file1.close();
	 remove("D://Bill.txt");
	  rename("D://Bill1.txt","D://Bill.txt");
}
	
	
}

	
	void start(void)
	{
	
	long int choice;
	electricity_Bill b;
	
	p:
		b.control_menu();
	cout<<"\n\n\n\n\n\t\t\t\tEnter Your Choice ";
	cin>>choice;  
	switch(choice){
		
	    case 1:
	    	char ch;
	    	 do{
	    	b.add_New_bill();
    	     cout<<" \n\n\t\tSuccessful ! ";
			 cout<<"\n\nDo you Want To Enter Again (Y or N) : \t";
			 cin>>ch;
	      	}while(ch=='y' | ch=='Y');
	      		cout<<"\nPress Any Key For Home ! . . ";
				break;
        case 2:
        	b.show_bill();
        	cout<<"\nPress Any Key For Home ! . . ";
		        break;
		case 3:
			b.check_bill();
			cout<<"\n\nPress Any Key For Home ! . . ";
		       break;
		case 4:
			b.update_bill();
			cout<<"\n\nPress Any Key For Home ! . . ";
		        break;
		case 5:
			b.delete_bill();
			cout<<"\n\nPress Any Key For Home ! . . ";
		       break;
		       
		case 6:
			b.customer_bill();
				cout<<"\n\n\n\nPress Any Key For Home ! . . ";
		       break;       
		case 7:
		   b.exit();
		   exit(0);
		      break;
	   default:
	   	cout<<" \n\nInvalid Choice ... Try Again (Press Key Between 1 -7 )";
	   	}
	getch();
	goto p;
    
    
	}
	



main(){

		string str=("\t\tLOG IN\n\n");
     for(int j=0;j<str.length();j++){
     	process(100000000);
     	cout<<str[j];}
	int i,x,m;
	string user,pass;
	string in_user="rishabhsaini";
	string password="195401031";
	cout<<"User Name : ";
    cin>>user;
	cout<<"\nUser Password :";
    cin>>pass;
	 if((in_user==user) &&(password==pass))
		{
		cout<<"\n\nPassword Match!\n\nLOADING";
         for(i=0;i<=6;i++)
        {
            process(100000000);
            printf(".");
        }
                system("cls");
	        
  	
  	string str=("\t\t.........ELECTRTICITY BOARD DEPARMENT BILL SYSTEM ");
     for(int j=0;j<str.length();j++){
     	process(100000000);
     	cout<<str[j];
     	
 } 
 	start();
	        		system("cls");
      }
else
{
    int in;
  	cout<<"\nPassword Not Matched !\n\n";
  	 tryagain:
  	 	cout<<"-> Press 1 For Try Again \n-> Press 2 For Exit \n";
  	    cin>>in; 
  	   if(in==1) {
  	   	
  	   	    system("cls");
  	   	    main();
		 }
  	else if(in==2)
  	   {
  	   	
  	   	system("cls");
  	   	electricity_Bill m;
			 m.exit();
			 exit(0);
		 }
  	 else
            {
			cout<<"\nInvalid Key !\n";
             for(i=0;i<=6;i++)
        {
            process(100000000);
            printf(".");
        }
                system("cls");
                goto tryagain;}
  	
  }
  	
  
}

#include <iostream> //including input output header file
#include <fstream> //this header file is used for opening the the file at the back end of the program
#include <stdio.h> //this header file is used for clearing the screen
#include <windows.h>//this is used for sleep function
using namespace std;

class Desiginfo//class
{
	private:
		string ceo_name;
		string asst_name;
		string hr_name;
		string clerk_name;
		string recpt_name;
		string prob_name;
		string ceo_city;
		string asst_city;
		string hr_city;
		string clerk_city;
		string recpt_city;
		string prob_city;
		string ceo_cnic;
		string asst_cnic;
		string hr_cnic;
		string clerk_cnic;
		string recpt_cnic;
		string prob_cnic;

	public:
	      	void setname() //enters the names for all the designations from the user
	      	{
				cout<<"Enter the name of the CEO: ";
				cin>>ceo_name;
				cout<<endl;
				cout<<"Enter the name of the Assistant: ";
				cin>>asst_name;
				cout<<endl;
				cout<<"Enter the name of the HR: ";
				cin>>hr_name;
				cout<<endl;
				cout<<"Enter the name of the Clerk: ";
				cin>>clerk_name;
				cout<<endl;
				cout<<"Enter the name of the Receptionist: ";
				cin>>recpt_name;
				cout<<endl;
				cout<<"Enter the name of the Probation: ";
				cin>>prob_name;
				cout<<endl;
			}

			void getname()    //displays the names of all the designations enter by the user
		    {
				cout<<"Name of the CEO is: "<<ceo_name<<endl;
				cout<<"Name of the Assistant is: "<<asst_name<<endl;
				cout<<"Name of the HR is:"<<hr_name<<endl;
				cout<<"Name of the Clerk is: "<<clerk_name<<endl;
				cout<<"Name of the Receptionist is: "<<recpt_name<<endl;
				cout<<"Name of the Probation is: "<<prob_name<<endl;
			}

			void setcity()   //enters the  cities names for all the designations from the user
			{
				cout<<endl;
				cout<<"Enter the City of the CEO: ";
				cin>>ceo_city;
				cout<<endl;
				cout<<"Enter the City of the Assistant: ";
				cin>>asst_city;
				cout<<endl;
				cout<<"Enter the City of the HR: ";
				cin>>hr_city;
				cout<<endl;
				cout<<"Enter the City of the Clerk: ";
				cin>>clerk_city;
				cout<<endl;
				cout<<"Enter the City of the Receptionist: ";
				cin>>recpt_city;
				cout<<endl;
				cout<<"Enter the City of the Probation: ";
				cin>>prob_city;
				cout<<endl;
			}
			 void getcity()    //displays the names of cities of all the designations enter by the user
			{
				cout<<"City of the CEO is: "<<ceo_city<<endl;
				cout<<"City of the Assistant is: "<<asst_city<<endl;
				cout<<"City of the HR is: "<<hr_city<<endl;
				cout<<"City of the Clerk is: "<<clerk_city<<endl;
				cout<<"City of the Receptionist is: "<<recpt_city<<endl;
				cout<<"City of the Probation is: "<<prob_city<<endl;
			}

			void setCnic()  //enters the cnic number for all the designations from the user
			{
				cout<<endl;
				cout<<"Enter the Cnic no. of the CEO: ";
				cin>>ceo_cnic;
				cout<<endl;
				cout<<"Enter the Cnic no. of the Assistant: ";
				cin>>asst_cnic;
				cout<<endl;
				cout<<"Enter the Cnic no. of the HR: ";
				cin>>hr_cnic;
				cout<<endl;
				cout<<"Enter the Cnic no. of the Clerk: ";
				cin>>clerk_cnic;
				cout<<endl;
				cout<<"Enter the Cnic no. of the Receptionist: ";
				cin>>recpt_cnic;
				cout<<endl;
				cout<<"Enter the Cnic no. of the Probation: ";
				cin>>prob_cnic;
				cout<<endl;
			}

			void getCnic()   //displays the cnic numbers of all the designations enter by the user
			{
				cout<<"Cnic no. of the CEO is: "<<ceo_cnic<<endl;
				cout<<"Cnic no. of the Assistant is: "<<asst_cnic<<endl;
				cout<<"Cnic no. of the HR is: "<<hr_cnic<<endl;
				cout<<"Cnic no. of the Clerk is: "<<clerk_cnic<<endl;
				cout<<"Cnic no. of the Receptionist is: "<<recpt_cnic<<endl;
				cout<<"Cnic no. of the Probation is: "<<prob_cnic<<endl;
			}
};

class Salaryinfo:public Desiginfo //inheritance of the child class with the parent class
{
	private:
		   int choice;
		   int bsal_ceo;
		   int bsal_asst;
		   int bsal_hr;
		   int bsal_clerk;
		   int bsal_recpt;
		   int bsal_prob;
		   float bonus_ceo;
		   float bonus_asst;
		   float bonus_hr;
		   float bonus_clerk;
		   float bonus_recpt;
		   float bonus_prob;
		   float ceo_tax;
		   float asst_tax;
		   float hr_tax;
		   float clerk_tax;
		   float recpt_tax;
		   float prob_tax;
		   float net_sal_ceo;
		   float net_sal_asst;
		   float net_sal_hr;
		   float net_sal_clerk;
		   float net_sal_recpt;
		   float net_sal_prob;

	public:

		   void calcsalary() // inputs and displays the basic salary of all the designations and performs different calculations
		   {
		   	 cout<<endl;
		     cout<<"Enter the Basic Salary of the CEO (90k - 150k): ";
			 cin>>bsal_ceo;
			 cout<<endl;
			 cout<<"Enter the Basic Salary  of the Assistant (65k - 80k): ";
			 cin>>bsal_asst;
			 cout<<endl;
			 cout<<"Enter the Basic Salary of the HR (50k - 60k): ";
			 cin>>bsal_hr;
			 cout<<endl;
			 cout<<"Enter the Basic Salary of the Clerk (40k - 48k) : ";
			 cin>>bsal_clerk;
			 cout<<endl;
			 cout<<"Enter the Basic Salary of the Receptionist (30k - 38k) : ";
			 cin>>bsal_recpt;
			 cout<<endl;
			 cout<<"Enter the Basic Salary of the Probation  (20k - 25k) : ";
			 cin>>bsal_prob;
			 cout<<endl;

			 	cout<<"*******************************************"<<endl;
	            cout<<"* 1. CEO                                   *"<<endl;
                cout<<"* 2. Assistant                             *"<<endl;
 	            cout<<"* 3. HR                                    *"<<endl;
	            cout<<"* 4. Clerk                                 *"<<endl;
	            cout<<"* 5. Receptionist                          *"<<endl;
	            cout<<"* 6. Probation                             *"<<endl;
	            cout<<"********************************************"<<endl;
	            cout<<endl;
			cout<<"Press any number from the choice (1-6) to calculate the net salary of the requied designation: ";
			cin>>choice;
			switch(choice)
			{
				case 1:

				cout<<"<--------------------------------------------------------------------------------------------->"<<endl;
                cout<<" Basic Salary of the CEO must be greater than equal to 90k and less than equal to 150k          "<<endl;
				cout<<"            Bonus for the CEO Designation is the 50% of the Basic pay  "<<endl;
                cout<<"            Tax deduction for CEO Designation is the 30% of the net salary"<<endl;
                cout<<"<--------------------------------------------------------------------------------------------->"<<endl;
                cout<<"Basic Salary of the CEO is:"<<bsal_ceo<<endl;
				if(bsal_ceo>=90000 && bsal_ceo<=150000)
				{
					bonus_ceo=(bsal_ceo*50)/100; //formula to calculate the bonus for the ceo designation
                    cout<<"Bonus of the CEO is: "<<bonus_ceo<<endl;

				}
				else if (bsal_ceo<=0)
				{

				  cout<<"unable to compute bonus for this Designation "<<endl;
			    }
			    else
			    {

			        cout<<"Unable to compute Bonus because Basic Salary out of range "<<endl;
                }
                ceo_tax=(bsal_ceo+bonus_ceo)*30/100;//formula to calculate the tax deduction from the ceo net salary
                net_sal_ceo=(bsal_ceo+bonus_ceo-ceo_tax);//formula to calculate the net salary of the ceo
                  if(bsal_ceo<=0)
				   {
				   cout<<"Unable to compute Tax Deduction for this Designation "<<endl;

			       }
			       else if(bsal_ceo>=90000 && bsal_ceo<=150000)
			       {
			       	cout<<"Tax deducted from the CEO salary will be: "<<ceo_tax<<endl;
				   }
				   else
				   {
				   	cout<<"Unable to compute Tax Deduction because Basic Salary out of range "<<endl;
				   }
				   if(bsal_ceo<=0)
				   {
				    cout<<"Unable to compute Net Salary for this Designation "<<endl;

			      }
			      else if(bsal_ceo>=90000 && bsal_ceo<=150000)
			      {
			      	cout<<"Net Salary of the CEO :"<<net_sal_ceo<<endl;
				  }
				  else
				  {
				  	cout<<"Unable to compute Net Salary because Basic Salary out of range"<<endl;
				  }

				 break;
				 case 2:


				cout<<"<--------------------------------------------------------------------------------------------->"<<endl;
				cout<<"Basic Salary of the Assistant must be greater than equal to 65k and less than equal to 80k "<<endl;
				cout<<"             Bonus for the Assistant Designation is the 40% of the Basic pay  "<<endl;
			    cout<<"             Tax deduction for Assistant Designation is the 25% of the net salary "<<endl;
			    cout<<"<--------------------------------------------------------------------------------------------->"<<endl;
			        cout<<"Basic Salary of the Assistant is:"<<bsal_asst<<endl;
					if(bsal_asst>=65000 && bsal_asst<=80000 )
			        {
			        	bonus_asst=(bsal_asst*40)/100; //formula to calculate the bonus for the assistant designation
			        	cout<<"Bonus of the Assistant Designation is :"<<bonus_asst<<endl;
					}
					else if (bsal_asst<=0)
				{

				  cout<<"unable to compute bonus for this Designation "<<endl;
			    }
				  else
			    {

			        cout<<"Unable to compute Bonus because Basic Salary out of range "<<endl;
                }
				asst_tax=(bsal_asst+bonus_asst)*25/100;	//formula to calculate the tax deduction from the assistant net salary
				net_sal_asst=(bsal_asst+bonus_asst-asst_tax);//formula to calculate the net salary of the assistant
			    if(bsal_asst<=0)
				   {
				   cout<<"Unable to compute Tax Deduction for this Designation "<<endl;

			       }
			       else if(bsal_asst>=65000 && bsal_asst<=80000)
			       {
			       	cout<<"Tax deducted from the Assistant salary will be: "<<asst_tax<<endl;
				   }
				   else
				   {
				   	cout<<"Unable to compute Tax Deduction because Basic Salary out of range "<<endl;
				   }
				   if(bsal_asst<=0)
				   {
				    cout<<"Unable to compute Net Salary for this Designation "<<endl;

			      }
			      else if(bsal_asst>=65000 && bsal_asst<=80000)
			      {
			      	cout<<"Net Salary of the Assistant :"<<net_sal_asst<<endl;
				  }
				  else
				  {
				  	cout<<"Unable to compute Net Salary because Basic Salary out of range"<<endl;
				  }
			    break;
			    case 3:

			    	  cout<<"<--------------------------------------------------------------------------------------------->"<<endl;
			          cout<<"Basic Salary of the HR must be greater than equal to 50k and less than equal to 60k "<<endl;
					  cout<<"             Bonus for the HR Designation is the 30% of the Basic pay  "<<endl;
			          cout<<"             Tax deduction for HR Designation is the 20% of the net salary               "<<endl;
			          cout<<"<--------------------------------------------------------------------------------------------->"<<endl;
			        cout<<"Basic Salary of the HR is:"<<bsal_hr<<endl;
					if(bsal_hr>=50000 && bsal_hr<=60000)
			        {
			        	bonus_hr=(bsal_hr*30)/100;//formula to calculate the bonus for the hr designation
			        	cout<<"Bonus of the HR Designation is :"<<bonus_hr<<endl;
					}
			        	else if (bsal_hr<=0)
				    {

				  cout<<"unable to compute bonus for this Designation "<<endl;
			        }
			          else
			       {

			        cout<<"Unable to compute Bonus because Basic Salary out of range "<<endl;
                  }
			       hr_tax=(bsal_hr+bonus_hr)*20/100;//formula to calculate the tax deduction from the hr net salary
				   net_sal_hr=(bsal_hr+bonus_hr-hr_tax);//formula to calculate the net salary of the hr
				   if(bsal_hr<=0)
				   {
				   cout<<"Unable to compute Tax Deduction for this Designation "<<endl;

			       }
			       else if(bsal_hr>=50000 && bsal_hr<=60000)
			       {
			       	cout<<"Tax deducted from the HR salary will be: "<<hr_tax<<endl;
				   }
				   else
				   {
				   	cout<<"Unable to compute Tax Deduction because Basic Salary out of range"<<endl;
				   }
				   if(bsal_hr<=0)
				   {
				    cout<<"Unable to compute Net Salary for this Designation "<<endl;

			      }
			      else if(bsal_hr>=50000 && bsal_hr<=60000)
			      {
			      	cout<<"Net Salary of the HR :"<<net_sal_hr<<endl;
				  }
				  else
				  {
				  	cout<<"Unable to compute Net Salary because Basic Salary out of range"<<endl;
				  }
				   break;
				 case 4:

						cout<<"<--------------------------------------------------------------------------------------------->"<<endl;
				        cout<<" Basic Salary of the Clerk must be greater than equal to 40k and less than equal to 48k        "<<endl;
						cout<<"           Bonus for the Clerk Designation is the 25% of the Basic pay  :"<<endl;
				        cout<<"           Tax deduction for Clerk  Designation is the 15% of the net salary :"<<endl;
				        cout<<"<--------------------------------------------------------------------------------------------->"<<endl;
				        cout<<"Basic Salary of the Clerk: "<<bsal_clerk<<endl;
					    if (bsal_clerk>=40000 && bsal_clerk<=48000)
				        {
				        	bonus_clerk=(bsal_clerk*25)/100;//formula to calculate the bonus for the clerk designation
				        	cout<<"Bonus of the Clerk Designation is :"<<bonus_clerk<<endl;

						}
				        else if (bsal_clerk<=0)
				       {

				             cout<<"unable to compute bonus for this Designation "<<endl;
			           }
				        else
			          {

			                cout<<" Unable to compute Bonus because Basic Salary out of range"<<endl;
                      }
				       clerk_tax=(bsal_clerk+bonus_clerk)*15/100;//formula to calculate the tax deducted from the clerk net salary
					   net_sal_clerk=(bsal_clerk+bonus_clerk-clerk_tax);//formula to calculate the net salary of the clerk
				if(bsal_clerk<=0)
				   {
				   cout<<"Unable to compute Tax Deduction for this Designation "<<endl;

			       }
			       else if(bsal_clerk>=40000 && bsal_clerk<=48000)
			       {
			       	cout<<"Tax deducted from the Clerk salary will be: "<<clerk_tax<<endl;
				   }
				   else
				   {
				   	cout<<"Unable to compute Tax Deduction because Basic Salary out of range"<<endl;
				   }
				   if(bsal_clerk<=0)
				   {
				    cout<<"Unable to compute Net Salary for this Designation "<<endl;

			      }
			      else if(bsal_clerk>=40000 && bsal_clerk<=48000)
			      {
			      	cout<<"Net Salary of the Clerk :"<<net_sal_clerk<<endl;
				  }
				  else
				  {
				  	 cout<<"Unable to compute Net Salary because Basic Salary out of range"<<endl;
				  }

				  break;
				    case 5:

						cout<<"<--------------------------------------------------------------------------------------------------->"<<endl;
				        cout<<"Basic Salary of the Receptionist must be greater than equal to 30k and less than equal to 38k "<<endl;
						cout<<"             Bonus for the Receptionist Designation is the 20% of the Basic pay  "<<endl;
				        cout<<"             Tax deduction for Receptionist is the 10% of the net salary "<<endl;
				        cout<<"<-------------------------------------------------------------------------------------------------->"<<endl;
						 cout<<"Basic Salary of the Receptionist is:"<<bsal_recpt<<endl;
						if (bsal_recpt>=30000 && bsal_recpt<=38000)
				        {
				        	bonus_recpt=(bsal_recpt*20)/100; //formula to calculate the bonus for receptionist Designation
				        	cout<<"Bonus of the Receptionist is :"<<bonus_recpt<<endl;
						}
				         else if (bsal_recpt<=0)
				       {

				             cout<<"unable to compute bonus for this Designation "<<endl;
			           }
				        else
			          {

			                cout<<"Unable to compute Bonus because Basic Salary out of range "<<endl;
                      }
					 recpt_tax=(bsal_recpt+bonus_recpt)*10/100; //formula to calculate the tax deduction from the receptionist net salary
					 net_sal_recpt=(bsal_recpt+bonus_recpt-recpt_tax);//formula to calculate the net salary of the recptionist
					if(bsal_recpt<=0)
				   {
				   cout<<"Unable to compute Tax Deduction for this Designation "<<endl;

			       }
			       else if(bsal_recpt>=30000 && bsal_recpt<=38000)
			       {
			       	cout<<"Tax deducted from the Receptionist salary will be: "<<recpt_tax<<endl;
				   }
				   else
				   {
				   	cout<<"Unable to compute Tax Deduction because Basic Salary out of range"<<endl;
				   }
				   if(bsal_recpt<=0)
				   {
				    cout<<"Unable to compute Net Salary for this Designation "<<endl;

			      }
			      else if(bsal_recpt>=30000 && bsal_recpt<=38000)
			      {
			      	cout<<"Net Salary of the Receptionist :"<<net_sal_recpt<<endl;
				  }
				  else
				  {
				  	cout<<"Unable to compute Net Salary because Basic Salary out of range"<<endl;
				  }

				     break;
					case 6:

					cout<<"<--------------------------------------------------------------------------------------------->"<<endl;
					cout<<"Basic Salary of the Probation must be greater than equal to 20k and less than equal to 25k"<<endl;
					cout<<"            Bonus for the Probation Designation is the 05% of the Basic pay "<<endl;
					cout<<"            Tax deduction for Probation is the 07% of the net salary "<<endl;
					cout<<"<--------------------------------------------------------------------------------------------->"<<endl;
                    cout<<"Basic Salary of the Probation is :"<<bsal_prob<<endl;
					 if(bsal_prob>=20000 && bsal_prob<=25000)
					 {
					 	bonus_prob=(bsal_prob*05)/100; //formula to calculate the bonus for Probation Designation
					 	cout<<"Bonus of the Probation is :"<<bonus_prob<<endl;
					 }
					     else if (bsal_prob<=0)
				       {

				             cout<<"unable to compute bonus for this Designation "<<endl;
			           }
					   else
			          {

			                cout<<"Unable to compute Bonus because Basic Salary out of range "<<endl;
                      }
					   prob_tax=(bsal_prob+bonus_prob)*07/100;//formula to calculate the tax deduction from the Probation net salary
					   net_sal_prob=(bsal_prob+bonus_prob-prob_tax);//formula to calculate the net salary of the Probation
					if(bsal_prob<=0)
				   {
				   cout<<"Unable to compute Tax Deduction for this Designation "<<endl;

			       }
			       else if(bsal_prob>=20000 && bsal_prob<=25000)
			       {
			       	cout<<"Tax deducted from the Probation salary will be: "<<prob_tax<<endl;
				   }
				   else
				   {
				   	cout<<"Unable to compute Tax Deduction because Basic Salary out of range"<<endl;
				   }
				   if(bsal_prob<=0)
				   {
				    cout<<"Unable to compute Net Salary for this Designation "<<endl;

			      }
			      else if(bsal_prob>=20000 && bsal_prob<=25000)
			      {
			      	cout<<"Net Salary of the Probation :"<<net_sal_prob<<endl;
				  }
				  else
				  {
				  	cout<<"Unable to compute Net Salary because Basic Salary out of range"<<endl;
				  }
				   break;
		}

        }

};

int main()
{
    ifstream in; //this is used for reading from the file
    ofstream out; //this is used for writing in the file
    string read_password,enterd_password,start,detail,password ;//string type variable
    int counter,number,pin; //integer type variable

    in.open("password.txt" , ios::in ); //opening the file

    while (!in.eof()) //this will run until the end of the end of the file;
    {
        in>>read_password; //read_password store the password from the file
    }

    in.close(); //closing the file

    start :;

    for (int i=5;i>=0;i--) //loop
    {
         cout<<"enter the password : "; //display on console screen
         cin>>enterd_password; //get the password from the user

    if (enterd_password == read_password) //applying the condition that will check the password that the user entered with the password from the file
    {
        cout<<"\nyou have successfully login "<<endl; //display on console screen

    cout<<"\t\t\t\t*******************************************"<<endl;
	cout<<"\t\t\t\t*      Salary Calculation System          *"<<endl;
	cout<<"\t\t\t\t*******************************************"<<endl;
	cout<<endl;
	Salaryinfo sal; //creating object of the child class
	sal.setname(); //calling of set name function
	sal.setcity(); //calling of set city function
	sal.setCnic(); //calling of set cnic function
    sal.getname(); // calling of get name function
    sal.getcity(); //calling of get city function
    sal.getCnic(); //calling of get cnic function
    sal.calcsalary(); //calling of calc salary function

        break; //break the loop
    }
    else if (i==0) // if " i " is equal to zero then this condition will run
    {
        cout<<"\nyour system is locked for 5 seconds please wait\n\n"; //display on console screen
        Sleep (5000); //this will sleep the program for only five seconds

        if (counter >= 10) //condition
		{
			cout<<"press 1 if you want to forget the password or press any button (except 1) to stop the program : ";//display on console screen
			cin>>number;//get from the user

			cout<<endl; //give the break of one line

			if (number == 1) //condition
			{
				for (int i=3;i>=0;i--) //loop
				{
					cout<<"enter the pin code : "; //display on console screen
					cin>>pin; //get from the user

					if (pin == 1234) //condition
					{
					out.open("new_password.txt" , ios::out); //opening the file for writing

						cout<<"\nenter the new password : ";//display on console screen
						cin>>password; //get from the user
						out<<password; //write in the file

						out.close(); //closing the file

						remove("password.txt"); //deleting the password file
						rename("new_password.txt" , "password.txt"); //renaming the new_password file as the password file

						cout<<"\nrestart the program"; //display on console screen
						break; //break the loop
					}
					else if (i==0) //condition
					{
						cout<<"\nyour system is permanently locked ";//display on console screen
						break; //break the loop
					}
					else if (pin != 1234) //condition
					{
						system ("CLS");//clear the screen
						cout<<"you have "<<i<<" chances left\n\n";//display on console screen
					}
				}
			}
			return 0;
		}

        goto start; //this will jump to the start
    }
        else if (enterd_password != read_password) // if entered password is not equal to zero then this condition will run
    {
        system ("CLS");//clear the screen
        cout<<"you enter the wrong password "<<endl;//this will display on screen
        cout<<"\nyou have "<<i<<" chances left\n"<<endl; //display on console screen
        counter++;//counter
    }
    }
    return 0;
}

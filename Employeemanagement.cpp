#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
struct emp{
     string name,address,id;
     int contact,salary;
};
//emp e[500];
string arr1[30],arr2[12],arr3[20],arr4[20],arr5[10];
int total=0;
//---------------Enter Employee data------------
void Empdata()
{
     int choice;
     cout<<"How many employee data do you want to enter"<<endl;
     cin>>choice;
     for(int i=total;i<total+choice;i++)
     {
         cout<<"\nEnter data of employee-: "<<i+1<<endl;
         cout<<"Employee Name-:";
         cin>>arr1[i];
         cout<<"Enter ID No-:";
         cin>>arr2[i];
         cout<<"Enter Address-:";
         cin>>arr3[i];
         cout<<"Enter Contect No-:";
         cin>>arr4[i];
         cout<<"Enter Salary-:"<<endl;
         cin>>arr5[i];
      }
     total=total+choice;
}
//-------show employee data---------
void ShowData()
{
  
   if(total==0){
      cout<<"No Data is entired please--- "<<endl;
      cout<<"Enter the data---->"<<endl;
   }
   else{
        for(int i=0;i<total;i++)
        {
           cout<<"\n\n--Data of employee-: "<<i+1<<endl;
           cout<<"Employee Name -:"<<arr1[i]<<endl;
           cout<<"ID No-:"<<arr2[i]<<endl;
           cout<<"Address-:"<<arr3[i]<<endl;
           cout<<"Salary-:"<<arr4[i]<<endl;
           cout<<"Contact No-:"<<arr5[i]<<endl;
        }
   }
}
//-----------Employee search data----
void SearchData()
{
    if(total!=0)
    {
          string id;
          cout<<"Enter id of data which you want to search"<<endl;
          cin>>id;
          for(int i=0;i<total;i++){
               if(id==arr2[i]){
               cout<<"Data of employee "<<i+1<<endl;
               cout<<"Employee Name -:"<<arr1[i]<<endl;
               cout<<"Id-:"<<arr2[i]<<endl;
               cout<<"Address-:"<<arr3[i]<<endl;
               cout<<"Salary-:"<<arr4[i]<<endl;
               cout<<"Contact-:"<<arr5[i]<<endl;
               break;
               }
               if(i==total-1){
                    cout<<"No such record found "<<endl;
               }
		      }
    }
    else{
        cout<<"Your Record is Empty";
     }
}
//-------Update Employee data---------
void UpdateData()
{
    if(total!=0)
    {
        string id;
        cout<<"Enter Id of data which you want to update"<<endl;
        cin>>id;
        for(int i=0;i<total;i++)
        {
          if(id==arr2[i]){
	          //---------Previous data--------
	          cout<<"Previous data...........";    
	          cout<<"Data of employee "<<i+1<<endl;
	          cout<<"Employee Name "<<arr1[i]<<endl;
	          cout<<"Id"<<arr2[i]<<endl;
	          cout<<"Address"<<arr3[i]<<endl;
	          cout<<"Salary"<<arr4[i]<<endl;
	          cout<<"Contact"<<arr5[i]<<endl;
	          //---------Enter New data-----------
	          cout<<"\nEnter New data............";
	          cout<<"Enter data of employee "<<i+1<<endl;
	          cout<<"Enter Employee Name";
	          cin>>arr1[i];
	          cout<<"EnterID No-:";
	          cin>>arr2[i];
	          cout<<"Enter Address-:";
	          cin>>arr3[i];
	          cout<<"Enter Contect No-:";
	          cin>>arr4[i];
	          cout<<"Enter Salary-:";
	          cin>>arr5[i];
	          break;
	          }
	          if(i==total-1)
	             cout<<"No such record found "<<endl;
         }
        //else
        cout<<"Your record is empty"<<endl;
    }  
}   
//-----------Delete employee data----------
void DeleteData()
{
     if(total!=0)
     {
          char user;
          cout<<"Press 1 to delete full record"<<endl;
          cout<<"Press 2 to delete spacific record"<<endl;
          user=getch();
          if(user=='1'){
               total=0;
          }
          else//(user==2)
          {
               string id;
               cout<<"Enter Id of data which you want to delete"<<endl;
               cin>>id;
               for(int i=0;i<total;i++)
               {
                  if(id==arr2[i])
                   {
                        for(int j=i;j<total;j++)
                        {
                              arr1[j]=arr1[j+1];
                              arr2[j]=arr2[j+1];
                              arr3[j]=arr3[j+1];
                              arr4[j]=arr4[j+1];
                              arr5[j]=arr5[j+1];
                              total--;
                        break;
                        } 
                        if(i==total-1){
                            cout<<"No such record found "<<endl;  
                        }    
                    }
                }
          }     
     }
}
//--------Logout Employee Id -------------
void Logout()
{
   int i;
   if(i==6)
   {
      cout<<"Logout Please !! Enter new Employee data"<<endl;
   }
   

}
//-------main Function---------
int main()
{
     cout<<"\n\n\tEmployee Management System"<<endl;
     cout<<"\n\n\tCanndidate--------Sign Up--------Please"<<endl;
     string username;
     int password;
     cout<<"\n\tEnter Username-:";
     cin>>username;
     cout<<"\n\tEnter Password-:";
     cin>>password;
     cout<<"\n\t\tYour id is creating please wait";
     for(int i=0;i<4;i++)
     {
          cout<<".";
          Sleep(500);
          
     }
     //---Create succefully id ------
     cout<<"\n\t\tYour id created succefully"<<endl;
     system("CLS");
     Start:
        system("CLS");
     cout<<"\n\n\tEmployee Management System"<<endl;
     //------Login Id--------
     cout<<"\n\n\t-Please----Login-------Id-"<<endl;
     string username1;
     int password1;
     cout<<"\n\tUsername-: ";
     cin>>username1;
     cout<<"\n\tPassword-:";
     cin>>password1;
     if(username1==username && password1==password)
     {
        system("CLS");
        //char user;
        int user;
        while(true)
        {
            cout<<"Press 1 to enter data-:"<<endl;
            cout<<"Press 2 to show data-:"<<endl;
            cout<<"Press 3 to search data-:"<<endl;
            cout<<"Press 4 to update data-:"<<endl;
            cout<<"Press 5 to delete data-:"<<endl;
            cout<<"Press 6 to logout data-:"<<endl;
            cout<<"Press 7 to exit-:"<<endl;
            //user=getch();
            cin>>user;
            system("CLS");
            switch(user)
            {
               case 1:
                  Empdata();
                  break;
               case 2:
                  ShowData();
                  break;
               case 3:
                  SearchData();
                  break;
               case 4:
                  UpdateData();
                  break;
               case 5:
                  DeleteData();
                  break;
               case 6:
                  Logout();
                  break;
               case 7:
                  exit(0);
                  break;   
               default:
                  cout<<"\aInvalid Input";
                  break;                   
            }
        }
     }
     else if(username1==username)
     {
        cout<<"Your Username in incorrect"<<endl;
        Sleep(3000);
        goto Start;
     }
     else if(password1==password)
     {
          cout<<"Your Password is incorrect"<<endl;
          Sleep(3000);
          goto Start;
     }
     else{
     	cout<<"\t\aInvalid username and password";
     	Sleep(3000);
     	goto Start;
	 }

  return 0;  
}

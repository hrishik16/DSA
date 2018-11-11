#include<iostream>
using namespace std;

class cstudent
{
private:
	int Total,rn[30];
	string sname[30];
public:
	void fgetdata()
	   {
	    	cout<<"enter total number of students: ";
			cin>>Total;
			for(int i=0;i<Total;i++)
			{

			    cout<<"enter the roll number : ";
			    cin>>rn[i];
			    cout<<"enter name of the student : ";
			    	    cin>>sname[i];
			}  
	   }
	   
	   
	/*void funistd(cstudent a, cstudent b)
	   {
	    			int flag,count=0;
			for(int k=0;k<a.Total;k++)
			{       
			         cout<<"   rn[k]: "<<rn[k];
			         cout<<"   a.rn[k]: "<<a.rn[k];
				rn[k]=a.rn[k];
				cout<<" rn[k]: "<<rn[k];
				sname[k]=a.sname[k];
			count++;
		    }
		    cout<<"Count: "<<count;
			for(int i=0;i<b.Total;i++)
			{
			   flag=0;
			   cout<<"    1st for loop   ";
				for(int j=0;j<a.Total;j++)
				{
					if(b.rn[i]==a.rn[j])
					{       cout<<"   If of second for loop   ";
						flag=1;
						cout<<"   Flag of second for loop    ";
						break;
					}
				}
				   cout<<"   second for loop completed   ";
					if(flag==0)
				    {
				      cout<<"   First for loop with if flag=0   ";
				      cout<<" rn[count] "<<rn[count];
				      cout<<"   b.rn[i]:  "<<b.rn[i];
				    	rn[count]=b.rn[i];
				    	sname[count]=b.sname[i];
				    cout<<" rn[count] "<<rn[count];
				      cout<<"   b.rn[i]:  "<<b.rn[i];
				    	count++;
				    
				    }
				 cout<<"  1st for loop removed  ";
			}
			 cout<<"   Count after break:   "<<count;
		Total=count; 
	   }
	   */
	   
	/*void fintstd(cstudent x, cstudent y)
	   {
	      int count=0;
			for(int i=0;i<y.Total;i++)
				{
				   int flag=0;
					for(int j=0;j<x.Total;j++)
					{
						if(y.rn[i]==x.rn[j])
						{
							flag=1;
							break;
						}
					}
						if(flag==1)
					    {
					    	rn[count]=y.rn[i];
					    	sname[count]=y.sname[i];
					    	count++;
					    }
				}
		Total=count;
	   }*/
	void fdiff(cstudent c, cstudent d)
	   {
	      	int count=0;
				for(int i=0;i<c.Total;i++)
					{
					   int flag=0;
						for(int j=0;j<d.Total;j++)
						{
							if(c.rn[i]==d.rn[j])
							{
								flag=1;
								break;
							}
						}
							if(flag==0)
						    {
						    	rn[count]=c.rn[i];
						    	sname[count]=c.sname[i];
						    	count++;
						    }
					}
			Total=count;
	   }
//	void fdnt(int);
	void fdisplay() 
	   {
	     cout<<" count is "<<Total;
		 cout<<"\n{";
		 for(int i=0;i<Total;i++)
		  {
		   cout<<rn[i]<<"-"<<sname[i];
		      if(i!=Total-1)
		      cout<<",";
	   }cout<<"}"<<endl;
	   }
};

int main()
{
cstudent total, cricket,bm,uni,in,di;
int ch;
/*int n=0;
cout<<"Enter total number of students in SE comp : ";
cin>>n;
*/
do
{
cout<<"\n Select the operation";
cout<<"\n 1. To take input";
cout<<"\n 2. To display Set details";
cout<<"\n 3. Union";
cout<<"\n 4. Intersection";
cout<<"\n 5. Difference";
cout<<"\n 6. Dont Play \n";
cin>>ch;
switch(ch)

{
case 1:{

		 cout<<"Enter total number of students in SE comp : \n";
		 total.fgetdata();


		cout<<"enter the details of students who play cricket\n";
		cricket.fgetdata();

		cout<<"enter the details of students who play Badminton\n";
		bm.fgetdata();
    break;
}


       case 2:{
		cout<<"Set of students in SE comp : ";
		total.fdisplay();

		cout<<"Set of students who play Cricket = ";
		cricket.fdisplay();

		cout<<"\nSet of students who play Badminton = ";
		bm.fdisplay();

		 break;
		}

      case 3: {

		uni.funistd(cricket,bm);
		cout<<"\nSet of students who play either cricket or Badminton or both = ";
		uni.fdisplay();
		break;
		}


/*	case 4:{
			in.fintstd(cricket,bm);
			cout<<"\nset of students who play both cricket and badminton = ";
			in.fdisplay();
			break;
	       }

      case 5:
             {
		di.fdiff(cricket,bm);
		cout<<"\nset of students who play only cricket = ";
		di.fdisplay();

		di.fdiff(bm,cricket);
		cout<<"\nset of students who play only Badminton = ";
		di.fdisplay();
		break;
            }
    case 6:{

		di.fdiff(total,uni);
		cout<<"\nnumber of students who dont play anything = ";
		di.fdisplay();

		break;}*/
	}
}while(ch<=6);
return 0;
}

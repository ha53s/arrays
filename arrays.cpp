#include <iostream>
#include <string>
using namespace std;

int main(){
	
	const int R =4;
	const int C =5;
	
	int table [R][C] = {
	{8,9,7,5,9},
	{9,9,10,10,5},
	{6,10,11,10,9},
	{9,11,5,8,10},
	};
	
	
	//print out first table before changes
	cout<<"      SUN MON TUE WED THU"<<endl;
	
	for(int i =0 ;i<R; i++ ){
		if(i == 0)
			cout<<"Noura  ";
		if(i == 1)
			cout<<"Aziz   ";
		if(i == 2)
			cout<<"Deem   ";
		if(i == 3)
			cout<<"Omar   ";
			
		for(int j =0; j<C ;j++){
			if(table[i][j]<10)
				cout<<table[i][j]<<"   ";
			else
				cout<<table[i][j]<<"  ";
		}
		cout<<endl<<endl;
		
	}
	
	string name;
	string day;
	
	//change values less than 6
	for(int i =0; i< R; i++)
		for(int j = 0 ; j<C; j++){
			if(table[i][j]<6){
				table[i][j]= 6;
				switch(j){
					case 0:
						day = "SUN";
						break;
					case 1:
						day = "MON";
						break;
					case 2:
						day = "TUE";
						break;
					case 3:
						day = "WED";
						break;
					case 4:
						day = "THU";
						break;
				}
				switch(i){
					case 0:
						name = "Noura";
						break;
					case 1:
						name = "Aziz";
						break;
					case 2:
						name = "Deem";
						break;
					case 3:
						name = "Omar";
						break;
			
				}
				cout<<"The hours for "<<name<<" on "<<day<<" was changed to be 6."<<endl;
					
			}
		}
		
		
	
	//print new table 
	cout<<endl<<endl;
		cout<<"      SUN MON TUE WED THU"<<endl;
		for(int i =0 ;i<R; i++ ){
		if(i == 0)
			cout<<"Noura  ";
		if(i == 1)
			cout<<"Aziz   ";
		if(i == 2)
			cout<<"Deem   ";
		if(i == 3)
			cout<<"Omar   ";
			
		for(int j =0; j<C ;j++){
			if(table[i][j]<10)
				cout<<table[i][j]<<"   ";
			else
				cout<<table[i][j]<<"  ";
		}
		cout<<endl<<endl;
	}
	
		//find the day with the highest and lowest working hours.
			int arr[C];
		
		for(int i = 0; i<C; i++){
			int sum = 0;
			for(int j =0 ;j<R;j++){
				sum += table[j][i];
				
			}
			arr[i] = sum;	
		}
		
		//find highest and lowest days with working hours
		int min =arr[0],max = arr[0];
		for(int i =0 ; i<C ; i++){
			if(arr[i]>max)
				max = arr[i];
			if(arr[i]<min)
				min = arr[i];
		}
		
		if(max == arr[0])
			cout<<"The day that most employees have high working hours: SUN"<<endl;
		if(max == arr[1])
			cout<<"The day that most employees have high working hours: MON"<<endl;
		if(max == arr[2])
			cout<<"The day that most employees have high working hours: TUE"<<endl;
		if(max == arr[3])
			cout<<"The day that most employees have high working hours: WED"<<endl;
		if(max == arr[4])
			cout<<"The day that most employees have high working hours: THU"<<endl;
			
			
		if(min == arr[0])
			cout<<"The day that most employees have low working hours: SUN"<<endl;
		if(min == arr[1])
			cout<<"The day that most employees have low working hours: MON"<<endl;
		if(min == arr[2])
			cout<<"The day that most employees have low working hours: TUE"<<endl;
		if(min == arr[3])
			cout<<"The day that most employees have low working hours: WED"<<endl;
		if(min == arr[4])
			cout<<"The day that most employees have low working hours: THU"<<endl;
			cout<<endl;



     
 	 string emp;
 	 cout<<"Enter an employee to find information about working hours in the week, the day of high working hour and salary: ";
 	 cin>>emp;
 	 cout<<endl;
 	 //hour per week
 	  int hour[R];
 	for(int i = 0; i<R;i++){
     	int total = 0;
     	for(int j =0;j<C;j++){
     		total+=table[i][j];
		 }	
		 hour[i] = total;
	 }
	 
	 
	 //most day with working hours for one employee
	 
	 string mostday[R], mostday2[R];
	 
	 for(int i =0; i<R;i++){
	 	int large = table[i][0];
	 	for(int j = 0 ; j<C; j++){
	 		if(table[i][j]> large)
	 			large = table[i][j];
		 }
		if(large == table[i][0])
		 	mostday[i] = "SUN";
		else if(large == table[i][1])
		 	mostday[i] = "MON";
		else if(large == table[i][2])
		 	mostday[i] = "TUE";
		else if(large == table[i][3])
		 	mostday[i] = "WED";
		else if(large == table[i][4])
		 	mostday[i] = "THU";
		 	
		 if(large == table[i][0] && mostday[i] != "SUN" )
		 	mostday2[i] = "SUN";
		else
		 	 if(large == table[i][1] && mostday[i] != "MON")
		 	mostday2[i] = "MON";
		else if(large == table[i][2] && mostday[i] != "TUE")
		 	mostday2[i] = "TUE";
		else if(large == table[i][3] && mostday[i] != "WED")
		 	mostday2[i] = "WED";
		else if(large == table[i][4] && mostday[i] != "THU")
		 	mostday2[i] = "THU";
		 	
	 }
	 
	 //calculate salary
	 
	 int salary[R];
	for(int i = 0; i<R ; i++){
		int sal =0;
		for(int j =0 ; j<C; j++){
			if(table[i][j] > 9){
	 			sal += (table[i][j]-9)*200;
	 			sal += 9*100;
	 		}
	 		else
	 			sal += table[i][j]*100;
		}
		salary[i] = sal;
	}
	 
	 if(emp == "Noura" ){

	 	cout<<"Noura has worked  "<<hour[0]<<" hours in the week."<<endl;
	 	cout<<"The day that Noura has high working hours is "<<mostday[0]<<" and "<<mostday2[0]<<endl;
	 	cout<<"Noura's Salary: "<<salary[0]<<" SAR in the week."<<endl;
	 }
	else if(emp == "Aziz"){	
		cout<<"Aziz has worked  "<<hour[1]<<" hours in the week."<<endl;
		cout<<"The day that Aziz has high working hours is "<<mostday[1]<<" and "<<mostday2[1]<<endl;
		cout<<"Aziz's Salary: "<<salary[1]<<" SAR in the week."<<endl;
	}
	else if(emp == "Deem"){
		cout<<"Deem has worked  "<<hour[2]<<" hours in the week."<<endl;
		cout<<"The day that Deem has high working hours is "<<mostday[2]<<endl;
		cout<<"Deem's Salary: "<<salary[2]<<" SAR in the week."<<endl;
	}
	else if(emp == "Omar"){
		cout<<"Omar has worked  "<<hour[3]<<" hours in the week."<<endl;
		cout<<"The day that Omar has high working hours is "<<mostday[3]<<endl;
		cout<<"Omar's Salary: "<<salary[3]<<" SAR in the week."<<endl;
	}
	else
		cout<<"Sorry, this employee does not exist. ";
	

	return 0;
}

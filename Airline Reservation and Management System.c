#include <stdio.h>
#include <conio.h>
#include <string.h>
int count=0,countT=0,desiredFlight[50],fn;
char flightRoute[10][50],flightTime[10][50],i,name[50][20],choice,username2[20],password2[20];
char username[20]="ibrahimdhedhi",password[20]="ibrahimdhedhi123";
void staff();
void passenger();
void main(){
	int start;
	start:
	printf("\n\t\tWelcome To Ibrahim Dhedhi Airlines\t\t\n\t\tWhich portal do you Want to access?\n");
	printf("\t\t\t1. Staff \n\t\t\t2. Passenger\n\t\t\t3. Exit\n");
	printf("\t\tEnter your Extension Number:  ");
	scanf("%d",&start);
	if (start==3){
		goto end;
	}
	else if(start==1){
		printf("\n\t\tStaff Login ");
		printf("\n\t\tUsername: ");
		scanf("%s",&username2);
		printf("\t\tPassword: ");
		scanf("%s",&password2);
		if((strcmp(username,username2)==0)&&(strcmp(password,password2)==0)){
		staff();
	}
		else{
			printf("\n\t\tInvalid Username or password!!\n");
		}
		goto start;
	}
	else if(start==2){
		passenger();
		goto start;
	}
	else{
		printf("\t\tInvalid Entry!!!!!!");
		goto start;
	}
	end:
		printf("\n\t\tThank You For Visiting Ibrahim Dhedhi Airlines.\t\t\n");
	getch();
}
void staff(){
	int staffTasks;
	printf("\n\t\tWelcome To The Staff Portal of Ibrahim Dhedhi Airlines\t\t\n\t\tWhat do you want to do?\n");
	printf("\t\t\t1. Sechedule Flights \n\t\t\t2. See Records\n\t\t\t3. Exit\n");
	printf("\t\tEnter the Serial Number:  ");
	scanf("%d",&staffTasks);
	switch(staffTasks){
		case 1:
			do{
			printf("\n\t\tEnter the Details of flight: \n");
			printf("\t\tDestination: From Karachi to ");
			scanf("%s",&flightRoute[count]);
			printf("\t\tTime: ");
			scanf("%s",&flightTime[count]);
			printf("\n\t\tFlight scheduled!\n");
			printf("\t\tDo you want to schedule another flight?(y for Yes / or press any key for No): ");
			scanf("%s",&choice);
			count++;
		}while(choice=='y');
			break;
		case 2:
			for(i=0;i<countT;i++){
				if(desiredFlight[i]!=0){
				printf("\n\t\tPassenger %d:\n\t\tName: %s\n\t\tDestination: %s\n",i+1,name[i],flightRoute[i]);
				printf("\n");
		}
			else {
				printf("");
			}		
			}
			break;
		}
	}

void passenger(){
	int passengerTasks,ticketNumber[50],ticketNumberu[50];
	printf("\n\t\tWelcome To The Passenger Portal of Ibrahim Dhedhi Airlines\t\t\n\t\tWhat do you want to do?\n");
	printf("\t\t\t1. See Flights \n\t\t\t2. Book a ticket\n\t\t\t3. Cancel a ticket\n\t\t\t4. Exit\n");
	printf("\t\tEnter the Serial Number:  ");
	scanf("%d",&passengerTasks);
	switch(passengerTasks){
		case 1:
			for(i=0;i<count;i++){
			printf("\n\t\tFlight %d:\n\t\tRoute: Karachi to %s\n\t\tTime:%s\n\n",i+1,flightRoute[i],flightTime[i]);
		} 
			break;
		case 2:
			do{
			printf("\t\tEnter your name: ");
			scanf("%s",&name[countT]);
			printf("\n");
			for(i=0;i<count;i++){
			printf("\t\tFlight %d:\n\t\tRoute:%s\n\t\tTime:%s\n\n",i+1,flightRoute[i],flightTime[i]);
		}
			printf("\t\tEnter your desired flight number: ");
			scanf("%d",&desiredFlight[countT]);	
			ticketNumber[countT]=rand()%5+1; 
			printf("\n\t\t\t\t\tTicket Booked !!!\n\t\t\t\t\tTicket Number:%d\n",ticketNumber[countT]);
			printf("\t\tDo you want to book another ticket?(y for Yes / or press any key for No): ");
			scanf("%s",&choice);
			countT++;
			i++;
		}while(choice=='y');
			break;
		case 3:
			printf("\n\t\tEnter you flight number: ");
			scanf("%d",&fn);
			printf("\t\tEnter you Ticket number: ");
			scanf("%d",&ticketNumberu[i]);
			for(i=0;i<=countT;i++){
			if(ticketNumber[i]==ticketNumberu[i]){
				desiredFlight[i]=0;
				printf("\n\t\tTicket Cancelled!!!\n");
			}
		}
	}
}
			

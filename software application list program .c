#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_LIMIT 20
struct application{           // create structure for store the data
	char name[20];            // name of the software application
	char author[20];          // name of author , who publish the application
	float version;            // version of the software
	int year;                 // software plublished year
	long price;                // price of the software
};
void swap1 (int*a,int*b){     // This swap function used for swap the integer values
	  int temp = *a;
	    *a = *b ;
		*b = temp;
	}
void swap3 (long*a,long*b){     // This swap function used for swap the long integer values
	  long temp = *a;
	    *a = *b ;
		*b = temp;
	}
void swap2 (float*a,float*b){  //This swap function used for swap the float values
	  float temp = *a;
	    *a = *b ;
		*b = temp;
	}

int main(){
	char temp[50];
	int n;
	int i,j;
	printf("Enter The Number of software:\n");
	scanf("%d",&n);
	fflush(stdin);           // The use of this line to clear the buffer
	struct application soft[n];  // array of object
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("Enter The Software Application Name:");
		fflush(stdin);
		fgets(soft[i].name,MAX_LIMIT,stdin);
		printf("Enter The Author name:");
		fgets(soft[i].author,MAX_LIMIT,stdin);
		printf("Enter The Software version:");
		scanf("%f",&soft[i].version);
		printf("Enter The Software Published year:");
		scanf("%d",&soft[i].year);
		printf("Enter The Price Of The Software:");
		scanf("%ld",&soft[i].price);
		printf("\n");
	}
	printf("**software application details given by author**\n");
	printf("\n");
	/* a) Display all the details of application by a given author.- Here, I was print all
	 the details given by the author */
	for(i=0;i<n;i++){
		printf("Software Application Name Is:%s",soft[i].name);
		printf("Author Name Is:%s",soft[i].author);
		printf("Software Version Is :%.2f\n",soft[i].version);
		printf("Software Published Year:%d\n",soft[i].year);
		printf("Price Of The Software:%ld Rupees\n",soft[i].price);
		printf("\n");
	}
	printf("\n");
	printf("**software application details accourding to their price**\n");
	printf("\n");
	/*b) Sort the details of application in the increasing order of price.- Here ,I was print all 
	the details according to their pice in increasing order*/
	for(i=1;i<=n;i++){
		for(j=0;j<n-1;j++){
			if(soft[j].price>soft[j+1].price){
				swap3(&soft[j].price,&soft[j+1].price);
				swap1(&soft[j].year,&soft[j+1].year);
				swap2(&soft[j].version,&soft[j+1].version);
				strcpy(temp,soft[j].name);
                strcpy(soft[j].name,soft[j+1].name);
                strcpy(soft[j+1].name,temp);
                strcpy(temp,soft[j].author);
                strcpy(soft[j].author,soft[j+1].author);
                strcpy(soft[j+1].author,temp);
			}
		}
	}
	for(i=0;i<n;i++){
		
		printf("Software Application Name Is:%s",soft[i].name);
		printf("Author Name Is:%s",soft[i].author);
		printf("Software Version Is :%.2f\n",soft[i].version);
		printf("Software Published Year:%d\n",soft[i].year);
		printf("Price Of The Software:%ld Rupees\n",soft[i].price);
		printf("\n");
	}
	printf("\n");
	/*c) Display the details of applications published by a given publisher in a given year.-
	 Here,I was print all the details given year by the author */
    int find;
	int count =0;
	printf("Enter The Year For Search:");
	scanf("%d",&find);
	printf("**software application details,given year by author**\n");
	printf("\n");
	for(i=0;i<n;i++){
		if(soft[i].year==find){
		printf("Software Application Name is:%s",soft[i].name);
		printf("Author Name Is:%s",soft[i].author);
		printf("Software version is :%.2f\n",soft[i].version);
		printf("Software Published year was:%d\n",soft[i].year);
		printf("Price Of The Software:%ld rupees\n",soft[i].price);
		printf("\n");
		}
		else{
			count++;
		}
		if(count==n){
			printf("No Record Found\n");
		}
	}
	printf("\n");
	printf("**software application details according to their author name**\n");
	printf("\n");
	/*d) Sort the list of applications in the increasing order of two fields , author
	 and publishing year of the books( i'm assuming here software application, not books ).-
	 Here,I was print all the details according to their author name in alphabetical order.*/
	for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
        if(strcmp(soft[i].author,soft[j].author)>0){
          strcpy(temp,soft[i].author);
          strcpy(soft[i].author,soft[j].author);
          strcpy(soft[j].author,temp);
          strcpy(temp,soft[i].name);
          strcpy(soft[i].name,soft[j].name);
          strcpy(soft[j].name,temp);
          swap3(&soft[i].price,&soft[j].price);
		  swap1(&soft[i].year,&soft[j].year);
		  swap2(&soft[i].version,&soft[j].version);
				
        } 
      }
    }
    for(i=0;i<n;i++){
		
		printf("Software Application Name Is:%s",soft[i].name);
		printf("Author Name Is:%s",soft[i].author);
		printf("Software Version Is :%.2f\n",soft[i].version);
		printf("Software Published Year:%d\n",soft[i].year);
		printf("Price Of The Software:%ld Rupees\n",soft[i].price);
		printf("\n");
	}
	printf("\n");
	printf("**software application details according to their year**\n");
	printf("\n");
    //Here,I was print all the details in incearing order according to their year.
	for(i=1;i<=n;i++){
		for(j=0;j<n-1;j++){
			if(soft[j].year>soft[j+1].year){
				swap3(&soft[j].price,&soft[j+1].price);
				swap1(&soft[j].year,&soft[j+1].year);
				swap2(&soft[j].version,&soft[j+1].version);
				strcpy(temp,soft[j].name);
                strcpy(soft[j].name,soft[j+1].name);
                strcpy(soft[j+1].name,temp);
                strcpy(temp,soft[j].author);
                strcpy(soft[j].author,soft[j+1].author);
                strcpy(soft[j+1].author,temp);
			}
		}
	}
	for(i=0;i<n;i++){
		
		printf("Software Application Name Is:%s",soft[i].name);
		printf("Author Name Is:%s",soft[i].author);
		printf("Software Version Is :%.2f\n",soft[i].version);
		printf("Software Published Year:%d\n",soft[i].year);
		printf("Price Of The Software:%ld Rupees\n",soft[i].price);
		printf("\n");
	}
    
}


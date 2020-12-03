#include <iostream>
#include <fstream>
#include <stdlib.h> 
#include <time.h> 
using namespace std;
	int a,e;
	double n=0;
	char q1,q2,q3,q4,s;
int x[5][4]={0};    
int  i, j;





void jiemian()
{	cout<<"**********************************************"<<endl;
    cout<<"*                                            *"<<endl;
	cout<<"*       欢迎使用学生成绩管理系统 v1.3        *"<<endl;
	cout<<"*     王小明   计算机2003班 2020.10.29       *"<<endl;
	cout<<"*                                            *"<<endl;
	cout<<"*     1、显示3个同学的成绩列表               *"<<endl;
    cout<<"*     2、求3人某课程的总分                   *"<<endl;
    cout<<"*     3、求3课程某人的总分                   *"<<endl;
    cout<<"*     0、退出                                *"<<endl;
    cout<<"*     请输入(0-3)选择：                      *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"**********************************************"<<endl;
    cout<<"输入你要执行的操作序号:";
}
void input1()
{ for(i=0; i<=5; i++)      
    { if(i==0)  
	 {  cout<<"          课程1    课程2     课程3   个人平均分";
         	cout<<endl;    }
    if(i==1) 
   { cout<<"学生1      ";
     for(j=0; j<4; j++)   cout<<x[i-1][j]<<"       ";
     cout<<endl;
	}
     if(i==2) 
   { cout<<"学生2      ";
     for(j=0; j<4; j++)   cout<<x[i-1][j]<<"       ";
     cout<<endl;
	}
	 if(i==3) 
   { cout<<"学生3      ";
     for(j=0; j<4; j++)   cout<<x[i-1][j]<<"       ";
     cout<<endl;
	}
	 if(i==4) 
   { cout<<"学生4      ";
     for(j=0; j<4; j++)   cout<<x[i-1][j]<<"       ";
     cout<<endl;
	}
	 if(i==5) 
   { cout<<"课程平均分 ";
     for(j=0; j<4; j++)   cout<<x[i-1][j]<<"       ";
     cout<<endl;
	}
	
	 }

}



void input2()
{
for(i=0; i<3; i++)      
    {   
       x[4][i] =0; 
		        } 
x[4][0]=x[0][0]+x[1][0]+x[2][0]+x[3][0];
x[4][1]=x[0][1]+x[1][1]+x[2][1]+x[3][1];
x[4][2]=x[0][2]+x[1][2]+x[2][2]+x[3][2];
x[4][3]=x[0][3]+x[1][3]+x[2][3]+x[3][3];

for(i=0; i<5; i++)      
    {
    if(i==1) 
   { cout<<"课程1      ";
      cout<<x[4][0]<<"       ";
     cout<<endl;
	}
     if(i==2) 
   { cout<<"课程2      ";
    cout<<x[4][1]<<"       ";
     cout<<endl;
	}
	 if(i==3) 
   { cout<<"课程3      ";
     cout<<x[4][2]<<"       ";
     cout<<endl;
	}
	 
	 }
}


void input3()
{for(i=0; i<4; i++)      
    {   
                x[i][3]=0; 		   
     } 	 
	 

for(i=0; i<4; i++)      
    {    for(j=0; j<3; j++)
                x[i][3] +=  x[i][j]; 		   
     } 
for(i=0; i<5; i++)      
    {
    if(i==1) 
   { cout<<"学生1      ";
      cout<<x[0][3]<<"       ";
     cout<<endl;
	}
     if(i==2) 
   { cout<<"学生2      ";
    cout<<x[1][3]<<"       ";
     cout<<endl;
	}
	 if(i==3) 
   { cout<<"学生3      ";
     cout<<x[2][3]<<"       ";
     cout<<endl;
	}
		 if(i==4) 
   { cout<<"学生4      ";
     cout<<x[3][3]<<"       ";
     cout<<endl;
	} 
	 }
	 

}






int main() 
{
 ifstream  infile; 
 ofstream  outfile;

 infile.open("cj1.txt"); 
 
 for(i=0; i<4; i++)   
    {    
	for(j=0; j<3; j++)
        infile >> x[i][j];   
     } 
for(i=0; i<4; i++)    
    {    for(j=0; j<3; j++) 
                x[i][3] +=  x[i][j]; 
	     	x[i][3]  /= 3;     
     } 
 for(i=0; i<3; i++)    
    {    for(j=0; j<4; j++) 
                x[4][i] +=  x[i][j]; 
		 x[4][i]  /= 4;     
     } 


 outfile.open("cj2.txt");
 for(i=0; i<5; i++)      
    {    for(j=0; j<4; j++) 
              outfile << x[i][j]<<" ";  
		outfile<<endl;   
     }
 

infile.close();
outfile.close(); 
 
  
     

	#include "password.cpp"
    jiemian();
   	
    while(cin>>a){
    	switch (a){
    	    case 1:{input1();
    	        system("pause") ;
				system("cls");
    	    	jiemian();	    	
				break;
			} 
            case 2:{
            	input2();
				system("pause") ;
				system("cls");
    	    	jiemian();      	
				break;
			} 
            case 3:{
            	input3();
				system("pause") ;
				system("cls");
    	    	jiemian();        	
				break;
			}	
           
            case 0: return 0;
          
	    }
	}
	system("pause");
    return 0;
}

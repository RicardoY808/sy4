/*password
#include <iostream>
#include <stdlib.h> 
#include <time.h> 
using namespace std;
int main(){   */
    int j,k=123,m;
	cout<<"请输入密码：";
	for(m=1;m<=3;m++){
		cin>>j;
		if(j==k){
			cout<<"密码正确，进入系统"<<endl;
			break;
		} 
		else{if(m==3){cout<<"密码错误，请重新打开程序"<<endl;
		              system("pause"); 
		              exit(100);
		              }
		    else	cout<<"密码错误，请重新输入密码："; 
			
		} 
	} 

//} 

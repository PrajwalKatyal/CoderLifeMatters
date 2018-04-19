#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //input number of test case
    int numberOfTestCase;
    cin >> numberOfTestCase;
    while(numberOfTestCase--){
            //Initialize if codeOnDay == 1 , codeOnDay == 0.
            int codeOnDay;
            int numberOfDays=0,count=0,flag=0;
            while(numberOfDays<30){
                cin >> codeOnDay;
                if(codeOnDay==0)
                    count=0;
                else
                    count++;
                // If the coder codes consecutively for more than 5 days, she gets bored.
                if(count==6)
                    flag=1;
                
                numberOfDays++;
            }
            if(flag==1)
                //she has been bored
                cout << "#coderlifematters" << "\n";
            else
                //she has not been bored
                cout << "#allcodersarefun" << "\n";
        
    }
    return 0;
}  

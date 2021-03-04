#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool areBracketsBalanced(string expr) 
{   
    stack<char> s; 
    char x;  
    for (int i = 0; i < expr.length(); i++)  
    { 
        if (expr[i] == '(')  
        {  
            s.push(expr[i]); 
            continue; 
        } 
  
        if (s.empty()) 
            return false; 
  
         
        if(expr[i]== ')'){ 
              
            x = s.top(); 
            s.pop(); 
            if (x == '{' || x == '[') 
                return false; 
        }
    }
  
    return (s.empty()); 
} 


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int arr[3]={0};
        for(int i=0;i<s.size();i++){
            arr[s[i]-65]++;
        }
        string expr="",expr1="";
        if(arr[0]+arr[1]==arr[2]){
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='A' || s[i]=='B')
                {
                    expr+='(';
                    expr1+=')';
                }
                else{
                    expr+=')';
                    expr1+='(';
                }
            }
            if(areBracketsBalanced(expr)||areBracketsBalanced(expr1))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else if(arr[1]+arr[2]==arr[0]){
            for(int i=0;i<s.size();i++)
            {
            if(s[i]=='B' || s[i]=='C'){
                expr+='(';
                    expr1+=')';
            }
            else{
                    expr+=')';
                    expr1+='(';
                }
            }
            if(areBracketsBalanced(expr)||areBracketsBalanced(expr1))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        
        }
        else if(arr[0]+arr[2]==arr[1]){
            for(int i=0;i<s.size();i++){
            if(s[i]=='A' || s[i]=='C'){
                expr+='(';
                    expr1+=')';
            }
            else{
                    expr+=')';
                    expr1+='(';
                }
            }
            if(areBracketsBalanced(expr)||areBracketsBalanced(expr1))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
class Solution {
public:
    string reverseWords(string s) {
        string result="",str="";
        int flag=-1,Flag=-1;
        char ch=' ';
        for(int i=s.length()-1;i>=0;i--){            
            ch=s[i];
            if(ch!=' '){
                str=ch+str;
                flag=1;    
            }
            else{
                if(flag==1){
                    result+=str+" ";
                    str="";
                    flag=0;
                    
                }
            }
        }
        if(flag==1)
        result+=str;
        
        if(result[result.length()-1]!=' ')
        return result;
        else{
            string answer="";
        for(int i=0;i<result.length()-1 ;i++)
        answer+=result[i];
        return answer;
        }
    }
};
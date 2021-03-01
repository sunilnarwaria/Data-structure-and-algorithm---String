
int i = 1,len = 0;
while(i<str.size(){
   if(s[i] == s[len]){
    len++;
     lps[i] = len;
     i++;
   }
  else{
     if(len > 0 ){
       len = lps[len-1]; 
     }else{
       lps[i] = 0;
       i++;
     }
  }
}
      

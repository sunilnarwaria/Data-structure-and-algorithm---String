 These are the base value
SYMBOL       VALUE
I             1
IV            4
V             5
IX            9
X             10
XL            40
L             50
XC            90
C             100
CD            400
D             500
CM            900 
M             1000       

  
  Algorithm to convert decimal number to Roman Numeral 
Compare given number with base values in the order 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1. Base value which
is just smaller or equal to 
the given number will be the initial base value (largest base value) .Divide the number by its
largest base value, the corresponding base symbol will be
repeated quotient times, the remainder will then become the number 
for future division and repetitions.The process will be repeated until the number becomes zero.
  example:- 
    
    Explanation:

Step 1

Initially number = 3549
Since 3549 >= 1000 ; largest base value will be 1000 initially.
Divide 3549/1000. Quotient = 3, Remainder =549. The corresponding symbol M will be repeated thrice.
Step 2

Now, number = 549
1000 > 549 >= 500 ; largest base value will be 500.
Divide 549/500. Quotient = 1, Remainder =49. The corresponding symbol D will be repeated once.
Step 3

Now, number = 49
50 > 49 >= 40 ; largest base value is 40.
Divide 49/40. Quotient = 1, Remainder = 9. The corresponding symbol XL will be repeated once.
Step 4

Now, number = 9
10> 9 >= 9 ; largest base value is 9.
Divide 9/9. Quotient = 1, Remainder = 0. The corresponding symbol IX will be repeated once.
Step 5




Finally number becomes 0, algorithm stops here.
Output obtained MMMDXLIX.
  // DECIAM TO ROMAN
  
  string Solution::intToRoman(int number) {
    
     int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12; 
    string ans = "";
    while(number>0)
    {
      int div = number/num[i];
      number = number%num[i];
      while(div--)
      {
        ans += sym[i];
      }
      i--;
    }
    return ans;
}

  
  
  //
  //  CONVERT ROMAN TO DECIAML
  //
  
     int Solution::romanToInt(string s) {
     int num[] = {1,5,10,50,100,500,1000};
    string sym = "IVXLCDM";
      unordered_map<char,int> mp;
      for(int i =0;i<7;i++){
          mp[sym[i]] = num[i];
      }
      int n = s.size();
      int ans = mp[s[n-1]];
      for(int i =n-2;i>=0;i--){
          if(mp[s[i]] < mp[s[i+1]]){
              ans -= mp[s[i]];
          }else{
               ans += mp[s[i]];
          }
          
      }
      return ans;
}
  

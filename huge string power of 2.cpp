// interviewbit
// if  (x & (x-1) == 0 ) then x i a poer of 2
int Solution::power(string A) {
    
    if(A == "1"){
        return 0;
    }
    long double n = stold(A);
    if(floor(log2(n)) == ceil(log2(n))){
        return 1;
    }
    return 0; 
}

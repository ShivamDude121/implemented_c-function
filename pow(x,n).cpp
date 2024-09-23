class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
        return 1;

        if(n<0)
        return 1.0/myPow(x,-n);




        double z=myPow(x,n/2);

        if(n%2==0)
        return z*z;
        else 
        return z*z*x;
        
    }
};

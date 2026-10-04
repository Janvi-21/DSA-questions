class Solution{
public:
	int addDigits(int num){
		//your code goes here
    if( num == 0) return 0;

    return 1 + (num-1) % 9;
	}
};
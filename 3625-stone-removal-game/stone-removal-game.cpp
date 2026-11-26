class Solution {
public:
    bool canAliceWin(int n) {

        int remove = 10;
        bool aliceturn = true;
        while( n >= remove){
            n-=remove;
            remove--;
            aliceturn = !aliceturn;
        }

        return !aliceturn;
        
    }
};
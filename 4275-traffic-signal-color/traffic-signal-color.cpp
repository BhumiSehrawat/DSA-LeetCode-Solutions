class Solution {
public:
    string trafficSignal(int timer) {
        string orange="Orange";
        string green="Green";
        string red="Red";
        if(timer==0){
            return green; 
        }else if(timer==30){
            return orange;
        }else if(timer>30 && timer<=90){
            return red;
        }else {
            return "Invalid";
        }
        
    }
};
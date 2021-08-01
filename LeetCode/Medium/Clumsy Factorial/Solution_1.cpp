class Solution {
public:
    int clumsy(int N) {
        int sum=0;
        for(int i=N;i>0;i-=4){
            if(i>2){
                int num = (i*(i-1)/(i-2));
                sum += (i==N ? num : -num) + (i-3);
            }
            else{
                int num = i;
                sum += (i==N ? num : -num) ;
            }
        }
        
        return sum;
    }
};

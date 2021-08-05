long long count = 0;
long long toh(int N, int from, int to, int aux) {
        // Your code here
        if(N==0){
           return 0;
        }
        toh(N-1, from,aux,to);
        count++;
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        toh(N-1,aux, to, from);
        return count;
    }

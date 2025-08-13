using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    unsigned long long cost = 0;
    
    for (int i = 1 ; i <= count; ++i) {
      cost += price * i;  
    }
    if (money < cost){
        return cost - money;
    } else {
        return 0;
    }
}
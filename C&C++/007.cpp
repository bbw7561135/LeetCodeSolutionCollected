#include <iostream>
#include <cmath>
using namespace std;

int reverse_int(int x) {

        long long temp=0; //long long 是64位的整型，取值范围为-2^63 ~ (2^63 - 1)
        long long tx=llabs(x);//llabs=long long absolute value function in cmath

        while(abs(tx)>0)
        {
            temp=temp*10+tx%10; //一步到位 非常厉害
            //比如321 那么第一次循环后 temp=1 tx=32 第二次后temp=12 tx=3
            //第三次后temp=123 tx=0

            tx=tx/10; //整除
        }
        if (temp>2147483647 || temp<=-2147483648)
        {
            return 0;
        }
        if (x>0)
        {
            return (int)temp;
        }
        else
        {
            return -1*(int)temp;
        }
    }


int main()
{
    int leet07 = 321;
    leet07 = reverse_int(leet07);
    cout<<leet07<<endl;

}

//output
//123

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout<<"enter the number of x1,x2,y\n";
    int n;
    double x1,x2,y,x1sm,x2sm,ysm,x1bar=0,x2bar=0,ybar=0;
    x1sm=0,x2sm=0,ysm=0;
    double x1x2sm=0,x1ysm=0,x2ysm=0;
    double x1sqsm=0,x2sqsm=0;
    cin>>n;
    cout << "please enter the x1,x2,y value\n";
    for (int i = 0; i < n; i++)
    {
        cin >> x1;
        cin >> x2;
        cin >> y;
        x1sm=x1sm+x1;
        x2sm=x2+x2sm;
        ysm=y+ysm;
        x1x2sm=x1x2sm+(x1*x2);
        x1ysm=x1ysm+(x1*y);
        x2ysm=x2ysm+(x2*y);
        x1sqsm=(x1*x1)+x1sqsm;
        x2sqsm=(x2*x2)+x2sqsm;
    }
    x1bar=x1sm/n;
    x2bar=x2sm/n;
    ybar=ysm/n;
    double bt1=((x2sqsm*x1ysm)-(x1x2sm*x2ysm))/((x1sqsm*x2sqsm)-(x1x2sm*x1x2sm));
    double bt2=((x1sqsm*x2ysm)-(x1x2sm*x1ysm))/((x1sqsm*x2sqsm)-(x1x2sm*x1x2sm));
    double bt0=ybar-bt1*x1bar-bt2*x2bar;
    cout<< "enter the new x1 and x2 values to find the latest y vale: \n";
    double ltx1=0,ltx2=0;
    cin>> ltx1;
    cin>> ltx2;
    double lty=bt0+(bt1*ltx1)+(bt2*ltx2);
    cout<< "the y value for latest x1 and x2 is: "<<lty<<"the value of beta 1 and beta 2 are ("<<bt1<<","<<bt2<<")\n";
}

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "ehter the number of x and y values\n";
    float n, xsin, ysin,xsm=0,ysm=0;
    cin >> n;
    cout << "please enter the x value\n";
    vector<float> x;
    for (int i = 0; i < n; i++)
    {
        cin >> xsin;
     x.push_back(xsin);
        xsm+=xsin;
    }
    float cov=0,varx=0;
    cout << "please enter the y value\n";
    vector<float> y;
    for (int i = 0; i < n; i++)
    {
        cin >> ysin;
        y.push_back(ysin);
        ysm+=ysin;
    }
    for (int i = 0; i < n; i++)
    {
        cov+= (y[i]- (ysm/n))*(x[i]- (xsm/n));
        varx+= (x[i]- (xsm/n))*(x[i]- (xsm/n));
    }
    float slope=cov/varx;
    cout << "the slope is: " << slope<<"\n";
    float c= (ysm/n)-(slope*(xsm/n));
    cout << "the y-intercept is: " << c<<"\n";
    cout << "evter a new value of either x or y to predict the other value (enter 'x' or 'y'): ";
    char choice;
    cin >> choice;
    cout <<"\n";
    if (choice == 'x')
    {
        cout << "enter the value of x: ";
        float newx;
        cin >> newx;
        float predy = slope * newx + c;
        cout << "the predicted value of y is: " << predy<<"\n";
    }
    else if (choice == 'y')
    {
        cout << "enter the value of y: ";
        float newy;
        cin >> newy;
        float predx = (newy - c) / slope;
        cout << "the predicted value of x is: " << predx<<"\n";
    }
    return 0;
}
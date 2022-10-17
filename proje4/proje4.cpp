#include <iostream>

using namespace std;

int main()
{
	float xp=1.61, yp=0 , p;

    float x[] = { 0.40, 0.66,0.83,1.27,1.37,1.40,1.54,1.71,2.02,2.50,2.79 };
    float y[] = {1.491,1.934,2.293,3.560,4.055,4.664,5.528,7.538,12.182,16.281  };

    int n = sizeof(x) / sizeof(x[0]);
	
    cout << "Enter interpolation point: " << xp ;
    
	for (int i = 1; i <= n; i++)
	{
		//p=1;
		p = y[i];
		for (int j = 1; j <= n; j++)
		{
			if (i != j)
			{
				p = p * (xp - x[j]) / (x[i] - x[j]);
			}
		}
		//yp = yp + p * y[i];
		yp+=p;
		
	}
	cout << endl << "Interpolated value at " << xp << " is " << yp;

	return 0;
}

